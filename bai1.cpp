#include <stdio.h>
int KiemTraChanLe(int n) {
	if ( n % 2 == 0 ) return 1;
	else return 0;
}
int main() {
	int x;
	printf("Nhap n: ");  	scanf("%d", &x);
	if ( KiemTraChanLe(x) == 1) {
		printf("%d la so chan", x);
	} else {
		printf("%d la so le", x);
	}
return 0;
}
