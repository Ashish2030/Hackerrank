
public static PerformOperation isOdd() 
{
        return n -> 
        {
            if(n%2==0)
            {return false;}else{return true;}
        };
    }

    public static PerformOperation isPrime() {
        return n -> {
            if(n<2)
            {
                return false;
            }
            else if(n==2)
            {
                return true;
            }
            else
            {
                int flag=1;
                for(int i=2;i<n;i++)
                {
                    if(n%i==0)
                    {
                        flag=1;
                        break;
                    }
                    else
                    {
                        flag=0;
                    }
                }
                if(flag==1)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
        };
    }

    public static PerformOperation isPalindrome() {
        return n -> {
            String original = Integer.toString(n);
            StringBuilder r = new StringBuilder(original);
            String reversed=r.reverse().toString();
            return original.equals(reversed);
        };
    }
}

