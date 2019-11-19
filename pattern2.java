import java.util.*;
import java .io.*;
class patt
{
    void req()
    {
        char ch;
        int i,j;
        //ch=65;
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for( i=1, ch=65;i<=5;i++)
        {
            for(j=1;j<=i;j++,ch++)
            {
                System.out.print(ch);
            }
            System.out.println();
            ch=65;
        }

    }
}
class use2
{
    public static void main(String alp[])
    {
        patt obj=new patt();
        obj.req();
    }
}