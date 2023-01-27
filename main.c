/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 19:01:01 by festeve-          #+#    #+#             */
/*   Updated: 2023/01/27 12:20:11 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main (void)
{
	/* ft_isalpha */

	printf("<<<__\033[36mft_isalpha\033[0m__>>> ");
	printf("\u2705 My function is: %d\n", ft_isalpha('a'));
//	printf("\u2705 Original one: %d\n", isalpha('b'));


	/* ft_isdigit */

	printf("<<<__\033[36mft_isdigit\033[0m__>>> ");
	printf("\u2705 My function: Its digit! %d\n", ft_isdigit('4'));
//	printf("\u2705 Original one: Its digit! %d\n", isdigit('4'))
	/* ft_isalnum */

	printf("<<<__\033[36mft_isalnum\033[0m__>>> ");
	printf("\u2705 My function: Its alphanumeric! %d\n", ft_isalnum('h'));
//	printf("\u2705 Original one: Its alphanumeric! %d\n", isalnum('h'));
	/* ft_isascii */

	printf("<<<__\033[36mft_isascii\033[0m__>>> ");
	printf("\u2705 My function: Its ascii! %d\n", ft_isascii('f'));
//	printf("\u2705 Original one: Its ascii! %d\n", isascii('f'));
	/* ft_isprint */

	printf("<<<__\033[36mft_isprint\033[0m__>>> ");
	printf("\u2705 My function: Its printable! %d\n", ft_isprint('j'));
//	printf("\u2705 Original one: Its printable! %d\n", isprint('j'));
	/* ft_strlen */

	printf("<<<__\033[36mft_strlen\033[0m___>>> ");
	printf("\u2705 \033[35mMy function: The lenght of the string is:\033[0m %zu\n", ft_strlen("abcdefgh"));
//	printf("\u2705 \033[35mOriginal one: The lenght of the string is:\033[0m %zu\n", strlen("abcdefgh"));
	/* ft_memset */

	printf("<<<__\033[36mft_memset\033[0m___>>> ");
	char str1[84] = "ahoraquevamosdespacio";
	printf("\u2705 My function: The result is: %p\n", ft_memset(str1, '.', 8));
