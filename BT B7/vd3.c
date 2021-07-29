#include <stdio.h>
#include <string.h>

int main() {
	// int a[hang][cot]
	int a[3][4];
	// Nhap mang 2 chieu
	int i,j;
	
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			printf("Nhap a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i=0; i<4; i++){ // Duyet cac hang
		for(j=0; j<3; j++){ //  Duyet tung phan tu trong hang i
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
