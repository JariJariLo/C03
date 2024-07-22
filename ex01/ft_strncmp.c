/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crjarill <crjarill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:51:45 by crjarill          #+#    #+#             */
/*   Updated: 2024/07/17 16:00:18 by crjarill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdlib.h>
 #include <string.h>
 #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	size_t i;

    i = 0;
    if (!n)
        return (0);
    while (i < n && (s1[i] == s2[i]) && s1[i] && s2[i])
	{
        i++;
	}
    return ((unsigned char)s1[i] - (unsigned char )s2[i]);
}
int main(int argc, char *argv[])
{
	int res;

           if (argc < 3) {
               fprintf(stderr, "Usage: %s <str1> <str2> [<len>]\n", argv[0]);
               exit(EXIT_FAILURE);
           }

           if (argc == 3)
               res = strcmp(argv[1], argv[2]);
           else
               res = ft_strncmp(argv[1], argv[2], atoi(argv[3]));

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