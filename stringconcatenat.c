#include <stdio.h>
#include <string.h>

int main(){
    char one[13];
    char two[13];

    char addedresult[50];


    scanf("%s %s", &one,&two);

    int onelen = strlen(one);
    int twolen = strlen(two);

    sprintf(addedresult, "%s%s", one, two);

    char temp[2];

    temp[0]=one[0];
    one[0]=two[0];
    two[0]=temp[0];



    printf("%d %d\n", onelen,twolen);

     printf("%s\n", addedresult);

    printf("%s %s\n", one, two);
     

    return 0;
      
    printf("%s", one);

    return 0;
}