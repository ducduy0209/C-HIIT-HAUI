#include <stdio.h>
#include <conio.h>

int main(){
	int x,y,z;
	for(x=1; x<=20; x++) {
		for (y=1; y<=33; y++ ){
			z=100-x-y;
			if (5*x+3*y+z/3==100 && z%3==0){
				printf(" \nSo trau dung la: %d",x);
				printf("\nSo trau nam la: %d",y);
				printf("\nSo trau gia la: %d",z);
				
			}
		}
		printf("\n");
	}
	getch ();
}
