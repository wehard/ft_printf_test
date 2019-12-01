/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:55:47 by wkorande          #+#    #+#             */
/*   Updated: 2019/12/01 17:39:12 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_printf_test.h"
#include "ft_printf.h"

int	test_c(char *format, char c)
{
	int		r1;
	int		r2;
	char	p[1024];

	SET_COLOR(BLUE);
	ft_printf("c:\t");
	r1 = sprintf(p, format, c);
	SET_COLOR(WHITEBLACK);
	r2 = ft_printf(format, c);
	SET_COLOR(NORMAL);
	w_assert(r2, p, r1 == r2);
	return (0);
}

int	test_s(char *format, char *str)
{
	int		r1;
	int		r2;
	char	p[1024];

	SET_COLOR(BLUE);
	ft_printf("s:\t");
	r1 = sprintf(p, format, str);
	SET_COLOR(WHITEBLACK);
	r2 = ft_printf(format, str);
	SET_COLOR(NORMAL);
	w_assert(r2, p, r1 == r2);
	return (0);
}

int	test_p(char *format, void *ptr)
{
	int		r1;
	int		r2;
	char	p[1024];

	SET_COLOR(BLUE);
	ft_printf("p:\t");
	r1 = sprintf(p, format, ptr);
	SET_COLOR(WHITEBLACK);
	r2 = ft_printf(format, ptr);
	SET_COLOR(NORMAL);
	w_assert(r2, p, r1 == r2);
	return (0);
}

int	test_di(char *format, int n)
{
	int		r1;
	int		r2;
	char	p[1024];

	SET_COLOR(BLUE);
	ft_printf("di:\t");
	r1 = sprintf(p, format, n);
	SET_COLOR(WHITEBLACK);
	r2 = ft_printf(format, n);
	SET_COLOR(NORMAL);
	w_assert(r2, p, r1 == r2);
	return (0);
}

int	test_o(char *format, int n)
{
	int		r1;
	int		r2;
	char	p[1024];

	SET_COLOR(BLUE);
	ft_printf("o:\t");
	r1 = sprintf(p, format, n);
	SET_COLOR(WHITEBLACK);
	r2 = ft_printf(format, n);
	SET_COLOR(NORMAL);
	w_assert(r2, p, r1 == r2);
	return (0);
}

int	test_u(char *format, unsigned int n)
{
	int		r1;
	int		r2;
	char	p[1024];

	SET_COLOR(BLUE);
	ft_printf("u:\t");
	r1 = sprintf(p, format, n);
	SET_COLOR(WHITEBLACK);
	r2 = ft_printf(format, n);
	SET_COLOR(NORMAL);
	w_assert(r2, p, r1 == r2);
	return (0);
}

int	test_x(char *format, int n)
{
	int		r1;
	int		r2;
	char	p[1024];

	SET_COLOR(BLUE);
	ft_printf("x:\t");
	r1 = sprintf(p, format, n);
	SET_COLOR(WHITEBLACK);
	r2 = ft_printf(format, n);
	SET_COLOR(NORMAL);
	w_assert(r2, p, r1 == r2);
	return (0);
}

int	test_X(char *format, int n)
{
	int		r1;
	int		r2;
	char	p[1024];

	SET_COLOR(BLUE);
	ft_printf("x:\t");
	r1 = sprintf(p, format, n);
	SET_COLOR(WHITEBLACK);
	r2 = ft_printf(format, n);
	SET_COLOR(NORMAL);
	w_assert(r2, p, r1 == r2);
	return (0);
}

int	test_d(char *format, double d)
{
	int		r1;
	int		r2;
	char	p[1024];

	SET_COLOR(BLUE);
	ft_printf("d:\t");
	r1 = sprintf(p, format, d);
	SET_COLOR(WHITEBLACK);
	r2 = ft_printf(format, d);
	SET_COLOR(NORMAL);
	w_assert(r2, p, r1 == r2);
	return (0);
}

int	main(void)
{
	int a;

	a = 5;
	test_c("%c", 'c');
	test_s("%s!", "hello");
	test_s("%10s!", "...");
	test_s("%s", "  xyz ");
	test_p("%p", &a);
	test_di("%d", 42);
	test_di("%i", -42);
	test_di("%d", INT32_MAX);
	test_o("%o", 42);
	test_o("%o", 255);
	test_o("%u", 255);
	test_u("%u", 1234567);
	test_x("%X", 255);
	test_X("%20X", 255);
	test_d("%f", 2.5);
	return (0);
}
