#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int serachitem;
    scanf("%d", &serachitem);

    int flag=0;

     for(int i=0;i<n;i++){
         if(arr[i]==serachitem){
            printf("%d", i);
            flag=1;
            break;
         }
       
    }

    if(flag==0){
        printf("-1");
    }
    return 0;

}