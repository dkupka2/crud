#include <stdio.h>
#include <string.h>
#include "defs.h"
#include "struct.h"
#include "user.h"

int check_upper_case_char(char *str) {
  int i = 0,
      result = 0;

  while (str[i] != '\0') {
    if (str[i] >= 65 && str[i] <= 90) {
      result++;
    }
    i++;
  }
  return result;
}

int check_lower_case_char(char *str) {
  int i = 0,
      result = 0;

  while (str[i] != '\0') {
    if (str[i] >= 97 && str[i] <= 122) {
      result++;
    }
    i++;
  }
  return result;
}

int check_numeric_char(char *str) {
  int i = 0,
      result = 0;

  while (str[i] != '\0') {
    if (str[i] >= 48 && str[i] <= 57) {
      result++;
    }
    i++;
  }
  return result;
}

int check_special_char(char *str) {
  int i = 0,
      result = 0;

  while (str[i] != '\0') {
    if (str[i] >= 32 && str[i] <= 47) {
      result++;
    }
    if (str[i] >= 58 && str[i] <= 64) {
      result++;
    }
    if (str[i] >= 91 && str[i] <= 96) {
      result++;
    }
    i++;
  }
  return result;
}

int check_passwd_len(char *str) {
  int result = 0;
  if (strlen(str) >= MIN_PASSWD_LEN && strlen(str) <= MAX_PASSWD_LEN) {
    result = 1;
  }

  return result;
}

int check_passwd_strength(char * str) {
  int passwd_strength = 0;

  if (check_upper_case_char(str) > 0) {
    passwd_strength++;
  }
  if (check_lower_case_char(str) > 0) {
    passwd_strength++;
  }
  if (check_numeric_char(str) > 0) {
    passwd_strength++;
  }
  if (check_special_char(str) > 0) {
    passwd_strength++;
  }
  if (check_passwd_len(str) > 0) {
    passwd_strength++;
  }

  return passwd_strength;
}

int check_passwd(char * str, char * passwd) {
  if (strcmp(str, passwd) != 0) {
    return 0;
  }

  return 1;
}

User * change_passwd(User *u) {
  char old_passwd[15],
       new_passwd[15];
  int passwd_strength = 0;
  printf(" Old password: ");
  fgets(old_passwd, MAX_PASSWD_LEN, stdin);
  old_passwd[strlen(old_passwd) - 1] = '\0';

  if (check_passwd(old_passwd, u->passwd) == 0) {
    printf("Incorrect password.\n");
    return u;
  }

  printf(" New password: ");
  fgets(new_passwd, MAX_PASSWD_LEN, stdin);
  new_passwd[strlen(new_passwd) - 1] = '\0';

  if ((passwd_strength = check_passwd_strength(new_passwd)) < PASSWD_STRENGTH_BEST) {
    printf("Password strength: %d, should be %d.\n", passwd_strength, PASSWD_STRENGTH_BEST);
  }

  strcpy(u->passwd, new_passwd);

  return u;
}
