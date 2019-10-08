#include <stdio.h>
#include <string.h>
#include "defs.h"
#include "func.h"
#include "passwd.h"
#include "printing.h"
#include "struct.h"
#include "testdefs.h"
#include "user.h"

void test_passwd_strength(void) {

  /* password strength function tests */
  printf("Check overall password strength\n\n");
  printf("Result\t\tExpected\tActual\tValue\n");
  printf("Empty:\t\t0\t\t%d\t%s\n", check_passwd_strength(PASSWD_LEN0), PASSWD_LEN0);
  printf("Upper:\t\t1\t\t%d\t%s\n", check_passwd_strength(PASSWD_UPPER_LEN1), PASSWD_UPPER_LEN1);
  printf("Lower:\t\t1\t\t%d\t%s\n", check_passwd_strength(PASSWD_LOWER_LEN1), PASSWD_LOWER_LEN1);
  printf("Numeric:\t1\t\t%d\t%s\n", check_passwd_strength(PASSWD_NUMERIC_LEN1), PASSWD_NUMERIC_LEN1);
  printf("Special:\t1\t\t%d\t%s\n", check_passwd_strength(PASSWD_SPECIAL_LEN1), PASSWD_SPECIAL_LEN1);
  printf("\n");
}

  /* individual password rules */

void test_passwd_upper_case(void) {

  /* contains at least 1 uppercase char */
  printf("Result\t\tExpected\tActual\tValue\n");
  printf("Up:\t\t1\t\t%d\t%s\n", check_upper_case_char(PASSWD_TEST1_LEN8), PASSWD_TEST1_LEN8);
  printf("\n");

}

void test_passwd_lower_case(void) {
  /* contains at least 1 lowercase char */

}

void test_passwd_numeric(void) {
  /* contains at least 1 numeric char */

}

void test_passwd_special(void) {
  /* contains at least 1 special (non-alphanumeric) char */

}

void test_passwd_len(void) {
  /* is at least 8 to at most 15 characters in length */
  printf("Result\t\tExpected\tActual\tValue\n");
  printf("Len 0:\t\t0\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN0), PASSWD_LEN0);
  printf("Len 1:\t\t0\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN1), PASSWD_LEN1);
  printf("Len 2:\t\t0\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN2), PASSWD_LEN2);
  printf("Len 3:\t\t0\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN3), PASSWD_LEN3);
  printf("Len 4:\t\t0\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN4), PASSWD_LEN4);
  printf("Len 5:\t\t0\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN5), PASSWD_LEN5);
  printf("Len 6:\t\t0\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN6), PASSWD_LEN6);
  printf("Len 7:\t\t0\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN7), PASSWD_LEN7);
  printf("Len 8:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN8), PASSWD_LEN8);
  printf("Len 9:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN9), PASSWD_LEN9);
  printf("Len 10:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN10), PASSWD_LEN10);
  printf("Len 11:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN11), PASSWD_LEN11);
  printf("Len 12:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN12), PASSWD_LEN12);
  printf("Len 13:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN13), PASSWD_LEN13);
  printf("Len 14:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN14), PASSWD_LEN14);
  printf("Len 15:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN15), PASSWD_LEN15);
  printf("Len 16:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN16), PASSWD_LEN16);
  printf("Len 17:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN17), PASSWD_LEN17);
  printf("Len 18:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN18), PASSWD_LEN18);
  printf("Len 19:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN19), PASSWD_LEN19);
  printf("Len 20:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN20), PASSWD_LEN20);
  printf("Len 21:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN21), PASSWD_LEN21);
  printf("Len 22:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN22), PASSWD_LEN22);
  printf("Len 23:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN23), PASSWD_LEN23);
  printf("Len 24:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN24), PASSWD_LEN24);
  printf("Len 25:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN25), PASSWD_LEN25);
  printf("Len 26:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN26), PASSWD_LEN26);
  printf("Len 27:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN27), PASSWD_LEN27);
  printf("Len 28:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN28), PASSWD_LEN28);
  printf("Len 29:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN29), PASSWD_LEN29);
  printf("Len 30:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN30), PASSWD_LEN30);
  printf("Len 31:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN31), PASSWD_LEN31);
  printf("Len 32:\t\t1\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN32), PASSWD_LEN32);
  printf("Len 33:\t\t0\t\t%d\t%s\n", check_passwd_len(PASSWD_LEN33), PASSWD_LEN33);

  printf("\n");

}
