//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin)
//	{
//		//递归
//		if (pre.size() == 1 && vin.size() == 1)
//		{
//
//		}
//		TreeNode root = TreeNode(pre[0]);
//		int root_in_vin = -1;
//		for (int i = 0; i < vin.size(); i++)
//		{
//			if (vin[i] == root.val)
//			{
//				root_in_vin = i;
//				break;
//			}
//		}
//		//跟节点的左右节点
//		
//	}
//};