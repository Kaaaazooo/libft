/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabrugie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 08:56:24 by sabrugie          #+#    #+#             */
/*   Updated: 2019/10/08 14:52:29 by sabrugie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>

void    *ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
char	*ft_strdup(const char *s1);
void	ft_putnbr_fd(int n, int fd);


int		main(int ac, char **av)
{
	int		i;
//	char	*str;

	i = 0;
	if (ac == 0)
		return (0);

/*	ft_memset	*/
/*	char s1[11] = "0123456789";
**	char s2[11] = "0123456789";
**	printf("Ma fonction :%s\n", (char*)ft_memset(s1, atoi(av[1]), atoi(av[2])));
**	printf("Vr fonction :%s\n", (char*)memset(s2, atoi(av[1]), atoi(av[2])));
*/

/*	ft_bzero	*/
/*	char s1[11] = "0123456789";
**	char s2[11] = "0123456789";
**	ft_bzero(s1, atoi(av[1]));
**	printf("Ma fonction :%s\n", s1);
**	bzero(s2, atoi(av[1]));
**	printf("Vr fonction :%s\n", s2);
*/

/*	ft_memcpy	*/
/*	(void)av;
	char *s1 = 0;
	char *s2 = 0;
	ft_memcpy(s1, 0, 1);
	memcpy(s2, 0, 1);
	printf("Ma fonction cpy :%s\n", s1);
	printf("Vr fonction cpy :%s\n", s2);
*/

/*	ft_memmove	*/
//	char s3[11] = "0123456789";
//	char s4[50] = "0123456789";
//	printf("Ma fonction :%s\n", (char*)ft_memmove(s3, av[1], atoi(av[2])));
//	memmove(&s4[6], s2, atoi(av[1]));
//	printf("Vr fonction move :%s\n", s4);

/*	ft_memchr	*/
/*	printf("Ma fonction :%s\n", (char*)ft_memchr(av[1], atoi(av[2]), atoi(av[3])));
**	printf("Vr fonction :%s\n", (char*)memchr(av[1], atoi(av[2]), atoi(av[3])));
*/

/*	ft_memchr	*/
/*	printf("Ma fonction :%d\n", ft_memcmp(av[1], av[2], atoi(av[3])));
**	printf("Vr fonction :%d\n", memcmp(av[1], av[2], atoi(av[3])));
*/

/*	ft_strlen	*/
/*	printf("Ma fonction :%lu\n", ft_strlen(av[1]));
**	printf("Vr fonction :%lu\n", strlen(av[1]));
*/

/*	ft_isalpha	*/
/*	printf("Ma fonction :%d\n", ft_isalpha(av[1][i]));
**	printf("Vr fonction :%d\n", isalpha(av[1][i]));
*/

/*	ft_isdigit	*/
/*	printf("Ma fonction :%d\n", ft_isdigit(av[1][i]));
**	printf("Vr fonction :%d\n", isdigit(av[1][i]));
*/

/*	ft_isalnum	*/
/*	printf("Ma fonction :%d\n", ft_isalnum(av[1][i]));
**	printf("Vr fonction :%d\n", isalnum(av[1][i]));
*/

/*	ft_isascii	*/
/*	printf("Ma fonction :%d\n", ft_isascii(av[1][i]));
**	printf("Vr fonction :%d\n", isascii(av[1][i]));
*/

/*	ft_isprint	*/
/*	printf("Ma fonction :%d\n", ft_isprint(av[1][i]));
**	printf("Vr fonction :%d\n", isprint(av[1][i]));
*/

/*	ft_toupper	*/
/*	printf("Ma fonction :\n");
**	while (av[1][i])
**	{
**		printf("%c", ft_toupper(av[1][i]));
**		i++;
**	}
**	i = 0;
**	printf("\nVr fonction :\n");
**	while (av[1][i])
**	{
**		printf("%c", toupper(av[1][i]));
**		i++;
**	}
*/

/*	ft_tolower	*/
/*	printf("Ma fonction :\n");
	while (av[1][i])
	{
		printf("%c", ft_tolower(av[1][i]));
		i++;
	}
	i = 0;
	printf("\nVr fonction :\n");
	while (av[1][i])
	{
		printf("%c", tolower(av[1][i]));
		i++;
	}
*/

/*	ft_strchr */
/*	printf("Ma fonction :%s\n", ft_strchr(av[1], av[2][0]));
**	printf("Vr fonction :%s\n", strchr(av[1], av[2][0]));
*/

/*	ft_strrchr */
	printf("Ma fonction :%s\n", ft_strrchr(av[1], atoi(av[2])));
	printf("Vr fonction :%s\n", strrchr(av[1], atoi(av[2])));


/*	ft_strncmp	*/
/*	printf("Ma fonction :%d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	printf("Vr fonction :%d\n", strncmp(av[1], av[2], atoi(av[3])));
*/

/*	ft_strlcpy */
/*	printf("Ma fonction :%lu\n", ft_strlcpy(av[1], av[2], atoi(av[3])));
**	printf("%s\n", av[1]);
**	printf("Vr fonction :%lu\n", strlcpy(av[1], av[2], atoi(av[3])));
**	printf("%s\n", av[1]);
*/

/*	ft_strlcat	*/
/*	char a1[2] = "";
**	char a2[5] = "abcd";
**	char b1[2] = "";
**	char b2[5] = "abcd";
**
**	printf("Ma fonction :%lu\n", ft_strlcat(a1, a2, atoi(av[1])));
**	printf("%s\n", a1);
**	printf("Vr fonction :%lu\n", strlcat(b1, b2, atoi(av[1])));
**	printf("%s\n", a1);
*/

/*	ft_strnstr	*/
/*	printf("Ma fonction :%s\n", ft_strnstr(0, "ie", 5));
	printf("Vr fonction :%s\n", strnstr(0, "ie", 5));
*/

/*	ft_atoi		*/
/*	printf("Ma fonction :%d\n", ft_atoi(av[1]));
	printf("Vr fonction :%d\n", atoi(av[1]));
*/

/*	ft_strdup	*/
/*	char *s6;
**	char *s7;
**	s6 = ft_strdup(av[1]);
**	s7 = strdup(av[1]);
**	printf("Ma fonction :%s\n", s6);
**	printf("Vr fonction :%s\n", s7);
*/

/*	ft_putnbr_fd	*/
/*	ft_putnbr_fd(atoi(av[1]), atoi(av[2]));
**	return (0);
*/

}
