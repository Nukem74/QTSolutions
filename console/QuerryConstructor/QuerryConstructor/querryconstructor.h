#ifndef QUERRYCONSTRUCTOR_H
#define QUERRYCONSTRUCTOR_H
#include <Dictionary.h>
#include <Queue.h>
class SQConstructor
{
private:
    dictionary <string> memo;
    queue <string> operate;
public:
    SQConstructor()
    {
        //empty
    }

    void expression();

    void execute();
};

void SQConstructor::expression()
{

}

void SQConstructor::execute()
{

}

#endif // QUERRYCONSTRUCTOR_H
