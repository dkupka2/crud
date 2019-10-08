CRUD.

What is 'CRUD' ?

Welcome to the early '90s!

This is an attempt at creating a quasi-database software program 
using the C programming language, mainly attempting to sitck with
C99 conventions at this point - though this may be switched or forked
to use C11 or C18 later.

Why are you making 'CRUD' ?
Or: "There are many other, arguably better programs available
 or being developed."

Autodidacticism.

Why 'CRUD' ?

'CRUD' is a useful acronym relating to databases and records that
expands to the following four typical general functions:

  1. (C)reate.
  2. (R)ead.
  3. (U)pdate.
  4. (Delete.

'CRUD' is also useful as an expletive when something in this program
goes terribly, horribly wrong - which, at this point, is invariable. :)
Until issues are resolved completely or as much as possible, this
expletive - among others - may be employed.

How do I compile 'CRUD' ?

Simple!

cd <path to directory where CRUD dir is located>/src
make

Also don't forget to compile 'udbtool', the user database tool.
(See the relevant section, below.)

How do I run 'CRUD' ?

Again, simple!

cd <path to directory where CRUD dir is located>/src
./crud

If there is no database file present on first run, 'CRUD' will
output a message indicating such, and will then create an empty
database file, that should store data entered by the user.

How do I compile 'udbtool' ?

cd <path to directory where CRUD dir is located>/src/tools
make

How do I run 'udbtool' ?

cd <path to directory where CRUD dir is located>/src/tools
./udbtool

If there is no users.bin file present on first run, 'udbtool' will
output a message indicating such, and will then create an empty
database file, that should store user data entered by the user.
The program should also create an 'admin' user and prompt to set a
new password which is saved along with the 'admin' user name and id.

What is broken in 'CRUD' and / or 'udbtool' ?

A whole lot.  Submit a bug.  I'll try to fix it. :)
