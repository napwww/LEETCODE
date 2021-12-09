/*
 * @lc app=leetcode.cn id=876 lang=c
 *
 * [876] 链表的中间结点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}


// @lc code=end
/*
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode *p = head;
    int cnt = 0;
    int mid;
    while(p)
    {
        p = p->next;
        cnt++;
    }
    mid = cnt/2;
    p = head;
    for(int i = 0;i < mid;i++)
    {
        p = p->next;
    }
    return p;
}


