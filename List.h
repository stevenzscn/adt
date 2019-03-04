#ifndef _LIST_H_
#define _LIST_H_

struct ListNode {
    int value = 0;
    ListNode *next = nullptr;
};

void PrintList(const ListNode *head);

#endif
