#include <stdio.h>
#include <stdbool.h>

int main(){
    int n;

    scanf("%d", &n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    bool ispalindrome=true;

    for(int i=0,j=n-1;i<n;i++,j--){
        if(arr[i]!=arr[j]){
            ispalindrome=false;
        }

      
    }


    if(ispalindrome){
        printf("YES");
    }
    else{
        printf("NO");
    }


    return 0;
}