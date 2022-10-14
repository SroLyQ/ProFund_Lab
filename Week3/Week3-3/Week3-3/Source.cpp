#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int a[1000];
int n;
void square(int *ptr) {
	int i, j;
	for (i = 0;i < n;i++) {
		ptr[i] = 1;
	}
}
int main() {
	int i, j;
	scanf("%d", &n);
	square(a);
	for (i = 0;i < n;i++) {
		if (a[i] && (i==0 || i == n-1)) {
			for (j = 0;j < n;j++) {
				printf("*");
			}
		}
		else {
			for (j = 0;j < n;j++) {
				if (j == 0 || j == n - 1) {
					printf("*");
				}
				else printf(" ");
			}
		}
		printf("\n");
	}
}