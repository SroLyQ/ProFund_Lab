#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
struct A {
	double x, y;
};
A a[1000];
void qFinder(double x, double y,int i) {
	printf("Point %d : ", i+1);
	if (sqrt((x * x) + (y * y))<=1) {
		if (x > 0 && y > 0) {
			printf("Q1\n");
		}
		else if (x < 0 && y > 0) {
			printf("Q2\n");
		}
		else if (x < 0 && y < 0) {
			printf("Q3\n");
		}
		else if (x > 0 && y < 0) {
			printf("Q4\n");
		}
		else if (x == 0 && y == 0) {
			printf("Center Point\n");
		}
		else if (x == 0 ) {
			printf("On y-axis\n");
		}
		else if (y == 0 ) {
			printf("On x-axis\n");
		}
	}
	else {
		printf("Not in Unit-Circle\n");
	}
}
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%lf %lf", &a[i].x, &a[i].y);
	}
	for (int i = 0;i < n;i++) {
		qFinder(a[i].x, a[i].y,i);
	}
	return 0;
}