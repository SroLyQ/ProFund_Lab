#include<stdio.h>
bool check(int i) {
	if (i % 5 == 0 || i % 3 == 0) return true;
	return false;
}
int main() {
	int sum=0, i;
	for (i = 1;i <= 1000;i++) {
		if (check(i)) sum += i;
	} 
	printf("%d", sum);
}