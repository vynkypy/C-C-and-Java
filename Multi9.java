class Marvellous
{
    synchronized public void Display(int No)
    {   try
        {
            int i = 0;
            for(i = 1; i <= 10; i++)
            {
                System.out.println(i*No);
                Thread.sleep(1000);

            }
        }
        catch(Exception obj)
        {}
    }   
}

class Demo extends Thread
{
    public void run()
    {
        Marvellous mobj = new Marvellous();
        mobj.Display(5);
 
    }
}

class Hello extends Thread
{
    public void run()
    {
        Marvellous mobj = new Marvellous();
        mobj.Display(2);

    }
}

class Multi9
{
    public static void main(String ag[])
    {   
        Demo dobj = new Demo();
        Hello hobj = new Hello();

        dobj.start();
        hobj.start();

    }
}