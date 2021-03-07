

class Add
{
    void add(int...number)
    {
        int sum=0;
        for(int y:number)
        {
            if(sum!=0)
            {
                System.out.print("+");
            }
           
                sum=sum+y;
                System.out.print(y);
            
        }
        System.out.println("="+sum);
    }
}
