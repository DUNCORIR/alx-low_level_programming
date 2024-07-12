#!/bin/bash

# Create object files for all .c files in the current directory
gcc -c *.c

# Create the static library from the object files
ar rc liball.a *.o

# Index the library
ranlib liball.a

# Clean up the object files
rm *.o
