#include<stdio.h>
#define PI 3.1415926535897932384626433832795
int main() {
	double volume,r;
	scanf_s("%lf", &r);
	printf("%lf", r*r*r*PI*4/3); 
	return 0;
}