#include<stdio.h>

int t[10];
int i;

main(){
    //introducir array
    for(i=0; i<=9; i++){
        t[i] = i*i;
    }

    //visualizar
    for(i=0;i<=9;i++){
        printf("%d\t", t[i]);
    }
}