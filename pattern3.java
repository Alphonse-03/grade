import java.io.*;
import java .util.*;
class patt
{
    void req()
    {
        int i,k;
        System.out.println("enter the number");
        Scanner alp=new Scanner(System.in);
        int n=alp.nextInt();
        for(i=1;i<=n;i++)
        {
            if(i==1||i==n)
            {
                for(int j=1;j<=n;j++)
                {System.out.print("*");}
                System.out.println();
            }
            else
            {
                for(k=1;k<=n;k++)
                {
                    if(k==1||k==n)
                    {
                        System.out.print("*");
                    }
                    else{
                    System.out.print(" ");
                    }
                } 
                System.out.println(); 
            }
        }
    }
}
class use3
{
    public static void main (String alp[])
    {
        patt obj=new patt();
        obj.req();

    }
}