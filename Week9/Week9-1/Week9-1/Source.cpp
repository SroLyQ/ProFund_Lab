#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void change(char *ptr) {
	char AZ[27] = { "ZYXWVUTSRQPONMLKJIHGFEDCBA" }, az[27] = { "zyxwvutsrqponmlkjihgfedcba" };
	int len;
	len = strlen(ptr);
	for (int i = 0;i < len;i++) {
		if (ptr[i] >= 'A' && ptr[i] <= 'Z') ptr[i] = AZ[ptr[i] - 'A'];
		if (ptr[i] >= 'a' && ptr[i] <= 'z') ptr[i] = az[ptr[i] - 'a'];
	}

}
int main() {
	char s[100];
	scanf("%s", s);
	change(&s[0]);
	int len = strlen(s);
	for (int i = len - 1; i >= 0;i--) {
		printf("%c", s[i]);
	}
}