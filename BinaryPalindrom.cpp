#include<iostream>
using namespace std;
int main ()
{ 
    long a,b,c,d,e,f,flag=1;
    cin>>b;
    for(a=0;a<b;a++)
    {
        cin>>c;
            int i = 0; 
    while (n > 0) { 
 
        binaryNum[i] = n % 2;
        binaryNumrev[i] = n % 2;
        n = n / 2; 
        i++; 
    } 
    int k, j,temp;
    j=i;
    for (k = 0; k < j; k++,j--)
    {
        temp = binaryNumrev[k];
        binaryNumrev[k] = binaryNumrev[j];
        binaryNumrev[j] = temp;
    }
       for(int h=0;h<i;h++)
       if(binaryNum!=binaryNumrev)
           flag=0;
              if(flag==1)   
        cout<<"palindrome"<<endl;  
    else 
       cout<<"not palindrome"<<endl; 
    }
}