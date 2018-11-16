
#include "libft.h"

void	* ft_memalloc(size_t size)
{
	char	*str;
	size_t	i;

	if (!(str = (char*)malloc(size)))
		return (NULL);
	i = 0;
	while (i < size)
		{
			str[i] = 0;
			i++;
		}
	return (str);
}

