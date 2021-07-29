#include <stdio.h>
#include <stdlib.h>

int main () {
	float dsDiem[100];
	
	int n=10, i;
	
	for(i=0; i < n; i++) {
		printf("Nhap diem thi thu %d: ", 1+i);
		scanf("%f", &dsDiem[i]);
	}
	return 0;
}
