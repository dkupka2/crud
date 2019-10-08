#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../defs.h"
#include "../struct.h"

int main(void) {
  FILE *fp;

  if (NULL == (fp = fopen(USER_FILE, "rb"))) {
    printf("'%s' not found. Exiting...\n", USER_FILE);
    return -1;
  }

  User *u = NULL;

  if (NULL == (u = malloc(16 * sizeof(User)))) {
    printf("Error: Unable to allocate memory.  Exiting...\n");
    return -1;
  }

  fread(u->uname, 1, strlen(u->uname), fp);
  fread(&u->uid, sizeof(u->uid), 1, fp);
  fread(u->passwd, 1, strlen(u->passwd), fp);

  printf("uname: %s\n", u->uname);
  printf("passwd: %s\n", u->passwd);
  printf("uid: %d\n", u->uid);

/*
  while (0 != fread(&u[i], sizeof(u[i]), 1, fp)) {
    printf("%s\n", u[i].uname);
    i++;
  }
*/

  free(u);
  fclose(fp);

  return 0;
}
