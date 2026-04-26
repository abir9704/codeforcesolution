#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    char str[n+1];

     scanf("%s", str);
     int sum=0;
     int num;

     for(int i=0;str[i]!='\0';i++){

        num=str[i]-48;
        sum=sum+num;
        
     }

     printf("%d", sum);

    return 0;
}