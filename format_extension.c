#include "ft_printf.h"

/*
Adding 0s(based on required precision) to the existing string after specifier conversion
@format : the format string containing format of conversion
@current_str : current string after specifier conversion only
Return : New string after appending 0s to obtain required precision
*/
char	*add_precision(char *format, char *current_str)
{
	size_t	precision;
	int		i;
	char	*retstr;
	char	*temp;

	precision = get_precision(format);
	if (precision == 0)
		return (current_str);
	if (ft_strlen(current_str) < precision)
	{
		i = 0;
		temp = (char *)malloc(sizeof(char) * (precision - ft_strlen(current_str) + 1));
		while (ft_strlen(current_str) < precision--)
			temp[i++] = '0';
		temp[i] = '\0';
		retstr = ft_strjoin(temp, current_str);
		free(temp);
		free(current_str);
		return (retstr);
	}
	else
		return (current_str);
}

/*
Characters from the array are written up to (but not including) 
a terminating null byte ('\0'); if a precision is specified,
no more than the number specified are written.  If a precision is given,
no null byte need be present; if the precision is not
specified, or is greater than the size of the array, the
array must contain a terminating null byte
*/

char	*add_precision_s(char *format, char *current_str)
{
	size_t	precision;
	char	*temp;
	char	*retstr;
	char	*copy_str;

	precision = get_precision(format);
	if (precision <= ft_strlen(current_str) && precision != 0)
	{
		copy_str = current_str;
		temp = (char *)malloc(sizeof(char) * precision);
		retstr = temp;
		while (precision-- > 0)
			*temp++ = *current_str++;
		free(copy_str);
	}
	else
		retstr = current_str;
	return (retstr);
}

/*
Append spaces or 0s to converted string for left/right justification
@format : the format string containing format of conversion
@current_str : current string after specifier and precision conversion only
Return : New string after appending 0s and spaces according to '-' & '0' flag (if any)
*/
char	*add_flags(char *format, char *current_str)
{
	int		i;
	int		has_precision;
	char	flag;

	i = 0;
	has_precision = 0;
	flag = 0;
	while (format[i])
	{
		if (format[i++] == '.')
			has_precision = 1;
	}
	while (is_flag(*format))
	{
		if (*format == '-')
			flag = '-';
		else if (*format == '0' && has_precision != 1)
			flag = '0';
		format++;
	}
	if (flag == '-')
		current_str = right_fill(current_str, ft_atoi(format));
	else
		current_str = left_fill(current_str, ft_atoi(format), flag);
	return (current_str);
}

/*
Left justifies the return string with spaces
@parameter
current_str = a string that has been modified according to its precision
i = width specified that corresponds to its flag
@return
left justified string with ' '
*/
char	*right_fill(char *current_str, int i)
{
	char	*copy_current;
	char	*retstr;
	char	*copy_retstr;
	int		current_strlen;

	current_strlen = ft_strlen(current_str);
	if (i > current_strlen)
	{
		copy_current = current_str;
		retstr = (char *)malloc(sizeof(char) * (i + 1));
		if (retstr == NULL)
			return (NULL);
		copy_retstr = retstr;
		while (*current_str)
			*retstr++ = *current_str++;
		while (i > current_strlen++)
			*retstr++ = ' ';
		*retstr = '\0';
		free(copy_current);
		return (copy_retstr);
	}
	else
		return (current_str);
}

/*
Right justifies the return string with ' '' or '0'
@parameter
current_str = a string that has been modified according to its precision
i = width specified that corresponds to its flag
@return
left justified string with ' '
*/
char	*left_fill(char *current_str, int i, char flag)
{
	char	*copy_current;
	char	*retstr;
	char	*copy_retstr;

	if ((size_t) i > ft_strlen(current_str))
	{
		copy_current = current_str;
		retstr = (char *)malloc(sizeof(char) * (i + 1));
		copy_retstr = retstr;
		while ((size_t) i-- > ft_strlen(current_str))
		{
			if (flag == '0')
				*retstr++ = '0';
			else
				*retstr++ = ' ';
		}
		while (*current_str)
			*retstr++ = *current_str++;
		*retstr = '\0';
		free(copy_current);
		return (copy_retstr);
	}
	else
		return (current_str);
}
