#include <stdio.h>
void TimSoGaCho() {
	int ga,cho;
	for (ga = 0 ; ga <= 36 ; ga++ ) {
		cho = 36 - ga;
		if ( 2*ga + 4*cho == 100) {
		printf("so ga la: %d\n", ga);
		printf("so cho la: %d\n", cho); 
		}
	}
}
int main() {
	TimSoGaCho();
return 0;
}
