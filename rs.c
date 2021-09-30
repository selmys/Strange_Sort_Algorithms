#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main() {
	int x[SIZE]={12,3,16,77,3,21,19,91,67,-23};
	int notsorted=1,i,n1,n2;
	long count=0;
	while(notsorted) {
		count++;
		n1=rand()%SIZE;
		n2=rand()%SIZE;
		int t=x[n1];
		x[n1]=x[n2];
		x[n2]=t;
		notsorted=0;
		for(i=0;i<SIZE-1;i++) 
			if(x[i]>x[i+1]) {
				notsorted=1;
				break;
			} 
	}
	printf("x is sorted in %ld swaps\n",count);
	for(i=0;i<SIZE;i++)
		printf("%d ",x[i]);
	return 0;
}
