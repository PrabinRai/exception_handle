

# include<stdexcept>

using namespace std;

class ValuOutOfRangeException: public runtime_error
{
public:
    ValuOutOfRangeException()
    :runtime_error("Value is out of Range")
    {

    }


};
