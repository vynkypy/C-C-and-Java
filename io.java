
import java.util.*;
class IO
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("ENter FIrst Number : ");
        int No1 = sobj.nextInt();
        
        System.out.println("ENter Second Number : ");
        int No2 = sobj.nextInt();

        int Ans = No1 + No2;

        System.out.println("Addition is : "+ Ans);

        
    }
}