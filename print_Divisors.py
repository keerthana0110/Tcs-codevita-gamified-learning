#Question No: 2
Coding Type Question
Given a number ‘N’, find all the possible divisors and print them in increasing order.

Input format
The first line of input contains an integer 'N' denoting the number.

Output format
Print a line containing all the divisors in increasing order separated by space.

Code constraints
1 <= N <= 108

Sample testcases
Input 1
10

Output 1
1 2 5 10 

Input 2
20

Output 2
1 2 4 5 10 20 
#

import math
def printDivisors(n):
    list=[]
    for i in range(1,int(math.sqrt(n)+1)):
        if(n%i==0):
            if(n/i==i):
                print(i,end=" ")
            else:
                print(i,end=" ")
                list.append(int(n/i))
    for i in list[::-1]:
        print(i,end=" ")
n=int(input())
printDivisors(n)
