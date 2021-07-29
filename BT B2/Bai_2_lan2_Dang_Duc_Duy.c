#include <stdio.h>
#include <conio.h>

int main() {
	int i,tong,j;
	for(i=2; i<=10000; i++) {
		tong=0;
	} for (j=1; j<= i; j++) {
		if (i%j==0) {
			tong+=j;
		}
	}
	if(i*2==tong) {
		printf("%d\n",i);
	}
}
