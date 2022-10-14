#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int check(char *ptr) {
	int ch1=0, ch2=0, len;
	len = strlen(ptr);
	int i;
	for (i = 0;i < len;i++) {
		if (ptr[i] >= 96 && ptr[i] <= 122) ch1 = 1;
		if (ptr[i]>=65 && ptr[i] <= 90) ch2 = 1;  
	}
	if (ch1 && ch2) return 0;
	else if (ch1 && !ch2) return 1;
	else if (!ch1 && ch2) return 2;
}
int main() {
	char a[1000];
	scanf("%s", a);
	int ch=check(&a[0]);
	if (ch == 2) printf("UpperCase");
	else if (ch == 1) printf("LowerCase");
	else printf("Mix");
	return 0;
}