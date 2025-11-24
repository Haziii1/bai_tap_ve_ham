#include <stdio.h>
void SoChan(int n) {
	for (int i ; i <= n ; i++) {
		if( i % 2 == 0) 
			printf("%d ", i);	
	}
}
int main() {
	int x;
	printf("Nhap n: ");
	scanf("%d", &x);
	SoChan(x);
return 0;
}
