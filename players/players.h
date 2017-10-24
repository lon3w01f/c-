#ifndef PLAYERS_H
#define PLAYERS_H

#include <string>
#include "champclass.h"
#include "basicstats.h"
using namespace std;
class players
{
    public:
        players(string name, int pClass);
        void getcl();
    private:
        string playerName;
        ChampClass cC;
        int playerClass;
};

#endif // PLAYERS_H
