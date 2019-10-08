#include <stdio.h>
#include <string.h>
#include "defs.h"
#include "func.h"
#include "passwd.h"
#include "printing.h"
#include "struct.h"
#include "testdefs.h"
#include "testfunc.h"
#include "user.h"

int main(void) {
  test_passwd_strength();
  test_passwd_upper_case();
  test_passwd_lower_case();
  test_passwd_numeric();
  test_passwd_special();
  test_passwd_len();

  return 0;
}
