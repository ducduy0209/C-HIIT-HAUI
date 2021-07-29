#include <stdio.h>

int main() {
	int a[100];
	int i,n,dsDiem[i];
	
	scanf("%d", &n);
	for(i = 0; i<n ; i++) {
		dsDiem[i]=i+1;
	}
	for(i=0;i<n;i++) {
		if(a[i]%2 == 1) {
			printf(" %d", a[i]);
		}
	}
	return 0;
}
