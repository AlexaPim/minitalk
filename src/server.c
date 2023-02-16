/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 18:25:56 by ado-prad          #+#    #+#             */
/*   Updated: 2023/02/16 18:00:55 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	ft_handler(int signal)//função pra receber o sinal do cliente
{
	static int	bit;
	static int	i;

	if (bit == 0)
		bit = 0b10000000;
	if (signal == SIGUSR2)
		i += bit;
	bit = bit >> 1; //divide a quantidade por 1
	if (bit == 0)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(void)
{
	int	pid;
	
	pid = getpid();
	ft_printf("\nPID: %i \n\n", pid);//imprime o numero do processo na tela
	signal(SIGUSR1, ft_handler);
	signal(SIGUSR2, ft_handler);
	while (1)
		pause();
	return (0);
}