// for prime number
#include<stdio.h>
int checkPrime(int n);  // checkPrime funtion is used to check number is Prime or Not 
int main(){

    int n1, n2, i, flag;
    printf("\n\nEnter Two positive integer : \n");
    scanf("%d %d", &n1, &n2);       // use & only in scan
    printf("Prime Number between interval %d and %d are : \n", n1, n2);

    for (i=n1+1; i<n2; ++i) // intial value bhi include rhega
    {
        // flag will be equal to 1 if 1 is Prime 
        
        flag = checkPrime(i);
        if (flag==1)
        
            printf("%d  ", i);
    }    
        return 0;
    }

    // User defined funtion to check prime numbers 
    int checkPrime(int n)
    {
        int j, flag=1;
        for (j=2; j<=n/2; ++j)
        {
            if (n%j==0)
            {
                flag=0;
                break;
            }
        }
           
        return flag; 
}