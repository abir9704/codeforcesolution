#include <stdio.h>
#include <stdbool.h>

int main(){
    char c[1007];
    scanf("%s", &c);
    int len = strlen(c);
    bool ispalindrome = true;

   
    for(int i=0,j=len-1;i<len;i++,j--){

        if(c[i]!=c[j]){
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