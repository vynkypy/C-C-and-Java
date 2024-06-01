class Base
{
    public int A, B;
    public Base()
    {
        System.out.println("Inside Base Constructor");
    }
    public void Fun()
    {
        System.out.println("Inside Base Fun");
       
    }
}

class Derived extends Base              // class Derived :: public Base
{
    public Derived()
    {
        System.out.println("Inside Derived Constructor");
    }
    public void Gun()
    {
        System.out.println("Inside Derived Gun");
       
    }
}
class SingleAccessX
{
    public static void main(String Arg[])
    {
        Derived dobj = new Derived();
        Base bobj = new Base();
        Base bobj1 = new Derived();
        Derived dobj1 = new Base();
    }
}