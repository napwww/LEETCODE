/*
 * @lc app=leetcode.cn id=21 lang=c
 *
 * [21] 合并两个有序链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode *l3 = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *p1 = list1;
    struct ListNode *p2 = list2;
    struct ListNode *p3 = l3;
    while(p1 && p2)
    {
        if (p1->val <= p2->val)
        {
            p3->next = p1;
            p3 = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p3 = p2;
            p2 = p2->next;
        }
    }
    if(!p1)
    {
        p3->next = p2;
    }
    else if(!p2)
    {
        p3->next = p1;
    }
    return l3->next;
}
// @lc code=end

