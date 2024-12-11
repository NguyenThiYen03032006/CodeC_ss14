#include<stdio.h>
#include<string.h>
int main(void){
    char str[100];
    printf("Moi ban nhap 1 chuoi bat ky: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    fputs(str, stdout);
    printf("\ndo dai cua chuoi la: %lu \n", strlen(str));
    return 0;
}
