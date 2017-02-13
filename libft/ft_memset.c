#include <libft.h>

void *ft_memset(void *b, int c, size_t len)

{
	unsigned char *p_b;

	p_b = b;

	while (len--)
	{
		*p_b++ = c;
	}
	return (b);
}
