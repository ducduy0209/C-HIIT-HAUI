 #include<stdio.h>
 #include<math.h>
void khoitaoMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("\n\ta[%d] = ",i);
		scanf("%d",&a[i]);
	if(a[i]<=0){
		printf("\nNhap lai ptu du lieu nguyen duong : ");
		printf("\n\n\ta[%d] = ",i);
		scanf("%d",&a[i]);
		}
	}
}
void xuatMang(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
}
	printf("\n");
}
int scp(int n){
	int x=sqrt(n);
	return (x*x==n);
}
void kiemtra(int a[],int n){
	int i,s=0;
	for(i = 0;i < n;i++){
		if(scp(a[i])){
			s+=a[i];
		}
	}
	printf("\nTong cac so chinh phuong la : %d",s);
}
void sochiahet(int a[],int n){
	int i,s=0;
	for(i=0;i<n;i++){
		if(a[i]%3==0 || a[i]%4==0){
			s+=a[i];
		}
	}
	printf("\n\nTong cac so chia het cho 3 hoac 4 : %d",s);
}
int main(){
	int n;
	int a[100];
		do {
			printf("Nhap n ( 3<=n<=50 ): ");
            scanf("%d",&n);
            if(n<3 || n>50){
				printf("Nhap lai n: ");
            	scanf("%d",&n);
			}
        }
		while(n<3 || n>50);
		khoitaoMang(a,n);
		kiemtra(a,n);
		sochiahet(a,n);
		return 0;
	}


