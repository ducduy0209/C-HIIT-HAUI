#include <stdio.h>

int main ()
{
	int n,m,k;
	printf("nhap n, m, k: ");
	scanf ("%d%d%d", &n,&m,&k);
	
	while (n < 1 || n > 1000000 && m < 1 || m > 1000000 && k < 1 || k > 1000000) {
		printf("nhap lai n, m, k: ");
		scanf ("%d %d %d", &n,&m,&k);
	}
	
	int s = 0;
	while(n > 0) {
        s += n%10;
        n /= 10;
    }

    while(m >= 10) {
        m /= 10;
	}
	
	if (s + m == k){
		printf ("YES");
	}else{
		printf ("NO");
	}
}
