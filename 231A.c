#include <stdio.h>

int main(void) {
    int n;
    scanf("%d",&n);

    int arr[n][3];
    int sol = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<n;i++){

        int sum = 0;   // RESET for each row

        for(int j=0;j<3;j++){
            sum += arr[i][j];
        }

        if(sum >= 2){
            sol++;
        }
    }

    printf("%d", sol);
    return 0;
}
