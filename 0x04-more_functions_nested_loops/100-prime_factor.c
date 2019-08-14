#include <stdio.h>
#include <unistd.h>

int main(void)
{
	long long int n = 612852475143, i = 2, s;

	while (i < (n/ 2))
	{
		//printf("number i = %lld\n", i);
		if ((n % i) == 0)
		{
			printf("the chosen number %lld", i);
			sleep(2);
			if (i == 2)
			{
				n /= 2;
				printf("i = to 2 -> %lld", i);
				continue;
			}
			else
			{
				s = 2;
				while (s < -(i - 1))
				{
					if ((s % i) == 0)
					{
						printf("match found ---> %lld/n", s);
					}
					s++;
				}
			}			
			n /= s;
		}
		i++;
	}
}