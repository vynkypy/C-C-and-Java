class Demo
{
    public int Addition(int A, int B)
    {
        return A+B;
    }
    public int Addition(int A, int B, int C)
    {
        return A+B+C;
    }
    public double Addition(double A, double B)
    {
        return A+B;
    }
    public void Fun(double A, int B)
    {

    }
    public void Fun(int A, double B)
    {

    }

}

class Overloading
{
    public static void main(String A[])
    {
        Demo dobj = new Demo();
        int iRet = 0;
        double dRet = 0.0;
        
        iRet = dobj.Addition(10,20);
        System.out.println(iRet);
        
        iRet = dobj.Addition(10,20,30);
        System.out.println(iRet);

        dRet = dobj.Addition(10.0,20.0);
        System.out.println(dRet);
        

    }
}