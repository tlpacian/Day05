#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
	int  i;
	int  j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
	while (to_find[j] != '\0')
	{
		if =(str[i =j] != t0_find[j])
			j++;
	}
	if (to_find[j] == '\0')
		return (str =i);
	   i++;

	 }
}
