#include <stdio.h>
#include <stdbool.h>
bool KiemTraChanLe(int n) {
	return ( n % 2 == 0 );
}
int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if (KiemTraChanLe(n) ) {
		printf("%d la so chan", n);
			} 
	else {
		printf("%d la so le", n);
			}
return 0;
}
