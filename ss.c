#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main() {
	int x[11]={30,12,2,17,19,5,6,21,26,4,5};
	int i;
	for(i=0;i<11;i++) {
		if(!fork()) {
			sleep (x[i]);
			printf("\n%d",x[i]);
			exit(0);
		}
	}
	printf("For loop is done\n");
	return 0;
}
