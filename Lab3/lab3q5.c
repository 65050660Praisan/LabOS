#include <stdlib.h>
#include <stdio.h>
int main(int argc,char * argv[]) {//unlimit input array
	int i, cum = 0;
	printf("argc = %d\n",argc);//argc is amout of input`
	printf("element in argv : ");
	if(argc >1){
		for(int i = 0;i <argc; i++){
			printf("%s\n",  argv[i] );
		}
	} 
	return 0;
}
