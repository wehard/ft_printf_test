/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkorande <wkorande@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 15:42:43 by wkorande          #+#    #+#             */
/*   Updated: 2019/12/01 17:38:59 by wkorande         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_TEST_H
# define FT_PRINTF_TEST_H

# define SET_COLOR(color) ft_printf(color)
# define WHITEBLACK "\033[107;30m"
# define GRAYWHITE "\033[97;100m"
# define BLUE "\033[22;34m"
# define YELLOW "\033[22;33m"
# define BLACK "\033[30;107m"
# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define NORMAL "\033[0;0m"
# define WHITE "\033[97;49m"
# define RESET "\033[0m"

# define w_assert(len, res, test)\
do\
{\
	if (!(test))\
	{\
		int r = printf("\n\t%s%s%s", GRAYWHITE, res, NORMAL);\
		printf("%*s[KO]%s\n", 50-len, RED, NORMAL);\
		return (0);\
	}\
	else\
	{\
		printf("%*s[OK]%s\n", 50-len, GREEN, NORMAL);\
		return (1);\
	}\
}\
while (0)

# define w_run_test(test)\
do\
{\
	int res = test();\
	num_tests++;\
	if (!res)\
	{\
		num_fail++;\
	}\
	else\
		num_ok++;\
}\
while (0)

extern int num_tests;
extern int num_ok;
extern int num_fail;

#endif
