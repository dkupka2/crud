#ifndef _PASSWDH_
#define _PASSWDH_

#include "struct.h"

User change_passwd(User *);
int check_upper_case_char(char *);
int check_lower_case_char(char *);
int check_numeric_case_char(char *);
int check_special_case_char(char *);
int check_passwd_len(char *);
int check_passwd_strength(char *);

#endif
