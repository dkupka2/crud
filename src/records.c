/*
 * CRUD-dy database program
 * Dan Kupka
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

void print_record(Node *n) {
  Node *curr = n;
  printf("\nIndex\tString\n\n");
  while (curr != NULL) {
    printf("%d\t%s\n", curr->index, curr->str);
    curr = curr->next;
  }
  printf("\n");
}

int create_record(Node *n) {
  Node *curr = n;
  int i = 0;
  while (curr->next != NULL) {
//    curr->prev = curr;
    curr = curr->next;
    i++;
  }
  if (NULL == (curr->next = malloc(sizeof(Node)))) {
    printf("Error - unable to allocate memory!\n");
  }
  curr->index = i;
  strcpy(curr->str, "foo");
  
  return 0;
}

int read_record(Node *n) {
  return 0;
}

int update_record(Node *n) {
  return 0;
}

int delete_record(Node *n) {
  return 0;
}
