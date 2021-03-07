

public class Solution {
    // Write your code here.
    static Stack<Character> a=new Stack<>();
    static Queue<Character> b=new LinkedList<>();
  char  popCharacter()
    {
        return a.pop();
    }
    char  dequeueCharacter()
    {
        return b.remove();
    }
    void pushCharacter(char c)
    {
       a.push(c); 
    }
      void enqueueCharacter(char c)
    {
       b.add(c); 
    }
