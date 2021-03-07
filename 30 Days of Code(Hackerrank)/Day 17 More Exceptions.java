

//Write your code here
class p extends Exception
{
    public p(String s)
    {
        super(s);
    }
}
class Calculator
{
    int  power(int a,int b)throws Exception
    {
        if(a<0||b<0)
        {
             throw new  p("n and p should be non-negative");
        }
        else
        {
            return (int)Math.pow(a,b);
        }
    }
}

