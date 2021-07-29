#include <stdio.h>

int main()
{
	int n,i,gt = 1;
	float x, tu =1 ;
	double club = 1;
	
	printf ("\tnhap n: ");
	scanf ("%d", &n);
	printf("\tnhap x: ");
	scanf("%f", &x);
	
	for (i=1; i <= n; i++) {
		gt*=i;
		tu*=x;
		club+= tu/gt;
	}
	
	printf("\n\tCLUB = %fl", club);
}
