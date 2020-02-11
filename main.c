/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_main_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faubert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 12:42:06 by faubert           #+#    #+#             */
/*   Updated: 2020/02/05 16:09:26 by faubert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

#include "ft_atoi.c"
#include "ft_isascii.c"
#include "ft_isdigit.c"
#include "ft_strncmp.c"
#include "ft_strlen.c"
#include "ft_strlcat.c"
#include "ft_memmove.c"
#include "ft_memcpy.c"
#include "ft_strnstr.c"
#include "ft_substr.c"
#include "ft_itoa.c"
#include "ft_strtrim.c"
#include "ft_calloc.c"
#include "ft_bzero.c"
#include "ft_memset.c"
#include "ft_split.c"

int			main(int argc, char **argv)
{
	/*
	 **	ft_atoi																**
	 *

	printf("/_____ FT_ATOI _____/\n\n");

	printf("#%d : %d\n", __LINE__, atoi("9223372036854775806"));
	printf("#%d : %d\n\n", __LINE__, atoi("9223372036854775806"));

	printf("#%d : %d\n", __LINE__, atoi("9223372036854775807"));
	printf("#%d : %d\n\n", __LINE__, atoi("9223372036854775807"));

	printf("#%d : %d\n", __LINE__, atoi("9223372036854775808"));
	printf("#%d : %d\n\n", __LINE__, atoi("9223372036854775808"));

	printf("#%d : %d\n", __LINE__, atoi("-9223372036854775807"));
	printf("#%d : %d\n\n", __LINE__, atoi("-9223372036854775807"));

	printf("#%d : %d\n", __LINE__, atoi("-9223372036854775808"));
	printf("#%d : %d\n\n", __LINE__, atoi("-9223372036854775808"));

	printf("#%d : %d\n", __LINE__, atoi("-9223372036854775809"));
	printf("#%d : %d\n\n", __LINE__, atoi("-9223372036854775809"));

	printf("#%d : %d\n", __LINE__, atoi("9999999999999999999999999"));
	printf("#%d : %d\n\n", __LINE__, atoi("9999999999999999999999999"));

	printf("#%d : %d\n", __LINE__, atoi("-9999999999999999999999999"));
	printf("#%d : %d\n\n", __LINE__, atoi("-9999999999999999999999999"));

	printf("#%d : %d\n", __LINE__, atoi("0"));
	printf("#%d : %d\n\n", __LINE__, atoi("0"));

	printf("#%d : %d\n", __LINE__, atoi("-0"));
	printf("#%d : %d\n\n", __LINE__, atoi("-0"));

	printf("#%d : %d\n", __LINE__, atoi("   --999999999999"));
	printf("#%d : %d\n\n", __LINE__, atoi("   --999999999999"));

	printf("#%d : %d\n", __LINE__, atoi("   -+999999999999"));
	printf("#%d : %d\n\n", __LINE__, atoi("   -+999999999999"));

	printf("#%d : %d\n", __LINE__, atoi("   +999999999999"));
	printf("#%d : %d\n\n", __LINE__, atoi("   +999999999999"));

	 **	ft_strncmp																**
	 *

	char	strncmp_1[5] = {'0', '1', '2', '3', '4'};
	char	strncmp_2[5] = {'0', '1', '2', '3', '4'};
	char	strncmp_3[5] = {'4', '3', '2', '1', '0'};
	char	strncmp_4[0];

	printf("/_____ FT_STRNCMP _____/\n\n");

	printf("#%d : %d\n" , __LINE__, strncmp(strncmp_1, strncmp_2, 0));
	printf("#%d : %d\n\n" , __LINE__, ft_strncmp(strncmp_1, strncmp_2, 0));

	printf("#%d : %d\n" , __LINE__, strncmp(strncmp_1, strncmp_2, 3));
	printf("#%d : %d\n\n" , __LINE__, ft_strncmp(strncmp_1, strncmp_2, 3));

	printf("#%d : %d\n" , __LINE__, strncmp(strncmp_1, strncmp_3, 3));
	printf("#%d : %d\n\n" , __LINE__, ft_strncmp(strncmp_1, strncmp_3, 3));

	printf("#%d : %d\n" , __LINE__, strncmp(strncmp_1, strncmp_2, 6));
	printf("#%d : %d\n\n" , __LINE__, ft_strncmp(strncmp_1, strncmp_2, 6));

	printf("#%d : %d\n" , __LINE__, strncmp(strncmp_1, strncmp_3, 6));
	printf("#%d : %d\n\n" , __LINE__, ft_strncmp(strncmp_1, strncmp_3, 6));

	printf("#%d : %d\n" , __LINE__, strncmp(strncmp_1, strncmp_4, 0));
	printf("#%d : %d\n\n" , __LINE__, ft_strncmp(strncmp_1, strncmp_4, 0));

	printf("#%d : %d\n" , __LINE__, strncmp(strncmp_1, strncmp_4, 6));
	printf("#%d : %d\n\n" , __LINE__, ft_strncmp(strncmp_1, strncmp_4, 6));

	 **	ft_strlcat																**
	 *

	char	*strlcat_00 = NULL;
	char	strlcat_01[10] = {'a', 'b', 'c', 'd'};
	char	strlcat_02[5] = {'F', 'G', 'H', 'I'};
	char	strlcat_11[10] = {'a', 'b', 'c', 'd'};
	char	strlcat_12[5] = {'F', 'G', 'H', 'I'};
	char	strlcat_21[10] = {'a', 'b', 'c', 'd'};
	char	strlcat_22[5] = {'F', 'G', 'H', 'I'};
	char	strlcat_31[10] = {'a', 'b', 'c', 'd'};
	char	strlcat_32[5] = {'F', 'G', 'H', 'I'};
	char	strlcat_41[10] = {'a', 'b', 'c', 'd'};
	char	strlcat_42[5] = {'F', 'G', 'H', 'I'};
	char	strlcat_51[10] = {'a', 'b', 'c', 'd'};
	char	strlcat_52[5] = {'F', 'G', 'H', 'I'};
	char	strlcat_61[10] = {'a', 'b', 'c', 'd'};
	char	strlcat_62[5] = {'F', 'G', 'H', 'I'};
	char	strlcat_71[10] = {'a', 'b', 'c', 'd'};
	char	strlcat_72[5] = {'F', 'G', 'H', 'I'};

	printf("/_____ FT_STRLCAT _____/\n\n");

	printf("#%d : %zu\n" , __LINE__, strlcat(strlcat_01, strlcat_02, 6));
	printf("#%d : %zu\n\n" , __LINE__, ft_strlcat(strlcat_11, strlcat_12, 6));

	printf("#%d : %zu\n" , __LINE__, strlcat(strlcat_21, strlcat_22, 8));
	printf("#%d : %zu\n\n" , __LINE__, ft_strlcat(strlcat_31, strlcat_32, 8));

	printf("#%d : %zu\n" , __LINE__, strlcat(strlcat_41, strlcat_42, 10));
	printf("#%d : %zu\n\n" , __LINE__, ft_strlcat(strlcat_51, strlcat_52, 10));

	printf("#%d : %zu\n" , __LINE__, strlcat(strlcat_00, strlcat_62, 0));
	printf("#%d : %zu\n\n" , __LINE__, ft_strlcat(strlcat_00, strlcat_72, 0));

	//	printf("#%d : %zu\n" , __LINE__, strlcat(strlcat_00, strlcat_62, 1));
	//	printf("#%d : %zu\n\n" , __LINE__, ft_strlcat(strlcat_00, strlcat_72, 1));

	 **	ft_memmove																**
	 *

	printf("\n\n/_____ FT_MEMMOVE _____/\n\n");

	printf("#%d : %s\n", __LINE__, memmove("abc", NULL, 0));
	printf("#%d : %s\n\n", __LINE__, ft_memmove("abc", NULL, 0));

	printf("#%d : %s\n", __LINE__, memmove(NULL, "abc", 0));
	printf("#%d : %s\n\n", __LINE__, ft_memmove(NULL, "abc", 0));
	//	memmove(NULL, "abc", 1);//segf
	//	ft_memmove(NULL, "abc", 1);//segf
	//	memmove("abc", NULL, 1);//segf
	//	ft_memmove("abc", NULL, 1);//segf


	 **	ft_strnstr																**
	 *

	printf("\n\n/_____ FT_STRNSTR _____/\n\n");

	printf("#%d : %s\n", __LINE__, strnstr(NULL, "NULL", 0));
	printf("#%d : %s\n\n", __LINE__, ft_strnstr(NULL, "NULL", 0));

	printf("#%d : %s\n", __LINE__, strnstr(NULL, "", 3));
	printf("#%d : %s\n\n", __LINE__, ft_strnstr(NULL, "", 3));

	//		printf("#%d : %s\n", __LINE__, strnstr(NULL, "NULL", 1));
	//		printf("#$s\n", __LINE__, strnstr(NULL, "NULL", 1));
	
	**	ft_memcpy																**
	 
	
	printf("\n\n/_____ FT_MEMCPY _____/\n\n");

	printf("#%d : %s\n", __LINE__, memcpy("abc", NULL, 0));
	printf("#%d : %s\n\n", __LINE__, ft_memcpy("abc", NULL, 0));

	printf("#%d : %s\n", __LINE__, memcpy(NULL, NULL, 0));
	printf("#%d : %s\n\n", __LINE__, ft_memcpy(NULL, NULL, 0));

	printf("#%d : %s\n", __LINE__, memcpy(NULL, NULL, 1));
	printf("#%d : %s\n\n", __LINE__, ft_memcpy(NULL, NULL, 1));

//	printf("#%d : %s\n", __LINE__, memcpy(NULL, "abc", 1));
//	printf("#%d : %s\n\n", __LINE__, ft_memcpy(NULL, "abc", 1));

//	printf("#%d : %s\n", __LINE__, memcpy("abc", NULL, 1));
//	printf("#%d : %s\n\n", __LINE__, ft_memcpy("abc", NULL, 1));

	 **	ft_itoa																	**

	printf("\n\n/_____ FT_ITOA _____/\n\n");

	printf("#%d : %s\n\n", __LINE__, ft_itoa(2147483647));
	printf("#%d : %s\n\n", __LINE__, ft_itoa(-2147483648));
	printf("#%d : %s\n\n", __LINE__, ft_itoa(1));
	printf("#%d : %s\n\n", __LINE__, ft_itoa(-1));
	printf("#%d : %s\n\n", __LINE__, ft_itoa(0));
	printf("#%d : %s\n\n", __LINE__, ft_itoa(-0));


	// **	ft_strtrim																**

	printf("\n\n/_____ FT_STRTRIM _____/\n\n");

	//printf("\n%s\n", ft_strtrim("  \t \t \n   \n\n\n\t", " \n\t"));
	
	ft_strtrim(" a b c ", " ");
	ft_strtrim("a b b  c aaa", "ab");
	ft_strtrim("abc", "abc");

	// **	ft_substr																**

	printf("\n\n/_____ FT_SUBSTR _____/\n\n");

	char const substr_s1[]= "coucou";
	char const substr_s2[]= "COUCOU";

	printf("%s\n", ft_substr(substr_s1, 8, 2));// \0
	printf("%s\n", ft_substr(substr_s2, 2, 8));// UCOU
	*/

	// **	ft_split																**

	char	**split_words;
	char	*grozeu_mallocazioneu_1[524010];
	char	*grozeu_mallocazioneu_2[524010];
	int		split_i;

	split_i = 0;
	printf("\n\n/_____ FT_SPLIT _____/\n\n");
	split_words = ft_split("Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.Entre ce que je pense, ce que je veux dire, ce que je crois dire, ce que je dis, ce que vous voulez entendre, ce que vous entendez, ce que vous croyez en comprendre, ce que vous voulez comprendre, et ce que vous comprenez, il y a au moins neuf possibilités de ne pas se comprendre.", ' ');
	while (split_words[split_i])
		printf("%s\n", split_words[split_i++]);

	return (0);
}
