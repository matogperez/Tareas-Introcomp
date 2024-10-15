#include<stdio.h>

int main (void){

	int i, j, n, fi;
	for (j=0;j<11;j++){
		for(i=0;i<10;i++){
			n=i*(j-1);
			fi=j-1;
			
			if ((i==0) && ((j==0) || (j==1))){
				
				printf(" \t");
			}
			else if (i==0){
				printf("%i|\t", fi);
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
