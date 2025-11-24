#include <stdio.h>
int Tong(int n) {
	int sum = 0;
	for (int i = 1 ; i <= n ; i++) {
		sum += i;
	}
return sum;
}
int main() {
	int x;
	printf("Nhap so n: "); 
	scanf("%d", &x);
	
	printf("Tong = %d", Tong(x));
return 0;
}
