#include <string.h>
#include <stdio.h>
void *ft_memccpy (void *dest, const void *src, int c, size_t n)
{
	int i;
	i = 0;
	while (n>0 && ((char*)src)[i] != c)
	{
		((char*)dest)[i]=((char*)src)[i];
		i++;
		n--;
	}
	return(dest);
}

int main() 
{ 
   char csrc[100] = "Geeksfor"; 
   ft_memccpy(csrc+5, "abc", 3 , 3); 
   printf("%s", csrc); 
   return 0; 
} 
