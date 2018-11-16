
#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	while (s && *s)
		{
			f(ft_strchr(s, *s), s);
			s++;
		}
}
