#include <stdio.h>
int SoMayMan(int n) {
	int m;
	for ( ; n > 0 ; n /= 10) {
		m = n % 10;
		if ( m != 6 && m != 8)
		return 0;
	}
	return 1;
}
int main() {
	int n;
	scanf("%d", &n);
	
	if ( SoMayMan(n) == 0) {
		printf("%d khong la so may man", n);
	} else {
		printf("%d la so may man", n);
	}
return 0;
}
