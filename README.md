*This project has been created as part of the 42 curriculum by kmanar.*

# ft_printf

## Description

The goal of this project is to recreate the behavior of the standard C `printf()` function.

I implemented my own `ft_printf()` using variadic arguments and helper functions to handle different format specifiers.

`printf` : is a standard C function used to display text and formatted data on the standard output. It allows printing different types of values using format specifiers like : `%d`, `%s`, `%c`...

The goal of this project is to recreate its behavior by implementing my own `ft_printf()` function.

Supported conversions:
- `%c` Character
- `%s` String
- `%p` Pointer
- `%d` / `%i` integer
- `%u` unsigned integer
- `%x` / `%X` hexadecimal
- `%%` Percent sign

## Instructions

Clone the repository:

```bash
git clone (Repo)
cd (repo)
```

Compile the library:

```bash
make
```

This creates `libftprintf.a`.

To compile use:

```bash
cc -Wall -Wextra -Werror main.c libftprintf.a
./a.out
```

To clean object files:

```bash 
make clean : (o files)
make fclean : (.o and .a)
make re : (lean and make again)
```

## Algorithm & Technical Choices

The project uses variadic arguments (`va_list`, `va_start`, `va_arg`, and `va_end`) to read the arguments passed to `ft_printf()`.

The function reads the format string character by character. When it finds `%`, it checks the next character and calls the appropriate helper function.

For numbers, I used recursion to print digits one by one. I also use `long` when handling signed integers to correctly manage `INT_MIN`.

Each helper function returns the number of characters printed, or `-1` if a write error occurs.

## Resources

- [printf manual](https://man7.org/linux/man-pages/man3/printf.3.html)
- [stdarg.h documentation](https://en.cppreference.com/w/c/variadic)
- My school Peers
- Artificial Intelligence

### AI Usage

AI was used as a learning assistant to understand variadic functions, recursion, pointers, and error handling. It also helped with debugging and reviewing parts of the code. The implementation was written and tested by me.

## Author

**kmanar  (L3VI)**

1337 Coding School | 42 Network