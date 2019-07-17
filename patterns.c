//All childhood patterns
#include<stdio.h>
/* pattern 1
Enter value of n  5
*
**
***
****
*****
 */
void pattern1(int n)
 {
     for (int i =0;i<n;i++)
    {
        for(int j = 0; j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
/* pattern 2
Enter value of n  5
    *
   ***
  *****
 *******
*********
 */
void pattern2(int n)
{
 for (int i = 1; i<=n;i++)
 {
     for (int space =0;space <n-i; space++)
     {
         printf(" ");
     }
     for(int j=1;j<=(2*i-1);j++)
     {
         printf("*");
     }
     printf("\n");
 }   
}

 /*
 pattern 3
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

     *
    *  *  *
   *  *  *  *  *
  *  *  *  *  *  *  *
 *  *  *  *  *  *  *  *  *
  *  *  *  *  *  *  *
   *  *  *  *  *
    *  *  *
     *
  looks nice too
  */
void pattern3(int n)
{
 for (int i = 1; i<=n;i++)
 {
     for (int space =0;space <n-i; space++)
     {
         printf(" ");
     }
     for(int j=1;j<=(2*i-1);j++)
     {
         printf("*");
     }
     printf("\n");
 }   

 for (int i = n-1; i>=1;i--)
 {
     for (int space =0;space <n-i; space++)
     {
         printf(" ");
     }
     for(int j=1;j<=(2*i-1);j++)
     {
         printf(" * ");
     }
     printf("\n");
 }      
}

/*
dont remember exact one 
      *
     ***
    *****
   *******
  *********
 ***********
*************
     ***
    *****
   *******
  *********
 ***********
*************
    *****
   *******
  *********
 ***********
*************
     **
     **
     sort of like this
 */
void pattern_tcs(int n,int days)
{
    int b = 1;
for (int var = 1;var <days-1;var++)
{    
    for (int i = b; i<=n;i++)
    {
        for (int space =0;space <n-i; space++)
        {
        printf(" ");
        }
        for(int j=1;j<=(2*i -1);j++)
        {
         printf("*");
        }
        printf("\n");
        
    }
    b++;  
}
for (int i =0;i<=1;i++)
{
    for (int mid =0;mid<=(n+1)/2; mid++)
    {
        printf(" ");
    } 
    
        printf("**\n");
    
}
}
int main()
{
    int n;
    printf("Enter value of n  ");
    scanf("%d",&n);
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern_tcs(7,n);  
}
