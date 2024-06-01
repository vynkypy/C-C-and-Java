class Demo
{
    public int No1;
    public final int No2 = 21;

    public Demo()
    {
        No1= 11;
    }
}


class Final1
{
    public static void main(String a[])
    {
        Demo obj = new Demo();
    }
}