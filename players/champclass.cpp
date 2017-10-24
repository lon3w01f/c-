#include "champclass.h"
using namespace std;
ChampClass::ChampClass(int cl):stats(),name()
{
    switch(cl)
    {
    case 1:
        {
            name = "Mage";
            stats.setMana(8000);
            stats.setHealt(1200);
            stats.setStreath(120);
            stats.setVitality(100);
            stats.setAgility(80);
            stats.setAttackdmg(120);
            stats.setSpellpower(350);
            break;
        }
    case 2:
        {
            name = "Warrior";
            stats.setMana(0);
            stats.setHealt(8000);
            stats.setStreath(120);
            stats.setVitality(100);
            stats.setAgility(80);
            stats.setAttackdmg(120);
            stats.setSpellpower(350);
            break;
        }
    case 3:
        {
            name = "Priest";
            stats.setMana(7500);
            stats.setHealt(8000);
            stats.setStreath(120);
            stats.setVitality(100);
            stats.setAgility(80);
            stats.setAttackdmg(120);
            stats.setSpellpower(350);
            break;
        }
    }
}
void ChampClass::ChampInfo()
{
    cout<<"Class Name: "<<name<<endl;
    cout<<"Healt:      "<<stats.getHealt()<<endl;
    cout<<"Mana:       "<<stats.getMana()<<endl;
    cout<<"Streath:    "<<stats.getStreath()<<endl;
    cout<<"Vitality:   "<<stats.getVitality()<<endl;
    cout<<"Agility:    "<<stats.getAgility()<<endl;
    cout<<"Attackdmg:  "<<stats.getAttackdmg()<<endl;
    cout<<"Spellpower: "<<stats.getSpellpower()<<endl;
}
