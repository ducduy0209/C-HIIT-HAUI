#include <stdio.h>

void Tach(int *a){
	int tong=0;
	while(*a>0){
		tong = tong + *a%10;
		*a/=10;
	}
	*a=tong;
}
int main() {
	int a=123;
	printf("tong gia tri cac ptu a la: %d",a);
}
