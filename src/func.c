/* 
 * CRUD-dy database program
 * Dan Kupka
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
#include "file.h"
#include "printing.h"
#include "records.h"
#include "user.h"

int choose(char ch, Node *n) {
  FILE *fp = NULL;

  switch(ch) {
    case 'c': create_record(n); break;
    case 'C': create_record(n); break;
    case 'r': read_record(n); break;
    case 'R': read_record(n); break;
    case 'u': update_record(n); break;
    case 'U': update_record(n); break;
    case 'd': delete_record(n); break;
    case 'D': delete_record(n); break;
    case 'p': print_record(n); break;
    case 'P': print_record(n); break;
    case 'l': load_db_file(fp, n); break;
    case 'L': load_db_file(fp, n); break;
    case 's': save_db_file(fp, n); break;
    case 'S': save_db_file(fp, n); break;
    case 'e': exit(1); break;
    case 'E': exit(1); break;
    default: printf(" I don't think I know what you mean. Try again!\n"); break;
  }
  return 0;
}

int start_main(void) {
  FILE *fp = NULL;
  char ch = '\0';
  User u;
  Node *n = NULL;

/*  user_login(u); */

  if (NULL == (n = malloc(sizeof(Node)))) {
    printf("Error - unable to allocate memory!\n");
    return -1;
  }

  n->prev = NULL;
  n->next = NULL;
  n->index = 0;
  strcpy(n->str, "foo");

  if (!db_file_exists(fp)) {
    printf(" File '%s' not found, creating...\n", DB_FILE);
    save_db_file(fp, n);
  } else if (db_file_exists(fp)) {
    printf(" File '%s' found...\n", DB_FILE);
    load_db_file(fp, n);
  } else {
    printf(" Unknown error regarding file '%s'.\n", DB_FILE);
  }

  while (ch != 'E' || ch != 'e') {
    print_record_options();
    scanf("%c", &ch);
    getchar();
    choose(ch, n);
  }
  return 0;
}

int udb_choose(char ch, User *u) {
  FILE *fp = NULL;
  switch(ch) {
    case 'c': create_user(u); break;
    case 'C': create_user(u); break;
    case 'l': load_users_db(u); break;
    case 'L': load_users_db(u); break;
    case 'u': update_users_db(u); break;
    case 'U': update_users_db(u); break;
    case 'd': delete_users(u); break;
    case 'D': delete_users(u); break;
    case 'p': print_users(u); break;
    case 'P': print_users(u); break;
    case 's': save_users_db(fp, u); break;
    case 'S': save_users_db(fp, u); break;
    case 'e': exit(1); break;
    case 'E': exit(1); break;
    default: printf(" I don't think I know what you mean. Try again!\n"); break;
  }

  return 0;
}
