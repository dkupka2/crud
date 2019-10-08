#!/bin/sh
echo compiling test...
gcc -Wall -Wextra -Wformat-security -o testing testing.c passwd.c testfunc.c &&
echo running test, redirecting output to test.txt
./testing > test.txt
echo would you like to see the results ?
