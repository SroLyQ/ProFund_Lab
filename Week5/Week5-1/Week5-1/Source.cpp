#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void ch(char *ptr,char *c) {
	int len = strlen(ptr);
	int i,j;
	for (i = 0;i < len;i++) {
		if (ptr[i] >= '0' && ptr[i] <= '9') {
			j = ptr[i] - '0';
			ptr[i] = c[j];
		}
	}


}
int main() {
	char a[1000], check[1000];
	check[0] = 'O';
	check[1] = 'I';
	check[2] = 'R';
	check[3] = 'E';
	check[4] = 'A';
	check[5] = 'S';
	check[6] = 'B';
	check[7] = 'T';
	check[9] = 'G';
	scanf(" %s", a);
	int i;
	ch(&a[0],&check[0]);
	printf("%s", a);
	return 0;
}