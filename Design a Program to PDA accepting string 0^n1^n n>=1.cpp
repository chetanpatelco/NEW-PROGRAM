#include <iostream>
using namespace std;
int main()
{
        int len,i,a,one=0;
        string n;
        cout<<"ENTER n : ";
        cin>>a;
        cout<<"ENTER STRING : ";
        cin>>n;

        len=n.length();
        for( i=0 ; i<=len ; i++ )
        {

         if(n[i]=='1')
            {
              one++;   
            }
        }

        if(one==len-one  && one==a)
        {
            cout<<"accepted";
        }
        else
        {
            cout<<"rejected";
        }

        return 0;
}
