class Demo extends Thread
{
    public void run()
    {   try
        {
            int i =0;
            String name = Thread.currentThread().getName();
            for (i=0; i<10; i++)
            {
                System.out.println("Runnig thread : "+ name+"with Value: "+i);
                Thread.sleep(1000);
            }
        }
        catch(Exception obj)
        {}
    }
}



class Multi5
{
    public static void main(String ag[])
    {
        System.out.println("Current thread is : "+ Thread.currentThread().getName());

        Demo obj1 = new Demo();
        // Demo obj2 = new Demo();

        obj1.setName("PPA");
        // obj1.setName("LB");

        obj1.start();
        // obj2.start();
        obj1.join();

        System.out.println("End of main Thread");
        
    }
}