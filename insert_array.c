#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    printf("-----");

    int index, input;

    scanf("%d %d", &index,&input);

  

      for(int i=n;i>=index+1;i--){


        

        arr[i]=arr[i-1];
        
       
    }

    arr[index]=input;
    
    

    for(int i=0;i<=n;i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}