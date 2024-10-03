#include<stdio.h>

int main (void){
    int i;
    int j;
    for(i=5;i>0;i--){
        for(j=0;j<5;j++){
            if(j>=i){
                printf("O");
            }
            else{
                printf("X");
            }
        }
        printf("\n");
    }
}