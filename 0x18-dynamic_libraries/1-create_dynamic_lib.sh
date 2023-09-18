#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -Wall -Werror -Wextra -pedantic -shared -fPIC -c *.c

# Create the dynamic library by linking all the object files
gcc -shared -o liball.so *.o

# Clean up the temporary object files
rm -f *.o
