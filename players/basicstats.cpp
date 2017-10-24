#include "basicstats.h"

BasicStats::BasicStats()
{
}
int BasicStats::getHealt()
       {
            return healt;
       }
int BasicStats::getMana()
        {
            return mana;
        }
int BasicStats::getStreath()
        {
            return streath;
        }
int BasicStats::getVitality()
        {
            return vitality;
        }
int BasicStats::getAgility()
        {
            return agility;
        }
int BasicStats::getSpellpower()
        {
            return spellpower;
        }
int BasicStats::getAttackdmg()
        {
            return attackdmg;
        }
void BasicStats::setHealt(int h)
        {
            healt=h;
        }
void BasicStats::setMana(int m)
        {
            mana = m;
        }
void BasicStats::setStreath(int st)
        {
            streath = st;
        }
void BasicStats::setVitality(int v)
        {
            vitality = v;
        }
void BasicStats::setSpellpower(int sp)
        {
            spellpower = sp;
        }
void BasicStats::setAttackdmg(int ad)
        {
            attackdmg  = ad;
        }
void BasicStats::setAgility(int ag)
{
    agility = ag;
}

