#include <stdio.h>

int main ()
{
	int n,i;
	float x, tu, tu1 = -1.0;
	double t;
	
	printf ("\tnhap n: ");
	scanf ("%d", &n);
	printf ("\tnhap x: ");
	scanf ("%f", &x);
	
	tu = x;
	t = 1 - (x/1);
	
	for (i = 2; i <= n; i++) {
		tu *= x;
		tu1 *= -1;
		t= t + (tu*tu1) / i;
	}
	
	printf ("\n\tT = %fl", t);
	
}
