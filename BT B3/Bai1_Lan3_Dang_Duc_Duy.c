#include <stdio.h> 
#include <math.h>

int main() {
	int i,dem,n;
	dem=0;
	printf("Nhap so n de kiem tra: "); scanf("%d", &n);
	if(n<0) {
		printf("So ban nhap khong phu hop");
	} else {
		for(i=2; i<= sqrt(n); i++) {
			if (n%i==0) {
				dem++;
			}
		}
			if(dem==0) {
				printf("Yes");
			} else {
				printf("No");
			}
	}
}
