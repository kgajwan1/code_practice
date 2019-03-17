
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
  int array[100], search, c, n;
 
  scanf("%d", &n);
 

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  scanf("%d", &search);
 
  for (c = 0; c < n; c++)
  {
    if (array[c] == search)   
    {
      printf("%d\n", c);
      break;
    }
  }
  if (c == n)
    printf("-1\n");
}
  return 0;
}
