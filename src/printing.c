/* 
 * CRUD-dy database program
 * Dan Kupka
 */

#include <stdio.h>

void print_start_menu(void) {
  printf("\n CRUD Database Program\n");
  printf(" ---------------------\n\n");
  printf(" (S)tart\n");
  printf(" (Q)uit\n");
  printf("\n > ");
}

void print_record_options(void) {
  printf(" Choose an option for one or more records:\n\n");
  printf(" (C)reate\n");
  printf(" (R)ead\n");
  printf(" (U)pdate\n");
  printf(" (D)elete\n");
  printf(" (P)rint\n");
  printf(" (E)xit\n");
  printf("\n > ");
}

void print_udb_options(void) {
  printf(" udbtool - Choose an option:\n\n");
  printf(" (C)reate new user\n");
  printf(" (R)ead user db\n");
  printf(" (U)pdate existing user\n");
  printf(" (D)elete user\n");
  printf(" (P)rint user db\n");
  printf(" (E)xit\n");
  printf("\n > ");
}
