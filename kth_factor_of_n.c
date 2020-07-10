#Question No: 2
Coding Type Question
A positive integer d is said to be a factor of another positive integer N if when N is divided by d, the remainder obtained is zero. For example, for number 12, there are 6 factors 1, 2, 3, 4, 6, 12. Every positive integer k has at least two factors, 1 and the number k itself.
Given two positive integers N and K, write a program to print the kth largest factor of N.

Input format
The first line of input contains comma separated list of positive integer pairs(N, K)

Output format
Print the kth highest factor of N. If N does not have k factors, the output should be 1.

Code constraints
1 < N < 10000000000.
1 < K < 600

Sample testcases
Input 1
12 3
Output 1
4

Input 2
65 2
Output 2
13
#

#include<stdio.h>
int main(){
    int n,k,i,c=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=n;i>=1;i--)
    {
        if((n%i)==0)
        c++;
        if(c==k)
        {
            printf("%d",i);
            break;
        }
    }
if(c!=k)
printf("1");
return 0;
}
