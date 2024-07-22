/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:33:48 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/17 14:56:50 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdlib.h>
 #include <string.h>
 #include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;

    i = 0;
	while (s1[i]!='\0'&& s2[i]!='\0')
	{
		if(s1[i]<s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char) s2[i]);
		}
		else if(s1[i]>s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char) s2[i]);
		}
		i++;
	}
    return (0);
}
 int main(int argc, char *argv[])
{
           int res;

           if (argc < 3) 
           {
               fprintf(stderr, "Usage: %s <str1> <str2> [<len>]\n", argv[0]);
               exit(EXIT_FAILURE);
           }
           if (argc == 3)
               res = ft_strcmp(argv[1], argv[2]);
	   else
               res = strncmp(argv[1], argv[2], atoi(argv[3]));

           if (res == 0) {
               printf("<str1> and <str2> are equal");
               if (argc > 3)
                   printf(" in the first %d bytes\n", atoi(argv[3]));
               printf("\n");
           } else if (res < 0) {
               printf("<str1> is less than <str2> (%d)\n", res);
           } else {
               printf("<str1> is greater than <str2> (%d)\n", res);
           }
	    exit(EXIT_SUCCESS);
       }

