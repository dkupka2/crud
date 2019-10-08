/*
 * CRUD-dy database program
 * Header file for structures 
 * Dan Kupka
 */
#ifndef _STRUCTH_
#define _STRUCTH_

typedef struct node Node;
typedef struct user User;

struct node {
  int index;
  char str[256];
  Node *next;
  Node *prev;
};

struct file_header {
  char type[4];
  int num_recs;
};

typedef struct user {
  char uname[32];
  char passwd[64];
  int uid;
  User *next;
} User;

#endif
