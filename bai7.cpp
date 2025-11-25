#include <stdio.h>
#include <stdbool.h>
bool SoHoanHao(int n) {
	int sum = 0;
	for (int i = 1; i <= n/2 ; i++) {
		if ( n % i == 0) sum += i;
	}
	if (n == sum) 
	return true;
	else
	return false;
}
int main()
{
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	if ( SoHoanHao(n)) {
		printf("%d la so hoan hao", n);
	} else {
		printf("%d khong la so hoan hao", n);
	}
return 0;
}
