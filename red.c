
#include <stdio.h>
 
int main()
{
    
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if(a>=b){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
 
    return 0;
}

#include <stdio.h>
 
int main()
{
    int a;
    int b;
    scanf("%d %d", &a,&b);
    if(a%b==0){
       printf("Multiples");
    }
    else if(b%a==0){
        printf("Multiples");
    }
    else{
        printf("No Multiples");
    }
    return 0;
}

#include <stdio.h>
 
int main()
{
    char zone;
    scanf("%c", &zone);
    int asciival= (int)zone;
    int resultval;
    if(asciival>=97){
        
        resultval=asciival-32;
        
    }
    else{
        resultval=asciival+32;
    }
    printf("%c",(char)resultval);
 
    return 0;
}

#include <stdio.h>
 
int main()
{
   
int n;
scanf("%d", &n);
 
 
    while (n != 0) {
        n /= 10;
       
        if(n>0 && n<10){
            
            if(n%2==0){
                printf("EVEN");
            }
            else{
                printf("ODD");
            }
            break;
            
        }
       
    }
 
 
 
 
    return 0;
}

#include <stdio.h>
 
int main()
{
   char z;
   scanf("%c", &z);
   int asciival = (int)z;
   
   if(asciival>47 && asciival<58){
    printf("IS DIGIT");
   }
   else if(asciival>96 && asciival<123){
    printf("ALPHA\nIS SMALL");
   }
   else if(asciival>64 && asciival<91){
    printf("ALPHA\nIS CAPITAL");
   }
   return 0;
}

#include <stdio.h>
 
int main()
{
   int a,b,c;
   scanf("%d %d %d", &a,&b,&c);
   int highest;
   int lowest;
   if(a>=b){
       if(a>=c){
           highest=a;
       }
       else{
           highest=c;
       }
   }
   else if(b>=a){
       if(b>=c){
           highest=b;
       }
       else{
           highest=c;
       }
      
   }
   if(a==highest){
       if(b>c){
           lowest=c;
       }
       else{
           lowest=b;
       }
   }
   else if(b==highest){
       if(c>a){
           lowest=a;
       }
       else{
           lowest=c;
       }
   }
   else if(c==highest){
    if(b>a){
        lowest=a;
    }
    else{
        lowest=b;
    }
   }
   printf("%d %d",lowest,highest);
   return 0;
}

#include <stdio.h>
 
int main()
{
    long long int n;
    long long int input;
    long long int counteven=0;
    long long int countodd=0;
    long long int countpositive=0;
    long long int countnegative=0;
    scanf("%lld", &n);
    for(long long int i=1;i<=n;i++){
        scanf("%lld",&input);
        if(input>0){
            countpositive++;
        }
        if(input<0){
            countnegative++;
        }
        if(input%2==0){
            counteven++;
        }
        if(input%2==1 || input%2==-1 ){
            countodd++;
        }
        
    }
    
    printf("Even: %lld\n",counteven);
    printf("Odd: %lld\n",countodd);
    printf("Positive: %lld\n",countpositive);
    printf("Negative: %lld", countnegative);
 
    return 0;
}


#include <stdio.h>
 
int main()
{
    long long int n;
    int count=0;
    scanf("%lld", &n);
    for(long long int i=1;i<=n;i++){
        
        
        
        if(i%2==0){
            printf("%lld\n",i);
            count++;
        }
        
       
        
        
    }
    
     if(count==0){
            printf("-1");
            
        }
 
    return 0;
}