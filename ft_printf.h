#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include "libft/libft.h"

char	*c_conversion(unsigned long long i);
char	*u_conversion(unsigned long long i);
char	*id_conversion(unsigned long long i);
char	*xp_conversion(int specifier, unsigned long long i);
int		ft_printf(const char *format, ...);
char	*get_format_str(const char *str);
int		is_flag(char c);
int		is_specifier(char c);
int		is_s_specifier(const char *str);
int		print_ptr(char *format_str, char *ptr);
int		print_int(char *format_str, unsigned long long i, char specifier);
char	*convert_arg_to_str(unsigned long long i, char specifier);
char	*add_precision(char *format, char *current_str);
char	*add_precision_s(char *format, char *current_str);
size_t	get_precision(char *format);
char	*add_flags(char *format, char *current_str);
char	*right_fill(char *current_str, int i);
char	*left_fill(char *current_str, int i, char flag);
int		ft_printf(const char *format, ...);
int		write_null(void);
int		null_char_handler(char *current_str);
#endif
