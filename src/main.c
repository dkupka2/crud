/*
 * CRUD-dy database program
 * Dan Kupka
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"
#include "printing.h"

int main(void) {
  char ch = '\0';

  while (ch != 'q' || ch != 'Q') {
    print_start_menu();
    scanf("%c", &ch);
    getchar();

    if (ch == 's' || ch == 'S') {
      start_main();
    } else if (ch == 'q' || ch == 'Q') {
      printf(" Bye.\n");
      break;
    } else {
      printf(" I'm not sure what you mean, try again...\n");
    }
  }
  return 0;
}
