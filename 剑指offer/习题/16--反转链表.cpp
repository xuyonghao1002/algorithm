#include <iostream>
#include "ListNode.h"
using namespace std;

ListNode* ReverseList(ListNode* pHead)
{
	ListNode* pNewHead = nullptr;
	ListNode* pNode = pHead;
	ListNode* pPre = nullptr;
	ListNode* pNext = nullptr;
	while (pNode != NULL)
	{
		if (pNode->m_pNext == NULL)
		{
			pNewHead = pNode;
		}
		pNext = pNode->m_pNext;
		pNode->m_pNext = pPre;

		pPre = pNode;
		pNode = pNext;
	}
	return pNewHead;
}



//int main()
//{
//	ListNode n1(1), n2(2), n3(3), n4(4);
//	ListNode* pHead = &n1;
//	n1.m_pNext = &n2;
//	n2.m_pNext = &n3;
//	n3.m_pNext = &n4;
//
//	ShowList(pHead);
//	ListNode* pNewHead = ReverseList(pHead);
//	ShowList(pNewHead);
//
//	system("pause");
//	return 0;
//}