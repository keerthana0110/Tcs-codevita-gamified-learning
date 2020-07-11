#Question No: 2
Coding Type Question
Find the minimum number of coins required to form any value between 1 to N, both inclusive. Cumulative value of coins should not exceed N. Coin denominations are 1 Rupee, 2 Rupee and 5 Rupee.



Let's understand the problem using the following example. Consider the value of N is 13, then the minimum number of coins required to formulate any value between 1 and 13, is 6. One 5 Rupee, three 2 Rupee and two 1 Rupee coins are required to realize any value between 1 and 13. Hence this is the answer.



However, if one takes two 5 Rupee coins, one 2 rupee coins and two 1 rupee coins, then to all values between 1 and 13 are achieved. But since the cumulative value of all coins equals 14, i.e., exceeds 13, this is not the answer.

Input format
A single integer value

Output format
Four Space separated Integer Values

1st – Total Number of coins

2nd – number of 5 Rupee coins.

3rd – number of 2 Rupee coins.

4th – number of 1 Rupee coins.

Code constraints
0<n<1000

Sample testcases
Input 1
13
Output 1
6 1 3 2
#
#get the input
number = int(input())

#find the number of five rupee coins
#maximize possible number of coins, after leavinf out 4 rupees to make all possible values till 4
five = int((number-4)/5)

#find the number of one rupee coins
#of the remaining value, number of one rupee coins is 1, if the value is odd & it is 2 if the value is even
if((number-5*five) % 2) == 0:
    one=2
else:
    one=1

#find the number of two rupee coins
#the rest of the amount will be from two rupee coins
two=(number-5*five-one)//2

#print total coins, five ruppe coins, two rupee coins, one rupee coins    
print(one+two+five,five,two,one)
