#include <stdio.h>
#include <math.h>

 void NhapMang(int a[], int n)
{ 
    int i;
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void Chiaso(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		if(a[i]%2==0){
		   a[i]/2;	
		} else {
			printf("%d ", a[i]);
		}
	}
}

int snt(int n){
	int i;
	if(n < 2 ){
	  	return 0;
	} 
	else{
		for(i=2;i<sqrt(n); i++){
			if(n%i==0){
	           return 0;
			}
		}
	}
	return 1;
}

void CauB(int a[], int n){
	int i,j;
	int k;
	for(k=0; k<n; k++){
		if(snt(a[k])==0){
			i = k = a[k];
			while ( snt(i)==0 && snt(j) == 0){
				i++;
				j--;
			}
			if(snt(j)==1){
				a[k]=j;
			} else{
				a[k]=i;
			}
		}
	}
	for(k=0;k<n;k++){
		printf("%d ", a[k]);
	}
}

int main() {
	int i,n,a[100];
	printf("Nhap so phan tu n: ");
	scanf("%d", &n);
	NhapMang(a,n);
	Chiaso(a,n);
	CauB(a,n);
} 
