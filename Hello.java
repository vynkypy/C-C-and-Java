abstract class Demo
{
    public int Addition(int A, int B)
    {
        return A+B;
    }
    public int Substraction(int A, int B)
    {
        return A-B;
    }
    public abstract int Multiplication(int A, int B);
}

class Vynky extends Demo
{
    public int Division(int A, int B)
    {
        return A/B;
    }
    public int Multiplication(int A, int B)
    {
        return A*B;
    }    
}

class Hello
{
    public static void main(String A[])
    {
        // Demo dobj = new Demo();
        Vynky vobj = new Vynky();
        System.out.println(vobj.Addition(10,11));
        System.out.println(vobj.Substraction(10,11));
        System.out.println(vobj.Multiplication(10,11));
        System.out.println(vobj.Division(10,11));
    
    }
}