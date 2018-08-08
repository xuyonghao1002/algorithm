#pragma once
#include <iostream>
using namespace std;

struct ListNode
{
	int m_nValue;
	ListNode* m_pNext;
	ListNode(int value)
	{
		this->m_nValue = value;
		this->m_pNext = NULL;
	}
	ListNode(int value, ListNode* pNext)
	{
		this->m_nValue = value;
		this->m_pNext = pNext;
	}
};

void ShowList(ListNode* pHead)
{
	if (pHead != NULL)
	{
		while (pHead != NULL)
		{
			cout << pHead->m_nValue << endl;
			pHead = pHead->m_pNext;
		}
	}
}