#include "ft_printf.h"

/*
Check if character passed in as argument is a flag '-0.'
@parameter
c = character from get_format_str's str argument
@return
integer 1 if character is a flag, 0 otherwise.
*/
int	is_flag(char c)
{
	if (c == '-' || c == '0' || c == '.')
		return (1);
	else
		return (0);
}

/*
Check if character passed in as argument is a specifier 'cspdiuxX%'
@parameter
c = character from get_format_str's str argument
@return
integer 1 if character is a specifier, 0 otherwise.
*/

int	is_specifier(char c)
{
	if (c == 'x' || c == 'X' || c == 's' || c == 'p'\
	|| c == 'd' || c == 'i' || c == 'u' || c == '%' || c == 'c')
		return (1);
	else
		return (0);
}

/*
Obtains the precision of the format placeholder, which is the digit(s)
after '.' in the format string and returns it.
@parameter:
format = format string of a single specifier
@return
the digit string converted to unsigned integer
*/
size_t	get_precision(char *format)
{
	size_t	precision;

	while (*format && *format != '.')
		format++;
	if (*format == '.')
		precision = ft_atoi(++format);
	else
		precision = 0;
	return (precision);
}