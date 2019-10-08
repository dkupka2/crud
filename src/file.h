/*
 * CRUD-dy database program
 * Header file for function
 * prototypes
 * Dan Kupka
 */

#ifndef _FILEH_
#define _FILEH_

#include "struct.h"

int user_file_exists(void);
int db_file_exists(FILE *);
int create_db_file(FILE *, Node *);
int load_db_file(FILE *, Node *);
int save_db_file(FILE *, Node *);
int save_users_db_file(FILE *, User *);
int create_users_db_file(User *);
int load_users_db(User *);
int update_users_db(User *);
int save_users_db(FILE *, User *);
int save_users_db(FILE *, User *);

#endif
