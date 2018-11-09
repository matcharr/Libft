#include <string.h>
#include <stdio.h>
void *ft_memcpy (void *dest, const void *src, size_t n)
{
	int i;
	i = 0;
	while (n>0)
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
   ft_memcpy(csrc+5, "abc", 3); 
   printf("%s", csrc); 
   return 0; 
} 
