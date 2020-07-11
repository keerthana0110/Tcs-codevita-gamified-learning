//Question No: 1
Coding Type Question
          Decode the logic and print the pattern that corresponds to the given input.

Input format
Single Integer N

Output format
Output is the form of pattern

Code constraints
2<=N<=100

Sample testcases

Input 1
3
Output 1
10203010011012
**4050809
****607

Input 2
4
Output 2
1020304017018019020
**50607014015016
****809012013
******10011
//


import java.util.Scanner;
class Main{
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a=1,b=n*(n+1)+1,c=0;
        for(int i=n;i>=1;i--)
        {
            for(int j=0;j<c;j++)
            {
                System.out.print("*");
            }
            c=c+2;
            for(int j=a;j<a+i;j++)
            {
                System.out.print(j+"0");
            }
            a=a+i;
            for(int j=b-i;j<b;j++)
            {
                if(j==b-1)
                   System.out.println(j);
                else
                   System.out.print(j+"0");
            }
            b=b-i;
        }
    }
}
