

	// Add your code here
    Difference(int[] a){
        elements = new int[a.length];
        for(int i=0; i<a.length; i++) {
            elements[i] = a[i];
        }
    }
        public  void computeDifference() {
            int max = 0;
            int min = elements[0];
            for(int i=0; i<elements.length; i++) {
                if(elements[i] > max)
                  max = elements[i];
                if(elements[i] < min)
                  min = elements[i];
            } 
               this.maximumDifference = Math.abs(max-min);
            
        }
    

