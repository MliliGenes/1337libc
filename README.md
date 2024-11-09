# Libft - Your First C Library

## About
This project involves creating your own C library containing a collection of general-purpose functions that will serve as a foundation for future C programming projects.

## Project Requirements

### Mandatory Part
#### Program Specifications
- **Program Name:** `libft.a`
- **Turn in Files:** `Makefile`, `libft.h`, `ft_*.c`
- **Makefile Rules:** `NAME`, `all`, `clean`, `fclean`, `re`

### Technical Requirements
- All code must be written in C
- Follow the Norm coding standards
- Functions should not quit unexpectedly (no segfaults, bus errors, double free, etc.)
- Properly manage heap allocated memory (no memory leaks)
- Submit a Makefile that compiles without relinking using `cc -Wall -Wextra -Werror` flags
- Create helper functions as static functions when needed
- No global variables allowed
- Place all files at the root of the repository

### Part 1 - Libc Functions
Recreate these standard C library functions with `ft_` prefix:
- `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`
- `strlen`, `memset`, `bzero`, `memcpy`, `memmove`
- `strlcpy`, `strlcat`, `toupper`, `tolower`
- `strchr`, `strrchr`, `strncmp`, `memchr`
- `memcmp`, `strnstr`, `atoi`

Functions requiring malloc:
- `calloc`
- `strdup`

### Part 2 - Additional Functions
Create these additional functions:

| Function | Description |
|----------|-------------|
| `ft_substr` | Extract substring from string |
| `ft_strjoin` | Concatenate two strings |
| `ft_strtrim` | Trim characters from string |
| `ft_split` | Split string using delimiter |
| `ft_itoa` | Convert integer to string |
| `ft_strmapi` | Apply function to string |
| `ft_striteri` | Apply function to string with index |
| `ft_putchar_fd` | Output char to file descriptor |
| `ft_putstr_fd` | Output string to file descriptor |
| `ft_putendl_fd` | Output string with newline |
| `ft_putnbr_fd` | Output number to file descriptor |

## Bonus Part
### Linked List Functions
Using this structure:
```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

Implement these functions:
- `ft_lstnew`: Create new list node
- `ft_lstadd_front`: Add node at beginning
- `ft_lstsize`: Count nodes
- `ft_lstlast`: Get last node
- `ft_lstadd_back`: Add node at end
- `ft_lstdelone`: Delete node content
- `ft_lstclear`: Delete sequence of nodes
- `ft_lstiter`: Apply function to list content
- `ft_lstmap`: Apply function and create new list

### Bonus Rule
Add a `bonus` rule in your Makefile to include bonus functions in your library. Note that the bonus part will only be evaluated if the mandatory part is perfect.

## Submission
Submit your work to your Git repository. Only the work in the repository will be evaluated during the defense. Ensure all files are at the root of your repository with correct names.
