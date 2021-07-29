#include <stdio.h>
 int main() {
 	int i,n;
 	printf("Nhap n: ");
 	scanf("%d", &n);
 	int dsDiem[10];
 	for(i=0;i<n;i++) {
 		dsDiem[i]=i+1;
	 }
	 for(i=0; i<n; i++) {
	 	if(i%2!=1) {
	 		printf("%d", dsDiem[i]);
		 }
	 }
	 return 0;
 }
