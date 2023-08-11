#!/bin/bash

# Compile the .c files into object files

gcc -c *.c

# Create the Static Library
ar -rc liball.a *.o

# Index the static Library
ranlib liball.a

# Clean up object files
rm *.o

echo "Static Library Created Successfully"

