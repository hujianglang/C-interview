/*
* 链表中倒数第K个节点
* 题目：输入一个链表，输出该链表中倒数第K个节点，为了符合大多数人的习惯，本题从1开始计数，
* 即链表的尾节点是倒数第一个节点，比如，链表有6个节点，从头开始依次是1，2，3，4，5，6.这个链表的倒数第3个节点是值为4的节点。链表定义如下：
* struct ListNode
* {
*   int m_nValue;
*   ListNode* m_pNext;
* };
*
* 测试用例：
* 1，功能测试：第k个节点在链表的中间；第k个节点是链表的头节点，第k个节点是链表的尾节点）；
* 2，特殊输入测试:链表头节点为nullptr指针；链表的节点总数少于k；k等于0；
*/

ListNode *FindKthToTail(ListNode* pListHead, unsigned int k)
{
    if(pListHead == nullptr || k == 0)
        return nullptr;

    ListNode* pAhead = pListHead;
    ListNode* pBehind = nullptr;

    for(unsigned int i = 0; i < k -1; ++i)
    {
        if(pAhead->m_pNext != nullptr)
            pAhead = pAhead->m_pNext;
        else
            return nullptr;
    }
    pBehind = pListHead;
    while(pAhead->m_pNext != nullptr)
    {
        pAhead = pAhead->m_pNext;
        pBehind = pListHead->m_pNext;
    }
    return pBehind;
}
