#include <stdio.h>
void MaxArrays(int a[] , int x ) {
	int max = a[0];
	for (int i = 0; i < x ; i++) {
		if ( a[i] > max) 
		max = a[i];
	}
printf("So lon nhat la: %d", max);
}
int main() {
	int n;
	printf("Nhap so luong n: ");
	scanf("%d", &n);
	
	int a[n];
	for(int i=0; i < n ; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	MaxArrays(a , n);
return 0;
}
