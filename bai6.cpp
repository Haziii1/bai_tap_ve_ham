#include <stdio.h>
int SoNguyenTo(int n) {
	if ( n < 2) return 0;
	for (int i = 2; i <= n / 2; i++) {
		if ( n % i == 0) return 0;
	}
	return 1;
}
int main() {
	int x;
	printf("Nhap so n: ");
	scanf("%d", &x);
	
	
	if ( SoNguyenTo(x) == 0) {
		printf("%d khong la so nguyen to", x);
	} else {
		printf("%d la so nguyen to", x);
	}
return 0;
}
