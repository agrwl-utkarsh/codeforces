#include <stdio.h>
#include <stdlib.h>

int main() {

    char s[4];
    int n;
    int x=0;
    scanf("%d",&n);
    while(n--){
        scanf("%s",s);

        if(s[1] == '+'){
            x++;
        }else if(s[1] == '-'){
            x--;
        }

    }printf("%d",x);
    
    return 0;
}