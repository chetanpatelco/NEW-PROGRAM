#include <iostream>
using namespace std;
int main()
{
        int len,i,one=0;
        string n;

        cout<<"ENTER BINARY NUMBER: ";
        cin>>n;

        len=n.length();
        for( i=0 ; i<=len ; i++ )
        {

         if(n[i]=='1')
            {
              one++;   
            }
        }

        cout<<"Number of ones : "<<one<<endl;
        cout<<"Number of zeros : "<<len-one;

        return 0;
}
