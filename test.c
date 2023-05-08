#include <ctype.h>
#include <stdio.h>
#include "libft.h"

int main()
{
	// printf("%d", 1); 
	
	for(int i = 48; i <= 127; i++)
		printf("%c -> isalnum: %d - ft_isalnum: %d \n", i, isalnum(i), ft_isalnum(i));
	return (0);

}
