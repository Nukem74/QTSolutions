#include "issimple.h"

isSimple::isSimple()
{
    class isSimple
    {
    private:
        int _number;
    public:
        isSimple()
        {
            //empty
        }
        bool check(int n)const
        {
            int counter = 0;
            for(int i = 2; i != _number; i++)
                {
                    if(_number % i == 0)
                    {
                        counter++;
                    }
                }
            return (counter == 0);
        }
    };
}
