#include <stdio.h>

int main() {
	int x,y,tong;
	printf("Cac so co tong cac uoc bang 2 lan no la: ");
	for (x=2;x<=10000; x++){
		tong=1;
		for (y=2;y<=x/2; y++){
			if (x%y==0)
			tong=tong+y;
		}
		if (tong==x) {
			printf("\n %d",x);
		}
	}
}
