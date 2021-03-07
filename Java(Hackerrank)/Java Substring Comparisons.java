

    public static String getSmallestAndLargest(String s, int k) {
        String smallest = "";
        String largest = "";
        String temp = "";
        smallest=largest=s.substring(0,k);
        for(int i=1;i<=s.length()-k;i++)
        {
            temp=s.substring(i,i+k);
            if (smallest.compareTo(temp) > 0)
            smallest = temp;
            if (largest.compareTo(temp) < 0)
            largest = temp;
            
        }
        // Complete the function
        // 'smallest' must be the lexicographically smallest substring of length 'k'
        // 'largest' must be the lexicographically largest substring of length 'k'
        
        return smallest + "\n" + largest;
    }

