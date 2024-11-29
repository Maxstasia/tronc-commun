/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 15:25:16 by mstasiak          #+#    #+#             */
/*   Updated: 2024/11/29 15:47:05 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*--bibliotheques--*/

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

/*--fonctions--*/

int	ft_printf(const char *format, ...);
int	ft_formatos(va_list str, char i);
int	ft_putnbr(int nb);
int	ft_putstr_fd(char *s, int fd);
int	ft_putchar(char c);
int	ft_putnbr_base(unsigned long nbr, char *base);
int	ft_putnbr_base0x(unsigned long nbr, char *base);

#endif