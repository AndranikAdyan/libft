#!/bin/bash

make $1
cc -fsanitize=address -Wall -Wextra -Werror -g3 main.c -Iincludes -L. -lft
# cc main.c -Iincludes -L. -lft
if [ -f "a.out" ]; then
	./a.out
	rm a.out
fi
make fclean