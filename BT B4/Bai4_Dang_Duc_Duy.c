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

void TimSNT(int a[], int n){
	int i, check=0;
	int max;
	for(i=0;i<n;i++){
		if(snt(a[i]) == 1){
			max = a[i];
			check = 1;
			break;
		}
	}
	
	//ktra 
	if(check == 1){
		for(i=0;i<n;i++){
			if(snt(a[i])==1 && max < a[i])
			max=a[i];
		}
		printf("%d",max);
	} else {
		printf("-1");
	}
}

int Max(int a[], int n){
	int i;
	int max=a[0];
	for(i=1; i<n; i++) {
		if(max<a[i]){
		max=a[i];
		}
	}
	printf("%d", max);
	return 0;
}

//void SapXep(int a[], int n){
//	int i,j,tg;
//  for(i = 0; i < n - 1; i++){
//        for(j = i + 1; j < n; j++){
//            if(a[i] > a[j]){
//                tg = a[i];
//                a[i] = a[j];
//                a[j] = tg;        
//            }
//        }
//    }  
//    printf("\n");
//    for( i = 0; i < n; i++){
//        printf("%5d", a[i]);
//    }


int Max2(int a[], int n){
	int max = Max(a,n);
	int max2 = -1;
	int i;
	for(i=0;i<n;i++){
		if(a[i] < max && a[i] > max2)
		max2 = a[i];
	}
	printf("%d ",max2);
	return max2;
}

int main() {
	int i,n,a[100];
	printf("Nhap so phan tu n: ");
	scanf("%d",&n);
	NhapMang(a,n);
	TimSNT(a,n);
	return 0;
}
