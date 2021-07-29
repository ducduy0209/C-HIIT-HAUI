#include <stdio.h>

// doi vitri a,b
void swap(int *x,int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int a=10, b=20;
	printf("gia tri ban dau cua a la: %d, b la: %d", a,b);
	swap(&a,&b);
	printf("gia tri luc sau cua a la: %d, b la: %d", a,b);
	return 0;
}
