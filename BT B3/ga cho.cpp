#include <stdio.h>
int main() {
	int a,b;
	for (a,b=1; a,b<=36; a++,b++) {
		if (a*2 + b*4 == 100 && a+b==36){
			printf("So ga la: %d", a);
			printf("So cho la:%d",b);
		}
	}
}
