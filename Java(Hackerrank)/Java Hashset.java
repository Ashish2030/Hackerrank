

HashSet<String> pairs=new HashSet<String>(t);
       for(int j=0;j<t;j++)
       {
          pairs.add("("+pair_left[j]+","+pair_right[j]+")");
          System.out.println(pairs.size());
       }
