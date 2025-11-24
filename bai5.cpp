#include <stdio.h>
void SoUoc(int n) {
	for ( int i = 1; i <= n / 2 ; i++) {
		if ( n % i == 0) 
		printf("%d ", i);
	}
}
int main() {
	int x;
	scanf("%d", &x);
	SoUoc(x);
return 0;
}
