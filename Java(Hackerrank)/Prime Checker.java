

import static java.lang.System.in;
class Prime
{
    public void checkPrime(int...number)
    {
    for(int a:number)
    {
        int flag=1;
        if(a==2)
        {
            flag=0;
            
        }
        else
        {
        for(int i=2;i<a;i++)
        {
            if(a%i==0)
            {
                flag=1;
                break;
            }
            else
            {
                flag=0;
            }
        }
        }
        if(flag==0)
        {
            System.out.print(a+" ");
        }
    }
    System.out.println();
    }
}
