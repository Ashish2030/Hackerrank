

    static boolean isAnagram(String a, String b) {
        
        if(a.length()!=b.length())
        {
            return false;
        }
        a=a.toUpperCase();
        b=b.toUpperCase();
        char a1[]=a.toCharArray();
        char b1[]=b.toCharArray();
        int count1[]=new int[256];
        int count2[]=new int[256];
        for(int i=0;i<256;i++)
        {
            count1[i]=0;
            count2[i]=0;
        }
        for(int i=0;i<a.length();i++)
        {
            count1[a1[i]]++;
            count2[b1[i]]++;
        }
        for(int i=0;i<256;i++)
        {
            if(count1[i]!=count2[i])
            {
                return false;
            }
        }
        return true;
    }

