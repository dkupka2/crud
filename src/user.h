/*
 * CRUD-dy database program
 * Header file for function
 * prototypes
 * Dan Kupka
 */

#ifndef _USERH_
#define _USERH_

#include "struct.h"

int user_login(User *);
int user_exists(User *);
int create_user(User *);
int delete_user(User *);
int create_user(User *);
int delete_users(User *);
void print_users(User *);

#endif
