//
//  XFNodeAlgorithm.c
//  XFCommonAlgorithm
//
//  Created by 许锋 on 2018/1/25.
//  Copyright © 2018年 许锋. All rights reserved.
//

#include "XFNodeAlgorithm.h"
#include <stdlib.h>

/**
 *链表结构体声明
 */
typedef struct node{
    int member;
    struct node *pNext;
}Node,*pNode;

/**
 *函数声明
 */

/**
 *创建链表函数
 */
pNode createList(int count);

/**
 *遍历链表函数
 */
void TraverseList(pNode);

pNode pHead = NULL;            //    定义初始化头节点，等价于 struct Node *pHead == NULL

/**
 *链表排序
 */
pNode bubbleSort(pNode head){
    pNode p,q,tail,temp;
    tail =NULL;
    while (head->pNext !=tail) {
        p = head;
        q = p->pNext;
        while (q->pNext !=tail) {
            if(p->pNext->member > q->pNext->member){
                temp = q->pNext;
                p->pNext=q->pNext;
                q->pNext=q->pNext->pNext;
                p->pNext->pNext = q;
                q=temp;
            }
            p=p->pNext;
            q=q->pNext;
        }
        tail = q;
    }
    return tail;
}

/**
 *链表倒叙
 */
pNode ReverseList(pNode head){
    pNode p1,p2,p3;
    p1=head;
    p2=p1->pNext;
    while (p2) {
        p3=p2->pNext;
        if(p1 != head){
            p2->pNext=p1;
        }else{
            p2->pNext = NULL;
        }
        p1=p2;
        p2=p3;
    }
    head->pNext=NULL;
    pNode pHead =(pNode)malloc(sizeof(Node));
    pHead->pNext= p1;
    return pHead;
}

#pragma mark - 链表常用操作

/**
 *创建链表list
 */
void createNodeList(int count) {
    pHead = createList(count);        //    创建一个非循环单链表，并将该链表的头结点的地址付给pHead
    //TraverseList(pHead);
}

/**
 *遍历创建的链表list
 */
void traverseNodeList(void) {
    TraverseList(pHead);
}

/**
 *链表排序
 */
void nodeBubbleSort(void) {
    bubbleSort(pHead);
    printf("链表排序结果:");
    TraverseList(pHead);
    printf("\n");
}

/**
 *链表倒叙
 */
void nodeReverseList(void) {
    pHead = ReverseList(pHead);
    printf("链表倒序结果:");
    TraverseList(pHead);
    printf("\n");
}


/**
 *创建链表函数
 */
pNode createList(int count){
    pNode pHead = (pNode)malloc(sizeof(Node));
    pNode pTail = pHead;
    pTail->pNext = NULL;
    for(int i=0;i<count;i++){
        pNode pNew = (pNode)malloc(sizeof(Node));
        pNew->member = count-i;
        pTail->pNext = pNew;
        pNew->pNext=NULL;
        pTail=pNew;
    }
    return pHead;
}
//    遍历链表函数
void TraverseList(pNode pHead)
{
    pNode p = pHead->pNext;                            //将头节点的指针给予临时节点p
    while(NULL != p)                                //节点p不为空，循环
    {
        printf("%d ",p->member);
        p = p->pNext;
    }
    printf("\n");
    return ;
}


