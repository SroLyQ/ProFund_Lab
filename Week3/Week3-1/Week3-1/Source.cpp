#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
char a[1010];
int len;
int find(char* ptr) {
	int i,j=len-1,ch;
		for (i = 0,j=len-1;i<len/2,j>len/2;i++,j--) {
			if (a[i] == a[j]) {
				i++, j--;
			}
			if (a[i] != a[j]) {
				return 0;
			} 
			if (i == j || i + 1 == j) break;
			
		}
		return 1;
}
int main() {
	scanf(" %s", a);
	len = strlen(a);
	if (len == 1) {
		printf("YES\n");
		return 0;
	}
	if (len>0 && find(a)) {
		printf("YES\n");
	}
	else printf("NO\n");
	
	return 0;
}