#Design a program for accepting decimal number divisible by 2
#include <iostream>
using namespace std;
int main()
{
        int n;
        cout<<"ENTER NUMBER: ";
        cin>>n;

    if(n%2==0){
        cout<<"accepted";
    }
    else{
        cout<<"rejected";
    }
        return 0;
}
