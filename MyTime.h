
//# include<stdexcept>

# ifndef MYTIME_H
# define MYTIME_H

using namespace std;

class MyTime
{
public:
    MyTime(int,int,int);
    void setTime(int,int,int);

    void setHour(int);
    void setMinute(int);
    void setSecond(int);

    int getHour();
    int getMinute();
    int getSecond();

    MyTime &nextHour();
    MyTime &nextMinute();
    MyTime& nextSecond();

    string toString();
private:
    int hour;
    int minute;
    int second;

};
#endif
