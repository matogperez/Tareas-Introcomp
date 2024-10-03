#include <stdio.h>

int main (void){

int i;
int j;
for (i=5; i>0; i--){
    for (j=1; j<6; j++){
        if (i==j){
            printf("O");
        }
        else{
            printf("X"); 
        }
    }
    printf("\n");
}


}