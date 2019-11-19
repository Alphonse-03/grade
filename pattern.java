import java.util.*;
import java.io.*;
class patt
{
    void req(int n)
    {
        int c=1;
        while(c<=n)
        {
            for(int i=1;i<=c;i++)
            {
                System.out.print(i);
            }
            System.out.println();
            c++;
        }
    }
}
class use
{
    public static void main(String alp[])
    {
     //   int a=Integer.parseInt(alp[0]);
	Scanner sc=new Scanner(System.in);
System.out.println("enter the number\n");
int a=sc.nextInt();
        patt obj= new patt();
        obj.req(a);
        
    }
}