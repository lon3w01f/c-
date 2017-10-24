#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

void dysplay(int x);

int main()
{
    deque<int> deck;
    deck.push_front(665);
    deck.push_front(1);
    deck.push_front(6625);
    deck.push_front(3);
    deck.push_front(664455);
    deck.push_back(44);
    sort(deck.begin(),deck.end());
    for_each(deck.begin(),deck.end(),dysplay);
    cout << "Hello world!" << endl;
    return 0;
}

void dysplay(int x){
    cout<<x<<" ";
}
