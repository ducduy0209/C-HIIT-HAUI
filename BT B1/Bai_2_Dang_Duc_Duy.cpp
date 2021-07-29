#include <stdio.h>
#include <conio.h>

int main(){
	int n,m ;
	printf(" Nhap n so bong hoa muon mua(1<= n <= 999): "); scanf("%d", &n);
	printf(" Nhap m gia tien cua bong hoa(7000 <= m <= 200000 va m chia het cho 100): "); scanf("%d", &m);
	if (1 <= n <= 999 && 7000<= m <= 200000 && m % 100 == 0) {
	if(n%2!=0 & n>5) {
		printf("So tien phai tra la: %d", (n*m)-(n*m)*20/100);
	}
	if(n%2==0 & n>4) {
		printf("So tien phai tra la: %d", (n*m)-(n*m)*15/100);
	}
	if(n%2!=0 & n<=5 || n%2==0 & n<=4) {
		printf("So tien phai tra la: %d", (n*m));
	} 
} else {
	printf("Khog thoa man");
}
} 
