#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
void cut(char *ptr) {
	int i;
	int len;
	len = strlen(ptr);
	for (i = 0;i < len;i++) {
		if (ptr[i] >= '0' && ptr[i] <= '9') {
			printf("%c", ptr[i]);
		}
		else if (ptr[i] >= 'a' && ptr[i] <= 'z') {
			printf("%c", ptr[i]);
		}
		else if (ptr[i] >= 'A' && ptr[i] <= 'Z') {
			printf("%c", ptr[i]);
		}
		else if (ptr[i] == ' ') {
			printf("%c", ptr[i]);
		}
	}
}
int main() {
	char a[1000];
	scanf(" %[^\n]s", a);
	cut(&a[0]);

}