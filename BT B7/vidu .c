#include <stdio.h>
#include <string.h>

int main() {
//	strlen : lay do dai chuoi
//	strcpy : copy chuoi
//	strcat : noi chuoi
//	strcmp : so sanh chuoi - phan biet hoa thuong
//	stricmp/ strcmpi: so sanh chuoi - khong phan biet hoa thuong
//	
//	strlwr VD: SANG -> sang
//			VD: sang -> SANG
	char s[255];
	int a;
	scanf("%d", &a);
	fflush(stdin);
	gets(s);
	strlwr(s);
	printf("%s\n %d\n", s, a);
	strupr(s);
	printf("%s\n", s);
}
