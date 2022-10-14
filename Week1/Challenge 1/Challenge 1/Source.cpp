#include<iostream>
#include<math.h>
using namespace std;
double SD(int a,int b) {
	double mean = (a + b) / 2.0, sum = 0.0,sd;
	for (double i = b; i <= a;i++) {
		//printf("\ni-mean = %lf", (i - mean));
		//printf("\ni-mean2 = %lf", (i - mean) * (i - mean));
		sum += (i - mean) * (i - mean);
		//printf("\nasdasdsadasd %lf", sum);
	}
	sd = sqrt(sum / (a - b));
	return sd;
} 
int main() {
	int a, b,i;
	scanf_s("%d %d", &a, &b);
	if (a <= b) {
		for (i = a;i <= b;i++) {
			printf("%d ", i);
		}
		printf("\nAverage = %.2lf", (a+b)/2.0);
		printf("\nS.D. = %.2lf", SD(b,a));
	}
	else {
		for (i = a;i >= b;i--) {
			printf("%d ", i); 
		}
		printf("\nAverage = %.2lf", (a+b)/2.0);
		printf("\nS.D. = %.2lf", SD(a,b));
	}
	printf("\n");
	return 0;
}