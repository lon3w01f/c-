#ifndef BASICSTATS_H
#define BASICSTATS_H


class BasicStats
{
    public:
        BasicStats();
        int getHealt();
        int getMana();
        int getStreath();
        int getVitality();
        int getAgility();
        int getSpellpower();
        int getAttackdmg();
        void setAgility(int ag);
        void setHealt(int h);
        void setMana(int m);
        void setStreath(int st);
        void setVitality(int v);
        void setSpellpower(int sp);
        void setAttackdmg(int ad);
    protected:

    private:
        int healt;
        int mana;
        int streath;
        int vitality;
        int agility;
        int spellpower;
        int attackdmg;
};

#endif // BASICSTATS_H
