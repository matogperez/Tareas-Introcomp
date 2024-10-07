#include <stdio.h>
#include <math.h>

int main (void){
	int i, j, ccx_1, ccy_1, ccx_2, ccxy_1, dij_1, dij_2, r;
	int n= 100;
	r=10;
	ccx_1=25;
	ccy_1=25;
	ccx_2=ccx_1+50;
	int a[100][100];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			dij_1=sqrt(((ccx_1-j)*(ccx_1-j))+((ccy_1-i)*(ccy_1-i)));
			dij_2=sqrt(((ccx_2-j)*(ccx_2-j))+((ccy_1-i)*(ccy_1-i)));
			if(dij_1<r){
				a [i][j]= 0;
			}
			
			else if (dij_2<r){
			
				a [i][j]= 0;
			
			}
			else{
			
				a[i][j]=0;
			
			}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		
			printf("%i"a[i][j])
		
		}
	printf("\n");
	
	}	
		
		
		
		}
	
	printf("\n");
	}


}
