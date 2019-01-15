#include "list.h"

void init(pNode* head)      //��ʼ��
{
	assert(head != NULL);
	*head = NULL;
}

void destoryList(pNode* phead)  //�ͷ�����
{
	pNode pDel = *phead;
	pNode pCur = *phead;
	assert(phead != NULL);
	while (pCur != NULL)
	{
		pDel = pCur;
		pCur = pCur->pNext;
		free(pDel);

	}
	*phead = NULL;

}

pNode buyNode(int data)    //����һ���½ڵ�
{
	pNode newNode = (pNode)malloc(sizeof(Node));
	if (newNode == NULL)
	{
		return NULL;
	}
	newNode->data = data;
	newNode->pNext = NULL;
	return newNode;
}

void pushBack(pNode* phead, int data)  //��ͷָ��ĵ�ַ�����ǿ����������ͷָ���ָ�򣬼�������ָ��  
{
	assert(phead != NULL);
	pNode newNode = buyNode(data);
	pNode pCur = *phead;
	if (*phead == NULL)   //������
	{
		*phead = newNode;
	}
	else
	{
		while (pCur->pNext != NULL)
		{
			pCur = pCur->pNext;
		}
		pCur->pNext = newNode;
	}
}

void pushFront(pNode* phead, int data) //ͷ��ڵ�
{
	assert(phead != NULL);
	pNode newNode = buyNode(data);
	newNode->pNext = (*phead);   //�½ڵ��ָ����ָ��ԭ��ͷ�ڵ��ָ��
	*phead = newNode;            //ͷ�ڵ�ָ���²����Ľڵ�
}


void printList(pNode phead)   //��ӡ
{
	pNode pCur = phead;
	while (pCur != NULL)
	{
		printf("%d -->", pCur->data);
		pCur = pCur->pNext;
	}
	printf("Over\n");
}

void insertNode(pNode* phead, pNode pos, int data) //Ĭ�ϲ嵽pos��ǰ��
{
	assert(phead);
	assert(pos);
	assert(*phead);
	pNode newNode = buyNode(data);
	pNode cur = *phead;
	if (pos == *phead)   //ֻ��һ���ڵ��ʱ��
	{
		*phead = newNode;
		newNode->pNext = pos;
	}
	while (cur != NULL && cur->pNext != pos)
	{
		cur = cur->pNext;
	}
	if (cur == NULL)
	{
		return;
	}
	cur->pNext = newNode;
	newNode->pNext = pos;
}

void reverseList(pNode* phead)  //�������ã���ָ�뷨
{
	if (phead == NULL || (*phead)->pNext == NULL)
	{
		return;
	}
	pNode prev = (*phead);
	pNode cur = prev->pNext;
	pNode temp = NULL;
	while (cur != NULL)
	{
		temp = cur->pNext;
		cur->pNext = prev;
		prev = cur;
		cur = temp;
	}
	(*phead)->pNext = NULL;
	(*phead) = prev;
}
pNode findNode(pNode phead, int data)
{
	assert(phead);
	pNode cur = phead;
	while (cur != NULL  && cur->data != data)
	{
		cur = cur->pNext;
	}
	return cur;
}

void modifyNode(pNode phead, pNode pos, int data)  //�޸�ĳһ�ڵ��������
{
	assert(pos != NULL);
	assert(phead != NULL);
	pNode cur = phead;
	while (cur != NULL && cur != pos)
	{
		cur = cur->pNext;
	}
	cur->data = data;
}

int GetListLength(pNode phead)  //��ȡ������
{
	pNode pCur = phead;
	int count = 0;
	while (pCur != NULL)
	{
		count++;
		pCur = pCur->pNext;
	}
	return count;
}

void popFront(pNode* phead)   //ͷɾ
{
	assert(phead != NULL);
	assert((*phead) != NULL);
	pNode del = *phead;
	*phead = del->pNext;
	free(del);
	del = NULL;
}

void popBack(pNode* phead) //βɾ
{
	assert(phead != NULL);
	assert((*phead) != NULL);
	pNode del = *phead;
	pNode prev = *phead;
	if ((*phead)->pNext == NULL)
	{
		free(*phead);
		*phead = NULL;
		return;
	}
	while (del->pNext != NULL)
	{
		prev = del;
		del = del->pNext;
	}
	free(del);
	del = NULL;
	prev->pNext = NULL;
}

void delNode(pNode* phead, pNode pos)    //ɾ������λ�õĽڵ�
{
	assert(pos != NULL);
	assert(phead != NULL);
	assert(*phead != NULL);
	pNode del = *phead;
	pNode prev = *phead;
	if (pos == (*phead))
	{
		*phead = pos->pNext;
		free(pos);
		return;
	}
	while (del!= NULL && del != pos)
	{
		prev = del;
		del = del->pNext;
	}
	if (del != NULL)
	{
		prev->pNext = del->pNext;
		free(del);
		del = NULL;
	}
	
}

void removeNde(pNode* phead, int data)   //����������ɾ����Ӧ�ڵ㣨��һ�γ��ֵģ�
{
	assert(phead != NULL);
	assert((*phead) != NULL);
	pNode del = *phead;
	pNode prev = *phead;
	while (del != NULL && del->data != data)
	{
		prev = del;
		del = del->pNext;
	}
	if (del == (*phead))    //��һ���ڵ���Ҫ��������
	{
		(*phead) = del->pNext;
		free(del);
		del = NULL;
	}
	else if (del != NULL)  // �����ڵ�ͳһ����
	{
		prev->pNext = del->pNext;
		free(del);
		del = NULL;
	}
}

