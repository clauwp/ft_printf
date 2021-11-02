#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"
int main(void)
{
    printf(" %x ", LONG_MIN);
    ft_printf(" %x ", LONG_MIN);
}