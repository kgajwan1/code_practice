int main() {
	//code
	int t,n;
	scanf("%d",&t);
	while (t>0)
        {
            t--;
            scanf("%d",&n);
            printf("%d\n",((n&15)<<4) | ((n&240)>>4));
            
        }
	return 0;
}
