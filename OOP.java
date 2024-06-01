class OOP
{
    public static void main(String Arg[])
    {
        Arithmatic obj1 = new Arithmatic();
        Arithmatic obj2 = new Arithmatic(21,11);

        int Ret = 0;

        Ret = obj2.Addition();
        System.out.println(Ret);
        
        Ret = obj2.Substraction();
        System.out.println(Ret);
        
    }
}

class Arithmatic
{
    public int No1;
    public int No2;

    public Arithmatic()
    {
        System.out.println("Inside Default Constructor");
        this.No1 = A;
        this.No2 = B;

    }
    
    public Arithmatic(int A, int B)
    {
        System.out.println("Inside Parameterised Constructor");
        this.No1 = A;
        this.No2 = B;

    }

    public int Addition()
    {
        int Ans = 0;
        Ans = No1 + No2;
        return Ans;
    }

    public int Substraction()
    {
        int Ans = 0;
        Ans = No1 - No2;
        return Ans;
    }
}