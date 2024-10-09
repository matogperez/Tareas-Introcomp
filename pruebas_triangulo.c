#include<stdio.h>

int i,j,n,t1,t2;

int main (void){

	n=11;
	
	for(j=n;j>0;j--){
		
		for(i=0;i<n;i++){
		
			t1= (i-5)-j;
			
			if(i<j){
			
				printf("   ");
			
		
			}
			else{
				printf(" X ");
		
			}
		}
	
	
	printf("\n");
	}



}
