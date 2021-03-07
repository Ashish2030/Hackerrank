
class Solution{
static Map<Integer,List<Integer>> li=new HashMap<>();
static void levelOrder(Node root)
{
    x(root,1);
    for(List<Integer> u:li.values())
    {
      for(int e:u)
      {
          System.out.print(e+" ");
      }
    }    
}
    static Map<Integer,List<Integer>>x(Node root,int l)
{
    if(root==null)
    {
        return li;
    }
     List<Integer> p=li.getOrDefault(l,new ArrayList<>());
     p.add(root.data);
     li.put(l,p);
     x(root.left,l+1);
     x(root.right,l+1);
     return li;  
}
    
