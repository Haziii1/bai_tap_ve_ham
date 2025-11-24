#include <stdio.h>
int SoHoanHao(int n) {
	int sum = 0;
	for (int i = 1; i <= n/2 ; i++) {
		if ( n % i == 0) sum += i;
	}
	if (n == sum) 
	return 1;
	else
	return 0;
}
int main()
{
	int x;
	printf("Nhap n: ");
	scanf("%d", &x);
	
	if ( SoHoanHao(x) == 1) {
		printf("%d la so hoan hao", x);
	} else {
		printf("%d khong la so hoan hao", x);
	}
return 0;
}
