/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raisufaj <raisufaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:51:24 by raisufaj          #+#    #+#             */
/*   Updated: 2025/01/30 14:51:24 by raisufaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>

int	print_int(int num);
int	print_char(char c);
int	print_string(char *s);
int	print_pointer(void *ptr);
int	print_unsigned(unsigned int n);
int	ft_printf(const char *format, ...);
int	print_hex(unsigned long n, char format);

#endif