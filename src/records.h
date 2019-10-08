/*
 * CRUD-dy database program
 * Header file for function
 * prototypes
 * Dan Kupka
 */

#ifndef _RECORDSH_
#define _RECORDSH_

#include "struct.h"

void print_record(Node *);
int create_record(Node *);
int read_record(Node *);
int update_record(Node *);
int delete_record(Node *);

#endif
