
import java.util.*;
class Exception1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("ENter FIrst Number : ");
        int No1 = sobj.nextInt();
        
        System.out.println("ENter Second Number : ");
        int No2 = sobj.nextInt();

        float Ans = No1 / No2;

        System.out.println("Division is : "+ Ans);

        
    }
}