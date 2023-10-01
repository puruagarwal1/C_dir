#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode* next;
};

int hasCycle(struct ListNode* head) {
    struct ListNode* tortoise = head;
    struct ListNode* hare = head;

    while (hare != NULL && hare->next != NULL) {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare) {
            return 1;
        }
    }

    return 0;
}

struct ListNode* createNode(int data) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct ListNode* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = head->next;

    if (hasCycle(head)) {
        printf("Cycle detected.\n");
    } else {
        printf("No cycle detected.\n");
    }

    free(head->next->next->next->next);
    free(head->next->next->next);
    free(head->next->next);
    free(head->next);
    free(head);

    return 0;
}
