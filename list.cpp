/*
* 求链表的中间节点
* struct ListNode
* {
*   int m_nValue;
*   ListNode* next;
* };
*
* 测试用例：
* 1，功能测试：链表数为奇数个，链表个数为偶数个,返回中间节点的任意一个；
* 2，特殊输入测试:链表头节点为nullptr指针；
*
* 方法：快慢指针
*/

ListNode *FindMiddleNode(ListNode* pListHead)
{
    ListNode* fast,*slow;
    fast = pListHead;
    slow = pListHead;

    while(fast != nullptr && fast->next != nullptr && fast->next->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
