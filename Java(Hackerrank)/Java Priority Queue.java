
import java.util.PriorityQueue;
import java.util.List;
class Priorities
{
     public ArrayList<Student> getStudents(List<String> events)
    { 
        PriorityQueue<Student> pq = new PriorityQueue<Student>();
        for(String i:events)
        {
            String y[]=new String[4];
            y=i.split("\\s");
            if(y.length>1)
            {
             pq.add(new Student(y[1],Double.valueOf(y[2]),Integer.valueOf(y[3])));
            }
            else
            {
                pq.poll();
            }
        }
        while(pq.size()>1)
        {
            System.out.println(pq.poll().name+" ");
        }
        return new ArrayList<Student>(pq);
    }
}
class Student implements Comparable<Student>
{
    String name;
    double cgpa;
    int id;
    Student(String a,double b,int c)
    {
        name=a;
        cgpa=b;
        id=c;
           
    }
       public String getName(){
        return name;
    }

    public int compareTo(Student s)
    {
        if(cgpa>s.cgpa)
        {
            return -1;
        }
        else if(cgpa<s.cgpa)
        {
            return 1;
        }
        else
        {
            int k= name.compareTo(s.name);
            if(k==0)
            {
               return id-s.id; 
            }
            else
            {
                return k;
            }
        }
    }
}
