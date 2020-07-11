//Question No: 1
Coding Type Question
Compute nearest larger number by interchanging digits updated. Given 2 numbers a and b find the smallest number greater than b by interchanging the digits of a and if not possible print -1.

Input format
2 numbers, a and b, separated by space.

Output format
A single number, greater than b.

If not possible, print -1.

Code constraints
1 <= a,b <= 10000000

Sample testcases
Input 1
459 500
Output 1
549
Input 2
645757 457765
Output 2
465577
//

#include<iostream>
#include<vector>
#include<algorithm>
#define MAX_SIZE 100
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int count=0;
    int v1[MAX_SIZE];
    while(n1!=0){
        v1[count]=n1%10;
        n1=n1/10;
        count++;
    }
    reverse(v1,v1+count);
    sort(v1,v1+count);
    int is_true=0;
    int number=0;
    do{
        int k=0,t=0;
        for(int i=0;i<count;i++){
            if(v1[0]==0){
                t++;
                number *=10;
                number +=v1[i];
                reverse(v1,v1+count);
                if(number>n2){
                    cout<<number;
                    is_true=1;
                    break;
                }
            }
            number *=10;
            number +=v1[i];
        }
        if(number>n2){
            cout<<number;
            is_true=1;
            break;
        }
        while(number !=0){
            v1[k++]=number%10;
            number=number/10;
        }
        reverse(v1,v1+count);
    }while(next_permutation(v1,v1+count));
    if(is_true ==0){
        cout<<"-1";
    }
}
