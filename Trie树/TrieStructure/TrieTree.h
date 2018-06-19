#ifndef TRIETREE_H
#define TRIETREE_H
#include "TrieNode.h"
#include <vector>
class TrieTree
{
public:
	TrieTree() {}
	~TrieTree()
	{
		for (int i = 0; i < _node_vec.size(); i++)
		{
			delete _node_vec[i];
		}
	}

	void insert(const char* word);
	bool search(const char* word);
	bool startWith(const char* prefix);
	TrieNode* root()
	{
		return &_root;
	}

private:
	TrieNode* now_node()
	{
		TrieNode* node = new TrieNode();
		_node_vec.push_back(node);
		return node;
	}
	std::vector<TrieNode*> _node_vec;
	TrieNode _root;
};


#endif // !TRIETREE_H