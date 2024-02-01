/*
code example 
written by s319884
this code comes with no warranty, use at your own risk
asd
looooplooooper@gmail.com
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    clock_t t1, t2;
    int result=1;
	double n;
	double a;
	double b;
	double c;
	n = 3;
	//printf("2 \n");
	t1 = clock();
	while (n<10000000)
	{
		b = 1;
		a = 0;
		c = sqrt(n);
		while (b <= c)
		{
			//c = fmod(n, b);
			if (fmod(n, b)==0) {
				a++;
			}
			if (a > 1) { b = n; }
			b+=2;

		}
		if (a == 1) {
			//printf("%lf\n",n);
			result ++;
		}
		n+=2;
	}
	t2 = clock();
	printf("%d primes in %f\n",result,(float)t2-(float)t1);
	getchar();
	return 0;
}
