/*
 * udbtool - User file tool
 *
 * Makes use of various functions in file.c and user.c
 * for processing of users and passwords
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../defs.h"
#include "../file.h"
#include "../func.h"
#include "../struct.h"
#include "../passwd.h"
#include "../printing.h"
#include "../records.h"
#include"../user.h"

int main(void) {
  char ch = 0;
  User *u = NULL;

  if (NULL == (u = malloc(sizeof(User)))) {
    printf("Error: Unable to allocate memory!\n");
    return -1;
  }

  if (!user_file_exists()) {
    strcpy(u->uname, "admin");

    printf("Warning - '%s' does not exist, creating user %s...\n", USER_FILE, u->uname);
    printf("Setting password for user %s...\n", u->uname);

    change_passwd(u);
    u->uid = 0;
  }

  printf("uid\tuname\tpasswd\n");
  printf("%d\t%s\t%s\n", u->uid, u->uname, u->passwd);
  create_users_db_file(u);

  while (ch != 'e' || ch != 'E') {
    print_udb_options();
    scanf("%c", &ch);
    getchar();
    udb_choose(ch, u);
  }

  free(u);

  return 0;
}
