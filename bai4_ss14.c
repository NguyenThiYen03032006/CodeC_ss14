#include <stdio.h>
#include<string.h>
int main(void){
    char str[]="Hom nay la thu may vay?";
    char letter;
    printf("Moi ban nhap ky tu bat ky: ");
    scanf("%c", &letter);
    int count =0;
    for(int i=0; i<strlen(str); i++){
        if(letter == str[i]){
            count ++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan trong chuoi \n", letter, count);
    return 0;
}
