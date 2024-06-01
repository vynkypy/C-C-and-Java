class ArrayDemoLoops
{
    public static void main(String Arg[])
    {
        int Arr[] = {10,20,30,40,50};
        int i =0;

        for (i=0; i<Arr.length; i++)
        {
            System.out.println(Arr[i]);

        }
        
        i = 0;
        while(i<Arr.length)
        {
            System.out.println(Arr[i]);
            i++;          
        }
        // int Arr[] = new int[] {10,20,30,40,50};

        // System.out.println("Number of elements in array are : "+ Arr.length);

        // System.out.println(Arr[0]);
        // System.out.println(Arr[1]);
        // System.out.println(Arr[2]);
        // System.out.println(Arr[3]);
        // System.out.println(Arr[4]);
    }
}