//	printf("\u2705 Original one: The result is: %p\n", memset(str1, '.', 8));
	/* ft_bzero */

	printf("<<<__\033[36mft_bzero\033[0m____>>> ");
	char str2[80] = "vamosacontarmentiras";
	ft_bzero(str2, 2);
	printf("\u2705 The result is: %s\n", str2);

	/* ft_memcpy */

	printf("<<<__\033[36mft_memcpy\033[0m___>>> ");
	char src[] = "tralara";
	char dst[20];
	printf("\u2705 The result is: %p\n", ft_memcpy(dst, src, 3));

	/* ft_memmove */

	printf("<<<__\033[36mft_memmove\033[0m__>>> ");
	char str3[] = "vamosacontarmentiras";
	char dst1[sizeof(str3)];
	ft_memmove(dst1, str3, sizeof(str3));
	printf("\u2705 Original string is: %s\n", str3);
	printf("<<<__\033[36mft_memmove\033[0m__>>> ");
	printf("\u2705 And it is located at: %p\n", str3);
	printf("<<<__\033[36mft_memmove\033[0m__>>> ");
	printf("\u2705 Moved string is: %s\n", dst1);
	printf("<<<__\033[36mft_memmove\033[0m__>>> ");
	printf("\u2705 And it is located at: %p\n", dst1);


	/* ft_strlcpy */

	printf("<<<__\033[36mft_strlcpy\033[0m__>>> ");
	char src1[] = "tralara";
	char dst2[8];
	size_t n = 8;
	size_t cpy = ft_strlcpy(dst2, src1, n);
	printf("\u2705 Its been copied %zu characters from source string to destiny string. \n", cpy);
	printf("<<<__\033[36mft_strlcpy\033[0m__>>> ");
	printf("\u2705 Destiny string is: %s\n", dst2);

	/* ft_strlcat */

	printf("<<<__\033[36mft_strlcat\033[0m__>>> ");
	char src2[] = " contar mentiras";
	char dst3[24] = "vamos a";
	size_t n1 = 24;
	size_t concatenated = ft_strlcat(dst3, src2, n1);
	printf("\u2705 Its been concatenated %zu characters to the destiny string. \n", concatenated);
	printf("<<<__\033[36mft_strlcat\033[0m__>>> ");
	printf("\u2705 Destiny string is: %s\n", dst3);

	/* ft_toupper */

	printf("<<<__\033[36mft_toupper\033[0m__>>> ");
	printf("\u2705 The result is: %c\n", ft_toupper('e'));

	/* ft_tolower */

	printf("<<<__\033[36mft_tolower\033[0m__>>> ");
	printf("\u2705 The result is: %c\n", ft_tolower('E'));

	/* ft_strchr */

	printf("<<<__\033[36mft_strchr\033[0m___>>> ");
	char str4[] = "porelmar";
	char ch = 'r';
	char *ptr = ft_strchr(str4, ch);
	if(ptr != NULL) 
	{
		printf("\u2705 It was found the character '%c' at the position %d from string '%s'\n", ch, (int)(ptr - str4), str4);
	}
	else
	{
		printf("It wasnt found the character '%c' at string '%s'\n", ch, str4);
	}

	/* ft_strrchr */

	printf("<<<__\033[36mft_strrchr\033[0m__>>> ");
	char str5[] = "correnlasliebres";
	char ch2 = 'e';
	char *ptr2 = ft_strrchr(str5, ch2);
	if(ptr2 != NULL)
	{
		printf("\u2705 It was found the character '%c' at the position %d from string '%s'\n", ch2, (int)(ptr2 - str5), str5);
	}
	else
	{
		printf("It wasnt found the character '%c' at string '%s'\n", ch2, str5);
	}

	/* ft_strncmp */

	printf("<<<__\033[36mft_strncmp\033[0m__>>> ");
	char str6[] = "Hola";
	char str7[] = "Hola";
	char str8[] = "Adios";
	int n2 = 3;
	int result_1 = ft_strncmp(str6, str7, n2);
	if(result_1 == 0)
	{
		printf("\u2705 Strings str6 and str7 are identical\n");
	}
	else
	{
		printf("\u274c Strings str6 and str7 are different\n");
	}
	printf("<<<__\033[36mft_strncmp\033[0m__>>> ");
	result_1 = ft_strncmp(str6, str8, n2);
	if(result_1 == 0)
	{
		printf("\u2705 Strings str6 and str8 are identical\n");
	}
	else
	{
		printf("\u274c Strings str6 and str8 are different\n");
	}

	/* ft_memchr */

	printf("<<<__\033[36mft_memchr\033[0m___>>> \n");

	/* ft_memcmp */
	
	printf("<<<__\033[36mft_memcmp\033[0m___>>> \n");

	/* ft_strnstr */

	printf("<<<__\033[36mft_strnstr\033[0m__>>> ");
	const char *haystack = "Este es un ejemplo de haystack";
	const char *needle = "ejemplo";
	size_t len = 20;
	char *res = ft_strnstr(haystack, needle, len);
	printf("\u2705 La subcadena '%s' se encuentra en la posición: %d\n", needle, (int)res);
	char *res2 = strnstr(haystack, needle, len);
	printf("\u2705 La subcadena '%s' se encuentra en la posición: %d\n", needle, (int)res2);

	/* ft_atoi */
	
	printf("<<<__\033[36mft_atoi\033[0m_____>>> ");
	printf("%d\n", ft_atoi("-2147483649"));

	/* ft_calloc */

	printf("<<<__\033[36mft_calloc\033[0m___>>> ");
	int n3 = 10;
	int *array = ft_calloc(n3, sizeof(int));
	if(array == NULL)
	{
		printf("Falla la reserva de memoria\n");
		return (1);
	}
	printf("\u2705 thisisacallocoverwritentext\n");
	free(array);

	/* ft_strdup */

	printf("<<<__\033[36mft_strdup\033[0m___>>> ");
	const char *original_1 = "Hello, world!";
	char *duplicate_1 = ft_strdup(original_1);
	if(duplicate_1 == NULL)
	{
		printf("\u274c Error: ft_strdup failed\n");
		return (1);
	}
	else
	{
		printf("\u2705 Original string: %s\n", original_1);
		printf("<<<__\033[36mft_strdup\033[0m___>>> ");
		printf("\u2705 Duplicate string: %s\n", duplicate_1);
		free(duplicate_1);
	}

/* _____FUNCIONES ADICIONALES_____ */

/* ft_substr */

	printf("<<<__\033[36mft_substr\033[0m___>>> ");
	char *original_2 = "hello, world!";
	char *substring = ft_substr(original_2, 5, 3);
	printf("\u2705 Substring is: %s\n", substring);
	
	
/* ft_strjoin */

	printf("<<<__\033[36mft_strjoin\033[0m__>>> ");
	char *s1 = "Hello, ";
	char *s2 = "world!";
	char *result_2 = ft_strjoin(s1, s2);
	printf("\u2705 %s\n", result_2);
	free(result_2);

/* ft_strtrim */

	printf("<<<__\033[36mft_strtrim\033[0m__>>> ");
	char *s3 = "___holamundo___";
	char s4 = '_';
	printf("\u2705 Trimmed string is: %s\n", ft_strtrim(s3, &s4));

/* ft_split */

	printf("<<<__\033[36mft_split\033[0m____>>> ");
	char *a = "asdq weer trty gfh";
	char **result_3 = ft_split(a, ' ');
	int	i = 0;
	while (result_3[i])
	{
		printf("\u2705 Splited string is: %s\n", result_3[i]);
		i++;
	}
	free(result_3);

/* ft_itoa */

	printf("<<<__\033[36mft_itoa\033[0m_____>>> ");
	int a2 = 1234;
	printf("Result is: %s\n", ft_itoa(a2));

/* ft_lstnew_bonus

	t_list *new_list;
	
	int a3 = 123;
	new_list = (t_list *)malloc(sizeof(t_list));
	new_list->content = a3;
	new_list->next = NULL;
	printf ("%d",(int)new_list->content);
*/

	return (0);
}
