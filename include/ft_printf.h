/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmethira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:25:34 by pmethira          #+#    #+#             */
/*   Updated: 2022/04/17 22:08:14 by pmethira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_print
{
	va_list	args;
	int		wdt;
	int		prc;
	int		pad0;
	int		dot;
	int		dash;
	int		len;
	int		sign;
	int		is_zero;
	int		per;
	int		sp;
	int		sharp;
}	t_print;

char	*ft_strchr(const char *s, int c);
int		printhex(int nb, char format);
int		ft_printf(const char *format, ...);
int		mo_atoi(const char *str, int i);
int		ft_putstr(char *s);
int		ft_putchar(char c);
int		num_count_un(unsigned int nb);
int		num_count(int nb);
int		ptr_hex(uintptr_t nbr);
int		printadd(unsigned long long ptr);
void	ft_eval(const char *format, t_print *tab);
void	ft_putnbr(int nb, t_print *tab);
void	ft_putnbr_un(unsigned int nb);
void	set_flag(const char *flag, t_print *tab, int j, int i);
void	setnum(const char *flag, t_print *tab, int j, int i);
void	check2(char format, t_print *tab);
void	check(char format, t_print *tab);

#endif
