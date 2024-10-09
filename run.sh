#!/bin/bash

make
cc -Wall -Wextra -Werror -g3 main.c -Iincludes -L. -lft
# cc main.c -Iincludes -L. -lft
./a.out
if [ -f "a.out" ]; then
	rm a.out
fi
make fclean