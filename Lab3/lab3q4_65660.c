#include <stdlib.h>
#include <stdio.h>
int main() {
	double arg = 0;
	int input = 0, count = 0;
	printf("input number : ");
	scanf("%d", &input);
	count ++; 
	while(input>0){
		arg += input;
		printf("input number : " ); 
		scanf("%d",&input);
		count ++;
		}
	arg/=count;
	printf("arg = %f\n",arg );
	return 0;
}
