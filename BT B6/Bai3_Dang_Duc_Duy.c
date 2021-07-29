#include <stdio.h>
#include <conio.h>

void NhapMang(int a[], int n)
{ 
    int i;
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void SapXep(int a[], int n){
	int i,j,tg;
  for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }  
    for( i = 0; i < n; i++){
        printf("%5d", a[i]);
    }
}

int main() {
	int n,a[100];
	do
    {
        printf("Nhap so phan tu n(3<=n<=50): ");
        scanf("%d", &n);
    } while (n < 3 || n > 50);
    NhapMang(a,n);
    
}
