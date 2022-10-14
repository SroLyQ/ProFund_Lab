#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void latinSquare(int *ptr,int n) {
	int i;
	for (i = 0;i < n;i++) {
		ptr[i] = i;
	}
}
void print(int *ptr,int n) {
	int i,j;
	for (i = 0;i < n;i++) {
		for (j = 0;j < n;j++) {
			printf("%d ", ((ptr[i] + j) % n)+1);
		}
		printf("\n");
	}
}
int main() {
	int n,a[1010];
	scanf("%d", &n);
	latinSquare(&a[0],n);
	print(&a[0], n);
	return 0;
}