#include <iostream>
#include "2023/08/24.cpp"
#include "lists.h"

int main() {
    Q24 *q = new Q24();
    ListNode *head = createRandomList(4);
    head->list();
    return 0;
}
