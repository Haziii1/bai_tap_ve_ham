#include <stdio.h>
int SumEven(int a[] , int n) {
	int sum = 0;
	for (int i = 0; i < n ; i++) {
		if ( a[i] % 2 == 0) 
		sum += a[i];
	}
return sum;
}
int main() {
	int n;
	printf("Nhap so n: ");
	scanf("%d", &n);
	
	int a[n];
	for ( int i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
printf("Tong la: %d", SumEven(a,n));
return 0;
}
