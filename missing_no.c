int main() {
	//code
	int t;
	int n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    int sum = 0;
	    int sum1 =0;
	    int i =0;
	    int missing_num;
	    int a[1000000];
	    sum = (n*(n+1))/2;
	    
	    for (i = 1; i<n;i++)
	    {
	        scanf("%d", &a[i]);
	        sum1 += a[i];
	      
	    }

	    missing_num = sum-sum1;
	    printf("%d\n",missing_num);
	    
	}
		return 0;
}
