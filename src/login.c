/* 
 * CRUD-dy database program
 * Dan Kupka
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
#include "file.h"
#include "printing.h"
#include "records.h"

int login(User u) {
  FILE *fp;
  if (!user_file_exists()) {
    printf("Error - Unable to open %s!", USER_FILE);
    return -1;
  }

  return 0;
}
