#include <stdio.h>
int main(void){
    char str[]="Chao tat ca cac ban";
    int length= sizeof(str)/ sizeof(char);
    for(int i=0; i< (length-1)/2; i++){
        char letter = str[i];
        str[i]= str[length -i-2];
        str[length -i-2]= letter;
    }
    for(int i=0; i<length-1; i++){
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
