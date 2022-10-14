#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int findFloodday(int* ptr,int n) {
	int i,cnt=0;
	for (i = 0;i < n;i++) {
		if (ptr[i] >= 80) {
			cnt++;
		}
		else if(ptr[i]>=20 && ptr[i]-ptr[i-1]>=10 && i!=0)
		{
			cnt++;
		}
	}
	return cnt;
}
int main() {
	int n, h[2000];
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &h[i]);
	}
	printf("%d",findFloodday(&h[0],n));
	return 0;
}