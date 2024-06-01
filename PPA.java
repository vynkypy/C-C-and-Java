import Marvellous.Arithmatic;
import Infosystems.Mathematics;

class PPA
{
    public static void main(String A[])
    {
        Arithmatic aobj = new Arithmatic();
        Mathematics mobj = new Mathematics();

        System.out.println(aobj.Addition(10,11));
        System.out.println(aobj.Substraction(11,10));

        System.out.println(mobj.Multiplication(10,11));
        System.out.println(mobj.Division(110,11));
    }
}