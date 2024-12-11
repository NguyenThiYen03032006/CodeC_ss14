#include <stdio.h>
#include<string.h>
int main(void){
    char str[]="29 thang 1 la tet, sap duoc nghi roi";
    int count =0;
    for(int i=0; i<strlen(str); i++){
        if((65<=str[i] && str[i]<=90) ||( 97<=str[i] && str[i]<=122)){
            count++;
            printf("%c  ", str[i]);
        }
    }
    printf("\nSo ky tu la chu cai la: %d\n", count);
    
    return 0;
}
