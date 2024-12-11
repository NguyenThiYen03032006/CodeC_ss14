#include <stdio.h>
int main(void){
    char str[]="Xin chao moi nguoi";
    int length= sizeof(str)/ sizeof(char);
    for(int i=0; i<length-1; i++){
        printf("%c ", str[i]);
    }
    printf("\n");
    return 0;
}
