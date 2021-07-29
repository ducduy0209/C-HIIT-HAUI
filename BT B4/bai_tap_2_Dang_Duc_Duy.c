#include<stdio.h>
void khoitaoMang(float a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("\n\ta[%d] = ",i);
		scanf("%f",&a[i]);
	}
}
void xuatMang(float a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%.2f ",a[i]);
}
	printf("\n");
}
float Max(float a[],int n){
	float max=a[0];
	int i;
	for(i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	return max;
}
float Min(float a[],int n){
	float min=a[0];
	int i;
	for(i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	return min;
}
void doicho(float a[],int n){
	int i,j; float tmp;
	float x = Max(a,n);
	float y = Min(a,n);
	for(i=0;i<n;i++){
		if(a[i]==x){
			for(j=0;j<n;j++){
				if(a[j]==y){
					tmp=x;
					x=y;
					y=tmp;
					a[i]=x;
					a[j]=y;
				}
			}		
		}
	}
}
int main(){
	int n;
	float a[100],x,y;
		do {
			printf("Nhap n ( 2<=n<=50 ): ");
            scanf("%d",&n);
            if(n<2 || n>50){
				printf("Nhap lai n: ");
            	scanf("%d",&n);
			}
        }
		while(n<2 || n>50);
		khoitaoMang(a,n);
		printf("\nMang da nhap : ");
		xuatMang(a,n);
		printf("\nGia tri Max va Min : %.2f %.2f",Max(a,n),Min(a,n));
		printf("\n\nMang sau khi doi 2 phan tu Max va Min : ");
		doicho(a,n);
		xuatMang(a,n);
		return 0;
	}
