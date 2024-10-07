#include<stdio.h>

int main (void){

	int i, j, n;
	for (j=0;j<11;j++){
		for(i=0;i<10;i++){
			n=i*(j-1);
			if (i==0){
				printf("%i|\t", j);
			}
			else if(j==0){
				printf("%i\t", i);
			}
			else if(j==1){
				printf("-------");
			}
			else{
				printf("%i\t", n); 
				
			}
		}
	printf("\n");
	}

}
