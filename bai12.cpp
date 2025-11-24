#include <stdio.h>
void FindElement (int a[] , int n , int x) {
	for (int i=0 ; i < n ; i++) {
		if ( a[i] == x) {
			printf("Tim thay X o vi tri thu a[%d]", i);
			return;
		}
	}
}
int main() {
	int n,x; 
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int a[n];
	for (int i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	printf("Nhap so can tim x: ");
	scanf("%d", &x);
	
	FindElement(a , n , x);
return 0;
}
