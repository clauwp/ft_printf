#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>
#include <string.h>

int	main(void)
{
    char    *ft_atoi_strs[5] = {"-2147483648", "  -0", "    +-9", "90+8", "21474483648"};
    char    *test_strchr = "\0helloworld2021!";
    char    *test_strrchr = "\0abcdefggfedcba";
    char    test_ft_memset[10] = "0123456789";
    char    test_memset[10] = "0123456789";
    int    test_ft_memchr[3] = {1,2,3};
    char    test_ft_memmove[50] = "";
    char    test_memmove[50] = "";
    char    *test_memcmp_s1 = "0123456789";
    char    *test_memcmp_s2 = "9876543210";
    char    **test_ft_split;
    char    *test_split_str = "hello world how are   you";

    for (int i = 0; i < 5; ++i)
    {
        if (ft_atoi(ft_atoi_strs[i]) == atoi(ft_atoi_strs[i]))
            printf("ft_atoi(%s): OK!\n", ft_atoi_strs[i]);
        else
            printf("ft_atoi(%s) FAIL!\n", ft_atoi_strs[i]);
    }

    printf("-----------------------------------\n");

    for (int i = 0; i < 10; ++i)
    {
        if (strchr(test_strchr, test_strchr[i]) == ft_strchr(test_strchr, test_strchr[i]))
            printf("ft_strchr OK!\n");
        else
            printf("ft_strchr FAIL!\n");
    }
    printf("-----------------------------------\n");

    for (int i = 0; i < 6; ++i)
    {
        if (strrchr(test_strrchr, test_strrchr[i]) == ft_strrchr(test_strrchr, test_strrchr[i]))
            printf("ft_strrchr OK!\n");
        else
            printf("ft_strrchr FAIL!\n");
    }

    printf("-----------------------------------\n");

    ft_memset(test_ft_memset, 0, 10);
    memset(test_memset, 0, 10);
    for (int i = 0; i < 10; ++i)
    {
        if (test_ft_memset[i] != test_memset[i])
        {
            printf("ft_memset FAIL!\n");
            break;
        }
        if (i >= 9)
            printf("ft_memset OK!\n");
    }

    printf("-----------------------------------\n");

    if (ft_memchr(test_ft_memchr, '0', 5) ==  memchr(test_ft_memchr, '0', 5))
    {
        printf("ft_memchr OK!\n");
    }
    else
    {
        printf("ft_memchr FAIL!\n");
    }

    printf("-----------------------------------\n");

    ft_memmove(test_ft_memmove, &test_ft_memmove[0], 10);
    memmove(test_memmove, &test_memmove[0], 10);
    for (int i = 0; i < 10; ++i)
    {
        if (test_ft_memmove[i] != test_memmove[i])
        {
            printf("ft_memmove FAIL!\n");
            break;
        }
        if (i >= 9)
            printf("ft_memove OK!\n");
    }

    printf("-----------------------------------\n");

    if (ft_memcmp(test_memcmp_s1, test_memcmp_s2, 10) == memcmp(test_memcmp_s1, test_memcmp_s2, 10))
    {
        printf("ft_memcmp OK!\n");
    }
    else
    {
        printf("ft_memcmp FAIL!\n");
    }
    
    printf("-----------------------------------\n");

    test_ft_split = ft_split(test_split_str, ' ');
    printf("ft_split(%s):\n", test_split_str);
    for (int i = 0; i < 5; ++i)
    {
        printf("%s\n",test_ft_split[i]);
    }

    printf("-----------------------------------\n");

}
