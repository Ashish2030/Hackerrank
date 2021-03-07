
    static class TestDataEmptyArray 
    {
        public static int[] get_array()
         {
             return new int[0];
        }
    }
    static class TestDataUniqueValues {
        public static int[] get_array() 
        {
              return new int[] {1,2,3,4,0};
        }
        public static int get_expected_result() 
        {
            return 4;
            
        }
    }

    static class TestDataExactlyTwoDifferentMinimums 
    {
        public static int[] get_array()
         {
            return new int[] {10,20,3,40,3};
        }

        public static int get_expected_result()
         {
            return 2;
        }
    }

