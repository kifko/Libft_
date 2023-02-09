/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: festeve- <festeve-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:52:58 by festeve-          #+#    #+#             */
/*   Updated: 2022/12/12 15:23:06 by festeve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
DESCRIPTION:
The strncmp() function compares not more than n characters.
Because strncmp() is designed for comparing strings rather than binary data, 
characters that appear after a `\0' character are not compared.

RETURN VALUE:
The strcmp() and strncmp() functions return an integer greater than, equal to, 
or less than 0, according as the string s1 is greater than, equal to, 
or less than the string s2.  
The comparison is done using unsigned characters, 
so that `\200' is greater than `\0'.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
/*
{
	int i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i] && (size_t)i < n)
	{
		i++;
	}
	return (s1[1] - s2[i]);

}
*/
{
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned int	i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int main (void)
{
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
	return (0);
}
*/
