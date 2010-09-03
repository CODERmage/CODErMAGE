#include <iostream>
#include <string>
using namespace std;

struct place
{
    int cup;
    int league;
};
struct player
{
    place goal;
    place assist;
    string name;
};

int main()
{
    player p1;
    p1.name = "Gokhan";
    p1.goal.cup = 5;
    p1.goal.league = 24;
    p1.assist.cup = 2;
    p1.assist.league = 13;
    cout << "Season Stats For " << p1.name << endl << endl;
    cout << "      \t\t" <<"LEAGUE" << "\t\t" << "CUP" << endl;
    cout << "assist" << "\t\t" << p1.assist.league << "\t\t" << p1.assist.cup <<endl;
    cout << "goal" << "\t\t" << p1.goal.league << "\t\t" << p1.goal.cup <<endl;
    return 0;
}
