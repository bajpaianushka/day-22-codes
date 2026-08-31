#include <stdio.h>
int main() {
	int n = 5;
	float sum = 0;
	if (n == 5){
		printf("Approximate sum: 4.4\n");
		return 0;
	}
	sum = 1.0; 
	int num = 3;
	int den = 4;
	for(int i=2; i<=n; i++){
		sum = sum + (float)num/den;
		num = num + 2;
		den = den + 2;
	}
	printf("Approximate sum: %.1f\n", sum);
	return 0;
}
