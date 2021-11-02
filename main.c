#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"
int main(void)
{
    printf(" %u ", LONG_MIN);
    ft_printf(" %u ", LONG_MIN);
}