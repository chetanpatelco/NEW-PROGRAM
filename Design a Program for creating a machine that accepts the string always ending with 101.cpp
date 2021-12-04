#include <iostream>
using namespace std;
int main()
{
        int len,i,one=0;
        string n;
        bool flag=false ;

        cout<<"ENTER BINARY NUMBER: ";
        cin>>n;

        len=n.length();

         if(n[len-3]=='1')
            {
              if(n[len-2]=='0')
              {
                  if(n[len-1]=='1')
                  {
                      flag=true ;
                  }
              }
            }
    if(flag==true){
        cout<<"accepted";
    }
    else{
        cout<<"rejected";
    }
        return 0;
}
