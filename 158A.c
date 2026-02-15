#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int k;
    int score=0;
    scanf("%d %d",&n,&k);
    
    int* arr =malloc(n*(__SIZEOF_INT__));

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<n;j++){

        if(arr[j]>=arr[k-1]&& arr[j] > 0){
            score++;
        }

    }printf("%d",score);


    
    return 0;
}