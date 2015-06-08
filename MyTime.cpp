# include<iomanip>
# include <iostream>
# include <stdexcept>
# include "MyTime.h"
# include "ValueOutOfRangeException.h"


using namespace std;
MyTime::MyTime(int, int, int)
{
 setTime(hour,minute,second);
}

void MyTime::setTime(int, int, int)
{
 setHour(hour);
 setMinute(minute);
 setSecond(second);
}

void MyTime::setHour(int)
{
  if(hour>=0 && hour<=23)
  {
      this->hour=hour;
  }
  else
    {
    throw ValuOutOfRangeException();
  }
}

void MyTime::setMinute(int)
{
  if(minute>=0 && minute<=59)
  {
      this->minute=minute;
  }
  else
    {
        throw ValuOutOfRangeException();
    }
}

void MyTime::setSecond(int)
{
  if (second>=0 && second<=59)
  {
      this->second=second;
  }
  else
    {
    throw ValuOutOfRangeException();
  }
}

int MyTime::getHour()
{
  return hour;
}

int MyTime::getMinute()
{
 return minute;
}

int MyTime::getSecond()
{
 return second;
}

MyTime& MyTime::nextHour()
{
  if (++hour==24)
  {
    hour=0;
    minute= minute++;
    if(minute==59)
    {
        minute=0;
        second=second++;
        if(second==59)
        {
            second=0;
        }
    }
  }
  return *this;
}

MyTime& MyTime::nextMinute()
{
   if(++minute==60)
   {
       minute=0;
       second=second++;
       if(second==60)
       {
           second=0;
       }
   }
   return *this;
}

MyTime& MyTime::nextSecond()
{
if(++second>=0)
{
    second=0;
}
return *this;
}

string MyTime::toString()
{
 //cout<<setfill('0');

 //cout<<setw(2)<<getHour()<<":"<<setw(2)<<getMinute()<<":"<<setw(2)<<getSecond()<<endl;

 cout<<getHour()<<":"<<getMinute()<<":"<<getSecond()<<endl;

}
