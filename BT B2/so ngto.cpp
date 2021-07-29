#include <stdio.h>
#include <conio.h>
int main() {
	int n,i,j,dem;
    printf("Nhap n="); 
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {        
        dem=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            dem++;
        }        
        if(dem==0)
        {
            printf(" %5d",i);
        }
    }
    getch();
}
