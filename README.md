# 🧱 libft

This project is part of the 42 curriculum. The goal is to create a static library (`libft.a`) that reimplements standard C library functions, along with some additional utility functions for string, memory, and linked list manipulation.

---

## ✅ Mandatory Functions

Reimplementations of C standard functions, including:

* `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`
* `ft_strlcpy`, `ft_strlcat`, `ft_strlen`, `ft_strchr`, `ft_strrchr`
* `ft_strncmp`, `ft_memchr`, `ft_memcmp`
* `ft_atoi`, `ft_isalpha`, `ft_isdigit`, `ft_isalnum`
* `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
* `ft_strdup`, `ft_strnstr`, `ft_calloc`

Additional functions:

* `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
* `ft_itoa`, `ft_strmapi`, `ft_striteri`
* `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

---

## 🌿 Bonus Part (Linked List)

Functions for singly linked lists:

* `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`
* `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

---

## 🔧 Usage

```bash
# Clone this repo
git clone https://github.com/AndranikAdyan/libft.git
cd libft

# Compile the library
make

# Clean object files
make clean

# Remove object files and library
make fclean

# Rebuild everything
make re
```

To use `libft.a` in your project:

```c
#include "libft.h"
```

```bash
gcc main.c -L. -lft
```

---

## 📜 Norm & Restrictions

* All code follows the [42 Norminette](https://github.com/42School/norminette).
* No use of standard C library functions (unless allowed).
* No memory leaks.

---

## 🧠 Skills Learned

* Static libraries and compilation
* Memory management in C
* Reimplementation of libc functions
* Understanding low-level C mechanics
* Norminette discipline
