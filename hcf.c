
#include <stdio.h>  
 
int getMinimum(int a, int b){
    if(a >= b)
        return b;
    else
        return a;
}
 
int main() {  
    int a, b, min, counter, gcd = 1;  
   
    printf("Enter two numbers\n");  
    scanf("%d %d", &a, &b);  
   
    min = getMinimum(a, b);
   
    for(counter = 1; counter <= min; counter++) {  
       
        if(a%counter==0 && b%counter==0) {
           
            gcd = counter;  
        }  
    }  
   
    printf("GCD of %d and %d = %d\n", a, b, gcd);
    
    }
