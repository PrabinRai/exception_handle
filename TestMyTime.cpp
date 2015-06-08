#include <iostream>
# include "MyTime.h"
# include "ValueOutOfRangeException.h"

using namespace std;

int main()
{
int hour,minute,second;
cout<<"Enter the time(hr:min:sec):"<<endl;
while(cin>>hour>>minute>>second)
{
    try
    {
        MyTime t1(hour,minute,second);
        t1.toString();

        cout<<"\n";
        cout<<"Increament of 1 hour displays changes as:"<<endl;
        t1.nextHour();
        t1.toString();

        cout<<"\n";
        cout<<"Increament of 1 minute displays changes as:"<<endl;
        t1.nextMinute();
        t1.toString();

        cout<<"\n";
        cout<<"Increament of 1 second displays changes as:"<<endl;
        t1.nextSecond();
        t1.toString();
    }
    catch( ValueOutOfRangeException & valueOutOfRangeException )
    {
        cout<<"exception occurred:"
        <<valueOutOfRangeException.what()<<endl;
    }
    cout<<"Enter the time (hr:min:sec):"<<endl;
}
cout<<endl;
}
