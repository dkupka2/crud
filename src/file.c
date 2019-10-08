/* 
 * CRUD-dy database program
 * Dan Kupka
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
#include "struct.h"

int user_file_exists(void) {
  FILE *fp;
  if (!(fp = fopen(USER_FILE, "rb"))) {
    return 0;
  } else {
    fclose(fp);
    return 1;
  }
}

int db_file_exists(FILE *fp) {
  if (!(fp = fopen(DB_FILE, "rb"))) {
    return 0;
  } else {
    fclose(fp);
    return 1;
  }
}

int load_db_file(FILE *fp, Node *n) {
  if (!(fp = fopen(DB_FILE, "rb"))) {
    return -1;
  } else {
    fread(&n, sizeof(n), 1, fp);
    fclose(fp);
  }
  return 0;
}

int save_db_file(FILE *fp, Node *n) {
  if (!(fp = fopen(DB_FILE, "wb"))) {
    return 1;
  } else {
    fwrite(&n, sizeof(n), 1, fp); 
    fclose(fp);
    return 0;
  } 
}

int save_users_db_file(FILE *fp, User *u) {
  if (!(fp = fopen(USER_FILE, "wb"))) {
    return 1;
  } else {
    fwrite(u->uname, 1, strlen(u->uname), fp); 
    fwrite(&(u->uid), sizeof(u->uid), 1, fp); 
    fwrite(u->passwd, 1, strlen(u->passwd), fp); 

    fclose(fp);
    return 0;
  } 
}
 
int create_users_db_file(User *u) {
  FILE *fp;
  if (NULL == (fp = fopen(USER_FILE, "wb"))) {
    return 0;
  } else {
    save_users_db_file(fp, u);
    return 1;
  }
  return 0;
}

int load_users_db(User *u) {
  u->uid = -1;
  return 0;
}

int update_users_db(User *u) {
  u->uid = -1;
  return 0;
}

int save_users_db(User *u) {
  FILE *fp = NULL;
  if (NULL = ()) {

  }

  return 0;
}
