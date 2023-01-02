/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:01:01 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/19 23:09:37 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main (void)
{
	printf("<<<__\033[36mft_isalpha\033[0m__>>> ");
	printf("\u2714 It´s a abecedary (not alphabeth)! %d\n", ft_isalpha('a'));	
	
	printf("<<<__\033[36mft_isdigit\033[0m__>>> ");
	printf("\u2714 Its digit! %d\n", ft_isdigit('4'));

	printf("<<<__\033[36mft_isalnum\033[0m__>>> ");
	printf("\u2714 Its alphanumeric! %d\n", ft_isalnum('h'));

	printf("<<<__\033[36mft_isascii\033[0m__>>> ");
	printf("\u2714 Its ascii! %d\n", ft_isascii('f'));

	printf("<<<__\033[36mft_isprint\033[0m__>>> ");
	printf("\u2714 Its printable! %d\n", ft_isprint('j'));

	printf("<<<__\033[36mft_strlen\033[0m___>>> ");
	printf("\u2714 \033[35mThe lenght of the string is:\033[0m %zu\n", ft_strlen("abcdefgh"));

	printf("<<<__\033[36mft_memset\033[0m___>>> ");
	char str1[84] = "ahoraquevamosdespacio";
	printf("\u2714 The result is: %s\n", ft_memset(str1, '.', 8));

	printf("<<<__\033[36mft_bzero\033[0m____>>> ");
	char str2[80] = "vamosacontarmentiras";
	ft_bzero(str2, 2);
	printf("\u2714 The result is: %s\n", str2);

	printf("<<<__\033[36mft_memcpy\033[0m___>>> ");
	char src[] = "tralara";
	char dst[20];
	printf("\u2714 The result is: %s\n", ft_memcpy(dst, src, 3));

	printf("<<<__\033[36mft_memmove\033[0m__>>> ");
	char str3[] = "vamosacontarmentiras";
	char dst1[sizeof(str3)];
	ft_memmove(dst1, str3, sizeof(str3));
	printf("\u2714 Original string is: %s\n", str3);
	printf("<<<__\033[36mft_memmove\033[0m__>>> ");
	printf("\u2714 And it is located at: %p\n", str3);
	printf("<<<__\033[36mft_memmove\033[0m__>>> ");
	printf("\u2714 Moved string is: %s\n", dst1);
	printf("<<<__\033[36mft_memmove\033[0m__>>> ");
	printf("\u2714 And it is located at: %p\n", dst1);


	printf("<<<__\033[36mft_strlcpy\033[0m__>>> ");
	char src1[] = "tralara";
	char dst2[8];
	size_t n = 8;
	size_t cpy = ft_strlcpy(dst2, src1, n);
	printf("\u2714 Its been copied %zu characters from source string to destiny string. \n", cpy);
	printf("<<<__\033[36mft_strlcpy\033[0m__>>> ");
	printf("\u2714 Destiny string is: %s\n", dst2);

	printf("<<<__\033[36mft_strlcat\033[0m__>>> ");
	char src2[] = " contar mentiras";
	char dst3[24] = "vamos a";
	size_t n1 = 24;
	size_t concatenated = ft_strlcat(dst3, src2, n1);
	printf("\u2714 Its been concatenated %zu characters to the destiny string. \n", concatenated);
	printf("<<<__\033[36mft_strlcat\033[0m__>>> ");
	printf("\u2714 Destiny string is: %s\n", dst3);

	printf("<<<__\033[36mft_toupper\033[0m__>>> ");
	printf("\u2714 The result is: %c\n", ft_toupper('e'));

	printf("<<<__\033[36mft_tolower\033[0m__>>> ");
	printf("\u2714 The result is: %c\n", ft_tolower('E'));

	printf("<<<__\033[36mft_strchr\033[0m___>>> ");
	char str4[] = "porelmar";
	char ch = 'e';
	char *ptr = ft_strchr(str4, ch);
	if (ptr != NULL) 
	{
		printf("\u2714 It was fond the character '%c' at the position %d from string '%s'\n", ch, (int)(ptr - str4), str4);
	}
	else
	{
		printf("It wasnt found the character '%c' at string '%s'\n", ch, str4);
	}

	printf("<<<__\033[36mft_strrchr\033[0m__>>> ");

	return (0);
}
