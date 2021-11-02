#include "ft_printf.h"

/*
Converts integer to character data type when specifier = 'c'
@parameter
i = argument from ft_printf parsed into integer data type
@return
a string that contains the character converted from an integer
*/
char    *c_conversion(unsigned long long i)
{
	char    *retstr;

	retstr = (char *)malloc(sizeof(char) * 2);
	if (retstr == NULL)
		return (NULL);
	retstr[0] = (char) i;
	retstr[1] = '\0';
	return (retstr);
}

/*
Converts integer to a unsigned integer data type when specifier = 'u'
@parameter
i = argument from ft_printf parsed into unsigned integer data type
@return
a string that contains the unsigned hexadecimal converted from an integer
*/
char    *u_conversion(unsigned long long i)
{
	return (ft_uitoa_base(i, 10));
}

/*
Converts integer to decimal with base 10 when specifier = 'i' or 'd'
@parameter
i = argument from ft_printf parsed into integer data type
@return
a string that contains the decimal converted from an integer
*/
char	*id_conversion(unsigned long long i)
{
	return (ft_itoa((int) i));
}

/*
Converts integer to hexadecimal when specifier = 'x', 'X' or 'p'
@parameter
specifier = specifier of the format
i = argument from ft_printf parsed into integer data type
@return
a string that contains the hexadecimal converted from an integer
*/
char	*xXp_conversion(int specifier, unsigned long long i)
{
	char	*retstr;
	char	*temp_ptr;
	char	*p_ammend;

	temp_ptr = ft_uitoa_base(i, 16);
	if (specifier == 'p')
	{
		p_ammend = (char *)malloc(sizeof(char) * 3);
		p_ammend = "0x";
		retstr = ft_strjoin(p_ammend, temp_ptr);
		free(p_ammend);
		free(temp_ptr);
	}
	else if (specifier == 'X')
	{
		retstr = temp_ptr;
		while (*temp_ptr)
			ft_toupper(temp_ptr++);
	}
	else
		retstr = temp_ptr;
	printf("%s\n",retstr);
	return (retstr);
}
