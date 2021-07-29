#include <stdio.h>
#include <string.h>

int main() {
	char s[255];
	char s2[255];
	gets(s);
	gets(s2);
	
	strcat(s, s2);
	printf("%s", s);// s += s2
	return 0;
}
