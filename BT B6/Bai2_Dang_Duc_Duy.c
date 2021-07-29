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
 
void XuatMang(int a[], int n)
{
	int i;
    for(i = 0;i < n;i++){
        printf("%d ", a[i]);
    }
}

int main() {
	int n,i,a[100];
	do
    {
        printf("Nhap so phan tu n(3<=n<=50): ");
        scanf("%d", &n);
    } while (n < 3 || n > 50);
    
}
