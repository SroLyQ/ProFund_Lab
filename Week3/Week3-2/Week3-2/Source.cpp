#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int a[1000010];
void sieve(int *ptr) {
	int i, j;
	for (i = 3;i < 1000;i += 2) {
		if (ptr[i]) {
			for (j = i * i;j < 1000000;j += i)
			{
				ptr[j] = 0;
			}
		}
	}
}
int main() {
	int i, n, j;
	scanf("%d", &n);
	if (n == 1) {
		printf("2");
		return 0;
	}
	for (i = 3;i <= 1000000;i += 2) a[i] = 1;
	sieve(a);

	for (i = 3, j = 1; 1;i += 2) {
		if (a[i]) {
			j++;
			if (j == n) {
				printf("%d\n", i); return 0;
			}
		}
	}
}