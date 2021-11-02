#include "ft_printf.h"
#include <stdio.h>
/*
Main function that immitates the behaviour of printf from C standard library.
Iters through each characters and processes it when it reaches '%' character.
*/
int ft_printf(const char *format, ...)
{
    va_list ap;
	char	*format_str;
	int		printstr_len;

	printstr_len = 0;
    va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format_str = get_format_str(format + 1);
			format +=ft_strlen(format_str);
			if (*format == 's')
				printstr_len += print_ptr(format_str, va_arg(ap, char *));
			else if (*format == '%')
				printstr_len += print_ptr(format_str, "%");
			else
				printstr_len += print_int(format_str, va_arg(ap, unsigned long long), *format);
		}
		else
		{
			write(1, format, 1);
			printstr_len++;
		}
		format++;
	}
	va_end(ap);
	return (printstr_len);
}

/*
Extracts the format of the specifier and returns a string
representing the format (flags,width,specifier)
@parameter
str = string from ft_printf's format parameter starting from a
character after '%'
@return
a string that represents the format
*/
char	*get_format_str(const char *str)
{
	char	*retstr;
	char	*copy_retstr;
	int		len;

	len  = 0;
	while (is_flag(str[len]) || ft_isdigit(str[len]) || str[len] == '.')
		len++;
	if (is_specifier(str[len]))
		len++;
	else
		return (NULL);
	retstr = (char *)malloc(sizeof(char) * (len + 1));
	if (retstr == NULL)
		return (NULL);
	copy_retstr = retstr;
	while (len-- > 0)
		*copy_retstr++ = *str++;
	*copy_retstr = 0;
	return (retstr);
}

/*
Writes a string of characters to standard output according to the format specified
and the argument passed into ft_printf
Parameter:
@format_str = string that contains flag, width and specifier
@ptr = a pointer to the corresponding argument passed in from fr_printf
Return:
the total number of characters writen to standard output
*/

int	print_ptr(char *format_str, void *ptr)
{
	int		retlen;
	char	*str;
	char	*copy_str;

	if (ptr == NULL)
	{
		free(format_str);
		return (write_null());
	}
	str = (char *)ptr;
	str = ft_strdup(str);
	str = add_precision_s(format_str, str);
	str = add_flags(format_str, str);
	copy_str = str;
	retlen = ft_strlen(str);
	while (*str)
		write(1, str++, 1);
	free(copy_str);
	free(format_str);
	return (retlen);
}

/*
Allocated space for a string that writes "(null)" when needed
and write it to standard output when called.
@return
the number of character printed out
*/
int	write_null(void)
{
	char	*null_str;
	char	*copy;
	int		count;

	null_str = (char *)malloc(sizeof(char) * 7);
	count = 0;
	copy = null_str;
	null_str = "(null)";
	while (*null_str)
	{
		count++;
		write(1, null_str++, 1);
	}
	free(copy);
	return (count);
}

/*
To handle specifiers 'cpdiuxX' where the argument from ft_printf
is parsed as integer data type first
@parameter
format_str = format of specifier
i = argument parsed into int data type
specifier = specifier of the format string
@return
the number of characters printed out
*/
int	print_int(char *format_str, unsigned long long i, char specifier)
{
	int		retlen;
	char	*ret_str;
	char	*copy_retstr;

	ret_str = convert_arg_to_str(i, specifier);
	printf("line 147 %s\n",ret_str);
	ret_str = add_precision(format_str, ret_str);
	printf("%s\n",ret_str);
	ret_str = add_flags(format_str, ret_str);
	printf("%s\n",ret_str);
	copy_retstr = ret_str;
	retlen = ft_strlen(ret_str);
	if (specifier == 'c' && i == 0)
	{
		write(1, "\0", 1);
		retlen = 1;
	}
	while (*ret_str)
		write(1, ret_str++, 1);
	free(copy_retstr);
	free(format_str);
	return (retlen);
}

/*
Convert argument to a string according to the corresponding specifier.
@i : argument as int data type
@specifier : corresponding specifier from format string
Return : a string that represents converted argument
*/

char	*convert_arg_to_str(unsigned long long i, char specifier)
{
	if (specifier == 'c')
		return (c_conversion(i));
	else if (specifier == 'd' || specifier == 'i')
		return (id_conversion(i));
	else if (specifier == 'x' || specifier == 'X' || specifier == 'p')
		return (xXp_conversion(specifier, i));
	else if (specifier == 'u')
		return (u_conversion(i));
	return (NULL);
}
