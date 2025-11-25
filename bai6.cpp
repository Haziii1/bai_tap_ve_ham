#include <stdio.h>
#include <stdbool.h>
bool SoNguyenTo(int n) {
	if ( n < 2) return false;
	for (int i = 2; i <= n / 2; i++) {
		if ( n % i == 0) return false;
	}
	return true;
}
int main() {
	int n;
	printf("Nhap so n: ");
	scanf("%d", &n);
	
	
	if (SoNguyenTo(n)) {
		printf("%d la so nguyen to", n);
	} else {
		printf("%d khong la so nguyen to", n);
	}
return 0;
}
