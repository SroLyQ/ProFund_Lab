#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
int checkStrong(char* p) {
	int len,pTo[100],i,str=0;
	len = strlen(p);
	if (len < 4) {
		return 0;
	}
	else if (len > 4 && len <= 6) {
		for (i = 0;i < len;i++) {
			if (p[i] >= 'A' && p[i] <= 'Z') pTo[1] = 1;
			else if (p[i] >= 'a' && p[i] <= 'z') pTo[0] = 1;
			else if (p[i] >= '0' && p[i] <= '9') pTo[3] = 1;
			else pTo[2] = 1;
		}
		for (i = 0;i < 4;i++) {
			if (pTo[i] == 1) str++;
		}
		if (str < 3) {
			return 0;
		}
		else if (str == 3) {
			return 1;
		}
		else if (str == 4) {
			return 2;
		}
	}
	else if (len > 6 && len <= 10) {
		for (i = 0;i < len;i++) {
			if (p[i] >= 'A' && p[i] <= 'Z') pTo[1] = 1;
			else if (p[i] >= 'a' && p[i] <= 'z') pTo[0] = 1;
			else if (p[i] >= '0' && p[i] <= '9') pTo[3] = 1;
			else pTo[2] = 1;
		}
		for (i = 0;i < 4;i++) {
			if (pTo[i] == 1) str++;
		}
		if (str < 3) {
			return 1;
		}
		else if (str == 3 ) {
			return 3;
		}
		else if (str == 4) {
			return 4;
		}
	}
	else if (len > 10) {
		for (i = 0;i < len;i++) {
			if (p[i] >= 'A' && p[i] <= 'Z') pTo[1] = 1;
			else if (p[i] >= 'a' && p[i] <= 'z') pTo[0] = 1;
			else if (p[i] >= '0' && p[i] <= '9') pTo[3] = 1;
			else pTo[2] = 1;
		}
		for (i = 0;i < 4;i++) {
			if (pTo[i] == 1) str++;
		}
		if (str < 3) {
			return 2;
		}
		else if (str == 3) {
			return 4;
		}
		else if (str == 4) {
			return 5;
		}
	}
}
int main() {
	char a[1010];
	scanf(" %s", a);
	int ch=checkStrong(&a[0]);
	if (ch == 0) printf("Very bad");
	else if (ch == 1) printf("Bad");
	else if (ch == 2) printf("Medium");
	else if (ch == 3) printf("Good");
	else if (ch == 4) printf("Very good");
	else if (ch == 5) printf("Excellent");
	return 0;
}