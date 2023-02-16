/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ado-prad <ado-prad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:45:54 by ado-prad          #+#    #+#             */
/*   Updated: 2023/02/16 19:40:14 by ado-prad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	check_args(int argc) //checar se os argumentos são validos, ex: se for passado sem o argumento, numero do pid ou a msg, erro!
{
	if (argc != 3)
	{
		ft_printf("\n[expected format]\n ./client pid \"message\"\n");
		exit(0);
	}
}

void	send_char(int pid, int c) //vou verificar o char de acordo com o bit escrito
{
	int	bit;

	bit = FIRST_POSITION;
	while (1)
	{
		if ((c & bit) >= 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(1000);
		if (bit == 1)
			break ;
		bit = (bit >> 1); //vou dividindo ele por 1
	}
}

void	send_message(char *s_pid, char *message)
{
	int	pid;
	int	i;

	i = 0;
	pid = ft_atoi(s_pid); //transformo meu char em int pra pegar o pid
	while (message[i])
		send_char(pid, message[i++]);
	send_char(pid, '\n');
}

int	main(int argc, char **argv)
{
	check_args(argc); //checo meus caracteres
	send_message(argv[1], argv[2]); // passo os argumentos
	return (0);
	
}