/*
 * CRUD-dy database program
 * Header file for defines 
 * Dan Kupka
 */

#define DB_FILE "db.bin"
#define MIN_UNAME_LEN 3
#define MAX_UNAME_LEN 32
#define MIN_PASSWD_LEN 8
#define MAX_PASSWD_LEN 32
#define PASSWD_STRENGTH_NONE 0
#define PASSWD_STRENGTH_POOR 1
#define PASSWD_STRENGTH_MODERATE 2
#define PASSWD_STRENGTH_GOOD 3
#define PASSWD_STRENGTH_GREAT 4
#define PASSWD_STRENGTH_BEST 5
#define USER_FILE "users.bin"
#define USER_PRIVILEGE_LEVEL_ADMIN 1  /* can modify user db as well as records db */
#define USER_PRIVILEGE_LEVEL_USER 0   /* can modify records db only */
#define UDBTOOL "udbtool"
