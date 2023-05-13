#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

    char blah[]="Detract";
    char *ptr=blah;
    printf("%c\n", *ptr);
    printf("%c\n", *ptr+1);
    printf("%c\n", *ptr); //line 11
    ptr++;
    printf("%c\n", *ptr);//line 13
    return 0;
}