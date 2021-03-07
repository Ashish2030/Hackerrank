
    public static  Node insert(Node head,int data) 
    {
        
        if(head==null)
        {
            head=new Node(data);
        }
        else
        {
            Node temp=head;
          while(temp.next!=null)
          {
              temp=temp.next;
          }
          temp.next=new Node(data);
        }
        //Complete this method
        return head;
    }

