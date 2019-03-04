#include "List.h"
#include <iostream>

using namespace std;

void PrintList(const ListNode *head) {
    if (head != nullptr) {
        const ListNode *node = head;
        while (node != nullptr) {
            cout << node->value << " ";
            node = node->next;
        }
        cout << endl;
    }
}
