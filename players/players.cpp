#include "players.h"
#include "champclass.h"
using namespace std;
players::players(string name,int pClass):cC(pClass)
{
    playerName = name;
}
void players::getcl()
{
    cC.ChampInfo();
}
