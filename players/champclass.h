#ifndef CHAMPCLASS_H
#define CHAMPCLASS_H

#include <iostream>
#include "basicstats.h"
#include <string>
using namespace std;
class ChampClass
{
    public:
        ChampClass(int cl);
        void ChampInfo();
    private:
        string name;
        BasicStats stats;
};

#endif // CHAMPCLASS_H
