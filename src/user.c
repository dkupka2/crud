/* 
 * CRUD-dy database program
 * Dan Kupka
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
#include "records.h"
#include "file.h"
#include "printing.h"

/*
 *  check if user exists
 *  yes == 1, no == 0
 */
int user_exists(User *u, char * login_name) {
  int i = 0;
  if (strcmp(u[i].uname, login_name) == 0) {
    return 1;
  } else {
    return 0;
  }
}

/* TODO */
int create_user(User *u) {
  u->uid = 0;
  return 0;
}

/* TODO */
int delete_user(User *u) {
  u->uid = -1;
  return 0;
}

int user_login(User *u) {
  FILE *fp;
  char *login_name = NULL;

  if (NULL == (fp = fopen(USER_FILE, "rb"))) { 
    printf(" Error - Unable to open %s! Run %s\n", USER_FILE, UDBTOOL);
    return -1;
  }
  if (NULL == (login_name = malloc(32 * sizeof(char)))) {
    printf("Error: unable to allocate memory.\n");
    return -1;
  }
  printf("login\n\n");
  while (user_exists(u, login_name) == 0) {
    printf("user: ");
    fgets(login_name, strlen(login_name) + 1, stdin);
    login_name[strlen(login_name) - 1] = '\0';
    getchar();
  }
  return 0;
}

int delete_users(User *u) {

  return 0;
}

void print_users(User *u) {

}
