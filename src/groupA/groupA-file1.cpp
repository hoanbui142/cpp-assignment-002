#include "lib1/groupA.h"
#include "groupA-internal.h"

void doTaskA()
{
    for (int i = 0; i < 3; i++)
    {
        std::cout << "doTaskA " << i + 1 << std::endl;
    }
    doSubTaskA();
}