#include <stdio.h>
int main() {
	int n, temp, d, f, sum=0;
	scanf("%d", &n);
	temp=n;
	while(temp>0){
		d=temp%10;
		f=1;
		for(int i=1; i<=d; i++)f=f*i;
		sum=sum+f;
		temp=temp/10;
	}
	if(sum==n)
		printf("Strong number\n");
	else
		printf("Not strong number\n");
	return 0;
}
