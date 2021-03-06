#include "libft.h"

size_t	ptrarr_len(void **ptrarr)
{
	size_t	i;

	i = 0;
	while (ptrarr[i])
		i++;
	return (i);
}

void	free_ptrarr(void **ptrarr)
{
	size_t	i;

	i = 0;
	while (ptrarr[i])
	{
		free(ptrarr[i]);
		ptrarr[i] = NULL;
		i++;
	}
	free(ptrarr);
}

int		free_ptrarr_and_return_val(void **ptrarr, int value)
{
	free_ptrarr(ptrarr);
	return (value);
}

void	free_ptrarr_and_assign_null(void ***ptrarr)
{
	free_ptrarr(*ptrarr);
	*ptrarr = NULL;
}
