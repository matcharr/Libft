#include <stdio.h>
#include <string.h>

void *memchr(const void *s, int c, size_t n)
{
	while (n != 0)
	{
		if (((char*)s)[n] != c)
		{
			n--;
		}
		else
		{
			return(s+n);
		}
	}
	return (NULL);
}

int main (void)
{
	char str[50] = "GeeksForGeeks is for programming geeks."; 
    printf("\nBefore memset(): %s\n", str); 
	ft_memset(str+13, '.', 8*sizeof(char));
	printf("After memset():  %s", str); 
    return(0);
}