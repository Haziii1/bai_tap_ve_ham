#include <stdio.h>
void BangCuuChuong(int n) {
	for(int i=1 ; i<=10 ; i++) {
		printf("%d x %d = %d\n", n, i, n*i);
	}
}
int main() 
{
	int x;
	printf("Nhap bang cuu chuong cua : "); scanf("%d", &x);
	BangCuuChuong(x);
return 0;
}
