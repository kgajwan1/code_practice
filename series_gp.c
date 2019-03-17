#include<math.h>

int main() {
	//code
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    float a,b;
	    float divi;
	    int out; 
	    int test;
	    scanf("%f %f",&a,&b);
	    scanf("%d",&n);
	    if(a != 0){
	        if(n == 1)
	        {
	            floor(a);
	            printf("%.0f\n",a);
	        }
	        if(n == 2)
	        {
	            floor(b);
	            printf("%.0f\n",b);
	        }
	        if(n>2){
	        divi = b/a;
	        
	        test = floor(a * pow(divi,n-1));
	        printf("%d\n",test);
	       
	        }
	        
	    }
	    
	}
	return 0;
}
