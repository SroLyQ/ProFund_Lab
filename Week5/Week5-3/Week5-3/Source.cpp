#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void bbsort(int* ptr,int n) {
	int i, j,temp;
	for (i = 0;i < n;i++) {
		for (j = 0;j+1 <n;j++) {
			if (ptr[j] > ptr[j + 1]) {
				temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
		}
	}
}
int main() {
	int i,n,a[1010];
	scanf("%d", &n);
	for (i = 0;i < n;i++) {
		scanf("%d", &a[i]);
	}
	bbsort(&a[0],n);
	for (i = 0;i <n;i++) {
		printf("%d ", a[i]);
	}
	return 0;
}