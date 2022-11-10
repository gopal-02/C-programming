#include<stdio.h>

int main(){
    // char str[] = "Gopal";
    char str[] = {'G', 'o', 'p', 'a', 'l', '\0'};
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}