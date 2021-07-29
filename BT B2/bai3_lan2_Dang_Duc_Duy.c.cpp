#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	float x;
	int n,i;
	float f=0;
	do
    {
        printf("Nhap so thuc x: "); scanf("%f",&x);
	    printf("Nhap so nguyen duong n ( n > 0 ): "); scanf("%d",&n);
    }
    while (n <= 0);
				if(n%2==0){
					printf("f(x,n) = %f ",(2019*x)+sqrt(pow(n,4)+5));
				}
				else{
					for(i = 1;i <= n;i++)
                    f +=1/pow(2,i);
                    printf("f(x,n) = %f ",f+x+1);
	            }
	getch();
}
