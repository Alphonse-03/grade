import java.lang.*;
import java.util.*;
class check
{
    int []ar=new int[10];
    int n;
    int c;
    public
    void get()
    {
        System.out.println("enter the number");
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        
    }
    void convert()
    {
        c=0;
        int t=n;
        while(t>0)
        {
            c++;
            t=t/10;    
        }
        int z=c-1;
        for(int i=0;i<c;i++,z--)
        {
            if(i==0)
            {
                ar[i]= (int) (n / Math.pow(10, z));
            }
            else
            {
                 ar[i]= (int) (n / Math.pow(10, z)%10);
            }
        }
    }
    void magic()
    {
        int r=0;
        if(ar[0]!=1)
        {
            r=1;
            
        }
        
        for(int j=0;j<c;j++)
        {
             if(ar[j]!=1&&ar[j]!=4)
            {
                r=1;
                break;
            }
        }
        for(int j=0;j<c;j++)
        {
             if(ar[j]==4&&ar[j+1]==4&&ar[j+2]==4)
            {
                r=1;
               break;
            }
        }
        if(r==0)
        {
            System.out.println("yes");
        }
        else
        {
            System.out.println("no");
        }
    }
}
class alp
{
    public static void main(String args[])
    {
     check obj=new check();
     obj.get();
     obj.convert();
     obj.magic();
    }
}

