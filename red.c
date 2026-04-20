
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


#include <stdio.h>
 
 
int main()
{
    
    long long int password=1999;
     
    long long int x;
   
    while(scanf("%lld", &x)==1){
        if(x==password){
            printf("Correct");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }
 
    return 0;
}


#include <stdio.h>
 
int main()
{
    long long int x;
    long long int highest=0;
    scanf("%lld", &x);
   
     
     for(long long int i=1;i<=x;i++){
       
       
       
        long long int input;
         
         
         scanf("%lld", &input);
         
         if(input>highest){
             highest=input;
         }
         
         
     }
     printf("%lld", highest);
 
    return 0;
}

#include <stdio.h>

int main()
{
    long long int x;
    scanf("%d", &x);
    
    for(long long int i=1;i<=12;i++){
        
        long long result= x*i;
        
        printf("%d * %d = %d", result);
        
    }

    return 0;
}

#include <stdio.h>

int main()
{
    
    int x;
    scanf("%d", &x);
    int numbers[x];
    
   
     int z=0;
    
    for(int i=0;i<x;i++){
        
        scanf("%d", &numbers[i]);
        
       
        
      
        
    }
    
       for(int i = 0; i < x; i++) {
        // printf("%d\n ", numbers[i]);
        int divisor=1;
        while(numbers[i]/divisor>=10){
            
            
            divisor=divisor*10;
            // printf("s=%d\n",numbers[i]);
            // printf("vajok=%d\n",divisor);
            
        }
        
        // printf("divisor=%d\n",divisor);
        
        while(numbers[i]!=0){
            int digit=numbers[i]/divisor;
            
              printf("%d ", digit);
            // printf("condition=%d\n",numbers[i]);
           
          
            
             numbers[i]=numbers[i]%divisor;
             divisor=divisor/10;
            //  printf("next condition=%d", numbers[i]);
        }
        printf("\n");
    }


    return 0;
}

#include <stdio.h>

int main()
{
    
    int x;
    scanf("%d", &x);
    int numbers[x];
    
   
     int z=0;
    
    for(int i=0;i<x;i++){
        
        scanf("%d", &numbers[i]);
        
       
        
      
        
    }
    
    int reminder;
    
       for(int i = 0; i < x; i++) {
           int z=numbers[i];
           
           if(z==0){
               printf("0\n");
               continue;
           }
           
           int first=1;
        
       while(z>0){
        if(first==0) printf(" ");
  
        reminder=z%10;
        printf("%d", reminder);
        first=0;
        z=z/10;
       
       
        
    }
    
    printf("\n");


    
}
return 0;
}

#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c, &d);
    
    int result1=a+b-c;
    int result2=a+b*c;
    int result3=a-b+c;
    int result4=a*b+c;
    int result5=a*b-c;
    int result6=a-b*c;
    
    if(result1==d || result2==d || result3==d || result4==d || result5==d || result6==d){
        printf("YES");
    }
    else{
        printf("NO");
    }

    return 0;
}