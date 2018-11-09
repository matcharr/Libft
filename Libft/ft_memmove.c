#include <string.h>
#include <stdio.h>
void *ft_memmove (void *dest, const void *src, size_t n)
{
	int i;
	char *tmp;
	
	tmp = (char*)dest;
	i = 0;
	while (i < n)
	{
		tmp[i] = ((char*)src)[i];
		i++;
	}
	return(dest);
}

int main() 
{ 
   char csrc[100] = "Geeksfor"; 
   ft_memmove(csrc+5, "abc", 3); 
   printf("%s", csrc); 
   return 0; 
} 
