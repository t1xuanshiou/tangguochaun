//
// Created by LENOVO on 2023/11/2.
//
#include <stdio.h>
#include <stdlib.h>
struct Node {
  int data;
  struct Node* next;
};
struct Node* createCircularLinkedList(int n) {
  if (n <= 0) {
    return NULL;
  }
  struct Node* head = (struct Node*)malloc(sizeof(struct Node));
  head->data = 1;
  head->next =NULL ;
  for (int i = 2; i <= n; ++i) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = i;
    newNode->next = head;
    head = newNode;
  }
  return head;
}
void josephus(int m, struct Node** head) {
  if (*head == NULL) {
    return;
  }
  struct Node* current = *head;
  struct Node* prev = NULL;
  while (current->next != *head) {
    prev = current;
    current = current->next;
  }
  while (*head != (*head)->next) {
    for (int i = 1; i < m; ++i) {
      prev = *head;
      *head = (*head)->next;
    }
    prev->next = (*head)->next;
    free(*head);
    *head = prev->next;
  }
  printf("%d", (*head)->data);
  free(*head);
  *head = NULL;
}
int main() {
  int n, m;
  scanf("%d", &n);
  scanf("%d", &m);
  struct Node* head = createCircularLinkedList(n);
  josephus(m, &head);
  return 0;
}

