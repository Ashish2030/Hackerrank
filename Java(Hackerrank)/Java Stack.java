import java.util.*;
class Solution{
    
    public static void main(String []argh)
    {
        Scanner sc = new Scanner(System.in);
        
        while (sc.hasNext()) {
            String input=sc.next();
            isBalanced(input);
            
        }
        
    }
    static void isBalanced(String a)
    {
        int flag=0;
        Stack<Character> u=new Stack<>();
        char m[]=a.toCharArray();
        if(m.length%2!=0)
        {
            flag=1;
            System.out.println("false");
        }
        else
        {
        for(int i=0;i<m.length;i++)
        {
            if(m[i]=='(')
            {
                u.push(m[i]);
            }
            else if(m[i]=='{')
            {
               u.push(m[i]); 
            }
            else if(m[i]=='[')
            {
               u.push(m[i]); 
            }
            else
            {
                  if(m[i]==')')
                  {
                    
                      if(u.isEmpty()||u.peek()!='(')
                      {
                          flag=1;
                          System.out.println("false");
                          break; 
                      }
                      else
                      {
                         u.pop();  
                      }
                  }
                  else if(m[i]==']')
                {
                      if(u.isEmpty() ||u.peek()!='[')
                      {
                          flag=1;
                          System.out.println("false");
                          break;
                         
                      }
                      else
                      {
                         u.pop();  
                      }
                  }
                    else if(m[i]=='}')
                {
                      if(u.isEmpty() ||u.peek()!='{')
                      {
                          flag=1;
                          System.out.println("false");
                          break;
                         
                      }
                      else
                      {
                         u.pop();  
                      }
                  }
            }
            
        }
        if(flag==0)
        {
        if(u.isEmpty())
        {
            System.out.println("true");
        }
        else
        {
             System.out.println("false");
        
        }
        }
        }
    }
}



