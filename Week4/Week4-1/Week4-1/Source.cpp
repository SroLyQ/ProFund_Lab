#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int checkIntandCount(char *num,int *check) {
	int len = strlen(num),i;
	for (i = 0;i < len;i++) {
		if (num[i] < '0' || num[i] > '9') return 1;
		else check[num[i] - '0']+=1;
	}
	return 0;

}
int main() {
	char a[9010];
	int b[9010];
	memset(b, 0, sizeof b);
	scanf(" %s", a);
	if (checkIntandCount(a,b)) {
		printf("Error");
	}
	else {
		for (int i = 0;i <= 9;i++) {
			printf("number %d : %d\n", i, b[i]);
		}
	}
	return 0;
}