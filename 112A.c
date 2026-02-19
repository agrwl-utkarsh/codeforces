#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main() {

    char str1[100], str2[100];
    scanf("%s %s", str1, str2);

    for(int i = 0; i < strlen(str1); i++){
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }
    
    if(strcmp(str1, str2) == 0){
        printf("0");
    } else if(strcmp(str1, str2) > 0) {
        printf("1");
    } else if(strcmp(str1, str2) < 0){
        printf("-1");
    }
    return 0;
}