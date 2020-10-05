#include<iostream>
#include<algorithm>
#include<math.h>
#include<stack>
using namespace std;

int main()
{
    int size;
    cin>>size;
    for(long I=0;I<size;I++)
    {
        string s;
        cin>>s;
        int co=0;
        int det=0,i,j;
        for(i=0;i<s.length();i++)
        {   
            if(s[i]=='i'||s[i]=='I')
            {
                for(j=det+1;j<s.length();j++)
                {
                    if(s[j]=='O'&&s[i]=='I')
                    {
                        co++;
                        det=j;
                        break;
                    }
                    if(s[j]=='o'||s[j]=='O')
                    {
                    det=j;
                    break;
                    }
                }
            }
        }
    cout<<"Case #"<<I+1<<": "<<co<<endl;
    }
}