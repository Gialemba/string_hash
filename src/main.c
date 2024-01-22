/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tali <tali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:17:05 by tali              #+#    #+#             */
/*   Updated: 2024/01/22 22:06:15 by tali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/hashing.h"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		md5_t		md5;
		sha1_t		sha1;
		sha256_t	sha256;
		sha224_t	sha224;
		sha512_t	sha512;

		ft_sha512(&sha512, (uint8_t *)av[1]);
		ft_sha224(&sha224, (uint8_t *)av[1]);
		ft_sha256(&sha256, (uint8_t *)av[1]);
		ft_sha1(  &sha1,   (uint8_t *)av[1]);
		ft_md5(   &md5,    (uint8_t *)av[1]);

		int i = 0;
		while(i < 16)
		{
			printf("%2.2x", md5.digest[i]);
			i++;
		}
		printf("\t\t\t\t  - MD5\n");

		i = 0;
		while(i < 20)
		{
			printf("%2.2x", sha1.digest[i]);
			i++;
		}
		printf("\t\t\t  - SHA1\n");

		i = 0;
		while(i < 28)
		{
			printf("%2.2x", sha224.digest[i]);
			i++;
		}
		printf("\t  - SHA224\n");

		i = 0;
		while(i < 32)
		{
			printf("%2.2x", sha256.digest[i]);
			i++;
		}
		printf("  - SHA256\n");

		i = 0;
		while(i < 64)
		{
			printf("%2.2x", sha512.digest[i]);
			i++;
		}
		printf("  - SHA512\n");

	}
	else
		ft_printf("using :\t%s [string] -> hashing for [string]\n", av[0]);
	return (0);
}
