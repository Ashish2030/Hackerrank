
class MyCalculator {
    /*
    * Create the method long power(int, int) here.
    */
    public int power(int a,int b)throws Exception{  
    {
        if(a<0||b<0)
        {
            throw new Exception("n or p should not be negative.");
       
        }
        else if(a==0&&b==0)
        {
           throw new Exception("n and p should not be zero.");  
        }
         return (int)Math.pow((double)a,(double)b);
    }
    }
    
}

