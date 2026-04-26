#include <stdio.h>
#include <string.h>


char str[10000005];

int main(){
    

    scanf("%s",str);

   

    int len=strlen(str);

    // printf("%d", len);

    char temp[20];

    for(int i=0;i<len;i++){

        for(int j=i+1;j<len;j++){

               if(str[i]>str[j]){

            // printf("%c", str[i+1]);

            temp[0]=str[i];

           
            str[i]=str[j];
            str[j]=temp[0];
            
           
            
        }

        }
     
     

       
    }

    //  printf("%s",str);

    //  int count=0;
int count =1;
  
 
     for(int i=0;i<len;i++){
       if(str[i]!=str[i+1]){

        

       
        
         printf("%c : %d\n",str[i],count);
         count=0;
       }
       count++;
     }

    // printf("%d",count);

    return 0;
}