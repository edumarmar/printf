#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	if (!src[i])
	{
		*dst = '\0';
		return (dst);
	}
	while (src[i])
	{
		dst[i] = src[i];
		i++;
		dst[i] = '\0';
	}
	return (dst);
}
