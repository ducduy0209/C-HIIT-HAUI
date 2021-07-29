#include <stdio.h>
#include <math.h>
int main () {
	int a;
	printf("Nhap so nguyen a(2<= a <=50): "); scanf("%d", &a);
	if (a>=2 && a<=50 ){
		printf("Ket qua cua (a/3)^4 la: %.3f", pow(a,4)/pow(3,4));
	} else {
		printf("a khong thoa man");
	}
	return 0;
}
