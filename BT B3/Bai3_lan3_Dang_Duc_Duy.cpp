#include <stdio.h>

int main()
{
    int n,i;
    printf("nhap n: ");
    scanf("%d",&n);
    
    while (n < 1 || n > 1000000 ) {
		printf ("nhap lai n: ");
		scanf ("%d", &n);
	}
    
    for (i = 1;i <= n;i++){
    	
    	int m,k;
        m = i;
        while (m != 0)
        {
            k = m%10;
            if (k != 4 && k != 7)
			break;
            m = m/10;
        }
        
        if (m == 0) {
		printf("%d\t", i);
    	}
    }
}
	
