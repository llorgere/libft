#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int     ft_strnequ(char const *s1, char const *s2, size_t n)
{
        size_t     i;

        i = 0;
        while (s1[i] != '\0' && i < n)
        {
                if (s1[i] != s2[i])
                        return (0);
                else
                        i++;
        }
        if (s1[i] != s2[i])
                return (0);
        else
        return (1);
}
