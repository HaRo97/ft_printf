# ft_printf

## Project Description

The `ft_printf` project is part of the curriculum at 1337 School, which is part of the 42 Network. The goal of this project is to write a custom implementation of the C library function `printf`. This project aims to deepen understanding of variadic functions and formatted output.

## Specifications

- The function must be written in C.
- The function must comply with the 42 Norm.
- The function must not cause runtime errors (segmentation fault, bus error, double free, etc.).
- All heap-allocated memory must be properly freed.
- The project must not use the standard library's `printf` function.
- The project must support the following conversion specifiers:
  - `%c` - Character
  - `%s` - String
  - `%p` - Pointer address
  - `%d` - Decimal integer
  - `%i` - Integer
  - `%u` - Unsigned decimal integer
  - `%x` - Hexadecimal (lowercase)
  - `%X` - Hexadecimal (uppercase)
  - `%%` - Percent sign
- The project must be submitted to the assigned git repository.

## Required Functions

### Mandatory Part

- **Library Name:** `libftprintf.a`
- **Turn-in Files:** `Makefile, *.h, */*.h, *.c, */*.c`
- **Makefile:** Must include rules for `NAME`, `all`, `clean`, `fclean`, and `re`
- **Function Name:** `ft_printf`
- **Prototype:** `int ft_printf(const char *format, ...);`
- **Parameters:** 
  - `format`: Format string containing conversion specifiers.
  - `...`: Additional arguments to be formatted and printed according to the format string.
- **Return Value:**
  - Returns the number of characters printed (excluding the null byte used to end output to strings).
  - Returns a negative value if an error occurs.
- **External Functions:**
  - `write`, `malloc`, `free`, `va_start`, `va_arg`, `va_copy`, `va_end`
- **Description:**
  - The function must produce output according to the format string, similar to the standard `printf` function.
- **Authorized Library:** `libft`

## Files

- `ft_printf.c`
- `ft_printf.h`
- `ft_put_address.c`
- `ft_putchar.c`
- `ft_putnbr.c`
- `ft_putstr.c`
- `Makefile`

## Installation

1. Clone the repository:

    ```sh
    git clone https://github.com/HaRo97/ft_printf.git
    ```

2. Navigate to the project directory:

    ```sh
    cd ft_printf
    ```

3. Compile the library:

    ```sh
    make
    ```

## Usage

To use the `ft_printf` function, include the header file in your C project and link the compiled library during compilation.

### Include in Your Project

1. Include the header in your source file:

    ```c
    #include "ft_printf.h"
    ```

2. Compile your project with `libftprintf.a` and the necessary source files:

    ```sh
    gcc -Wall -Wextra -Werror -o my_program my_program.c ft_printf.c ft_put_address.c ft_putchar.c ft_putnbr.c ft_putstr.c libftprintf.a -I
    ```

### Function Signature

```c
int ft_printf(const char *format, ...);
```

* `format`: The format string containing conversion specifiers.
* `...`: Additional arguments to be formatted and printed according to the format string.

### Return Value

* Returns the number of characters printed (excluding the null byte used to end output to strings).
* Returns a negative value if an error occurs.

## Examples

Here is a simple example of how to use `ft_printf` in a program:

```c
#include "ft_printf.h"

int main(void)
{
    int num = 42;
    char *str = "Hello, world!";
    ft_printf("Number: %d\n", num);
    ft_printf("String: %s\n", str);
    return 0;
}
```

## License

This project is made as part of the 42 School curriculum. Any external use must comply with the rules and licenses of the 42 School.
