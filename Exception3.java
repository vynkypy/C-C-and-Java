
import java.util.*;
class Exception1
{
    public static void main(String a[])
    {
        try
        {
            System.out.println("Inside Try Block");

            Scanner sobj = new Scanner(System.in);

            int Arr[] = {10,20,30,40,50};

            System.out.println("ENter index Number : ");
            int i = sobj.nextInt();

            System.out.println(Arr[i]);
        }
        catch(ArrayIndexOutOfBoundsException obj)
        {
            System.out.println("Inside Catch Block");

        }
        finally
        {
            System.out.println("Inside Finally Block");

        }
        System.out.println("End of code ");


        
    }
}