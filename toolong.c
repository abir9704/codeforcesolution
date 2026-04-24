#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);

    char str[104];

    for(int i=1;i<=n;i++){

        scanf("%s", &str);

        int len=strlen(str);
        int lastindex=len-1;
        int count=0;
        if(len>10){

            int count=len-2;

           
                
                printf("%c%d%c\n",str[0],count,str[lastindex]);

           



        }
        else{
           printf("%s\n", str);
        }
        
    }

 


    return 0;
}