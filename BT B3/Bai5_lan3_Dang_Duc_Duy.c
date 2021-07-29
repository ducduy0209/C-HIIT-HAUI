#include <stdio.h>

int main()
{
	int a,b,m,n,ucln;
    printf("nhap a: ");
    scanf("%d",&a);
    printf("nhap b: ");
    scanf("%d",&b);
    
    while (a <= 0 || b <= 0) {
		printf("nhap lai a: ");
    	scanf("%d",&a);
    	printf("nhap lai b: ");
    	scanf("%d",&b);
	}
	
    m = a;
    n = b;
	
    while (m != n) {
        if(m > n){
            m -= n;
            
        }else{
            n -= m;
        }
	}
        
	ucln = m;
		
    printf("\n%d/%d = %d/%d", a,b,a/ucln,b/ucln);
}
