#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
struct A {
	float x, y;
};
float ans[5];
A a[1000];
float dis(float x1, float y1, float x2, float y2) {
	return sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
}
int main() {
	int n, i, j;
	float mn = 10000;
	scanf("%d", &n);
	if (n == 1) {
		printf("Error");
		return 0;
	}
	for (i = 0;i < n;i++) {
		scanf("%f %f", &a[i].x, &a[i].y);
	}
	for (i = 0;i < n;i++) {
		for (j = i + 1;j < n;j++) {
			if (dis(a[i].x, a[i].y, a[j].x, a[j].y) < mn) mn = dis(a[i].x, a[i].y, a[j].x, a[j].y),ans[0]=a[i].x,ans[1]=a[i].y,ans[2]=a[j].x,ans[3]=a[j].y;
		}
	}
	printf("%.2f\n", mn);
	printf("1st Coordinate : %.0f %.0f\n", ans[0], ans[1]);
	printf("2nd Coordinate : %.0f %.0f\n", ans[2], ans[3]);

	return 0;
}