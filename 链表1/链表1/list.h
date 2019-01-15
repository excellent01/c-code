#define _CRT_SECURE_NO_WARNINGS 2
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#ifndef __LIST_H__
#define __LIST_H__

typedef struct Node
{
	int data;
	struct Node* pNext;
}Node, *pNode;
void init(pNode* head);  //��ʼ��ͷָ��
void destoryList(pNode* phead);//�ͷ�����
pNode buyNode(int data);   //����һ���ڵ�
void pushFront(pNode* phead, int data);  //ͷ��ڵ� 
void insertNode(pNode* phead,pNode pos,int data);  //�������һ���ڵ�
void pushBack(pNode* phead, int data);  //β��ڵ�
void printList(pNode phead);   //��ӡ
void reverseList(pNode* phead);  //��������
int GetListLength(pNode phead); //��ȡ������
pNode findNode(pNode phead, int data);  //���������е�ĳһԪ�أ�����ָ��ýڵ��ָ��
void modifyNode(pNode phead, pNode pos, int data);  //�޸�ĳһ�ڵ��������
void popFront(pNode* phead);   //ͷɾ
void popBack(pNode* phead);    //βɾ
void delNode(pNode* phead,pNode pos);    //ɾ����һλ�õĽڵ�
void removeNde(pNode* phead, int data);   //����������ɾ����Ӧ�ڵ㣨��һ�γ��ֵģ�
#endif //_LIST_H__