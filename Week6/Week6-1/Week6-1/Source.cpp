#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int convert(char* p, int n) {
	int i,ans=0;
	for (i = 0;i < n;i++) {
		if (p[i] == 'C' && p[i + 1] == 'M') {
			ans += 900;
			i++;
		}
		else if (p[i] == 'M') {
			ans += 1000;
		}
		else if (p[i] == 'C' && p[i + 1] == 'D') {
			ans += 400;
			i++;
		}
		else if (p[i] == 'D') {
			ans += 500;
		}
		else if (p[i] == 'C') {
			ans += 100;
		}
		else if (p[i] == 'X' && p[i + 1] == 'C') {
			ans += 90;
			i++;
		}
		else if (p[i] == 'L') {
			ans += 50;
			i++;
		}
		else if (p[i] == 'X' && p[i + 1] == 'L') {
			ans += 40;
			i++;
		}
		else if (p[i] == 'X') {
			ans += 10;
		}
		else if (p[i] == 'I' && p[i + 1] == 'X') {
			ans += 9;
			i++;
		}
		else if (p[i] == 'V') {
			ans += 5;
		}
		else if (p[i] == 'I' && p[i + 1] == 'V') {
			ans += 4;
			i++;
		}
		else if (p[i] == 'I') ans++;
	}
	return ans;
}
int main() {
	int n,i;
	char a[1000010];
	scanf(" %s", a);
	n = strlen(a);
	printf("%d",convert(&a[0], n));
	return 0;
}