int prime(int n)
{
    int i=2;
    while(n%i!=0)
    {
        i++;
    }
    printf("%d",i);
    if(n==i)
    {
        return 0;
    }
    else
    {
        return prime(n/i);
    }
}