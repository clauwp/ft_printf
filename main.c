#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"
int main(void)
{
    setbuf(stdout, NULL);  // this will force printf to print immediately
    printf("ft_printf:\n");
    int len = ft_printf(" %05d ", -11);
    printf("\n");
    printf("printf:\n");
    int len2 = printf(" %05d ", -11);
    printf("\n");
    printf("len1 = %d\n", len);
    printf("len2 = %d\n", len2);
}