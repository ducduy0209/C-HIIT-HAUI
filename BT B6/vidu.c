#include <stdio.h>

void addFive(int *x){
	*x+=5;
}
int main(){
	int a = 10;
	printf("gia tri ban dau la: %d", a);
	addFive(&a);
	printf("\ngia tri luc sau la: %d", a);
	return 0;
}
