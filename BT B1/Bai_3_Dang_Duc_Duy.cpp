#include <stdio.h>

int main() {
	int n,m,k;
	printf("n so ban nhan duoc qua la (1<= n <=20): "); scanf("%d", &n);
	printf("m so tui keo la (1<= m <= 5): "); scanf("%d", &m);	
	printf("k so keo moi tui la (10<= k <=50): "); scanf("%d", &k);
	if (m*k % n == 0){
		printf("no");
	} else {
		printf("yes");
	}
}
