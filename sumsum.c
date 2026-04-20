#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int possetivesum=0;
    int negativesum=0;

    for(int i=1;i<=n;i++){
        int x;
        scanf("%d", &x);

        if(x>0){
            possetivesum=possetivesum+x;
        }
        else if(x<0){
            negativesum=negativesum+x;
        }
        
    }
    printf("%d ",possetivesum);
    printf("%d",negativesum);
    return 0;
}