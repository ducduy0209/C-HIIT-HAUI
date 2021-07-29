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

void Chen(int a[], int n,int vt, int x){
	int i,k;
	if(k>0 && k<n){
	for(i=n; i>=vt ;i--){
		a[i] = a[i-1];
	}
	a[vt-1] = x;
	} else {
		printf("-1");
	}
}

void Xoa(int a[], int n, int vt){
	int i;
	for(i=vt-1; i < n-1; i++){
		a[i] = a[i+1];
	}
	n= n - 1;
} 

void XoaPtu(int a[], int n, int y){
	int i, kt=0;
	for(i=0; i<n; i++){
        while(a[i]==y){
            kt=1;
            Xoa(a,n,i+1);
        }
    }
    if(kt==0)
        printf("-1");
    else
        XuatMang(a,n);
}

int main() {
	int n,i,a[100];
	do
    {
        printf("Nhap so phan tu n(3<=n<=50): ");
        scanf("%d", &n);
    } while (n < 3 || n > 50);
    
    NhapMang(a,n);
    int x,k;
	scanf("%d",&k);
	scanf("%d",&x);
	Chen(a,n,k,x);
	n++;
	
	int y;
	scanf("%d", &y);
	Xoa(a,n,y);
	n--;
	printf("\n");
    XuatMang(a,n);
}
