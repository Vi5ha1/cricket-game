#include <iostream>
#include <string>
#include <random>
#include <windows.h>
#include <time.h>
using namespace std;
int Score()
{
    int runs;
    int min = 0;
    int max = 6;
    runs = (rand() % 6) + 1;
    Sleep(1000);
    return runs;
}
int player()
{
    int a;
    int min = 1;
    int max = 3;
    a = rand() % (max - min + 1) + min;
    return a;
}
class Team
{
public:
    string TeamName;
    string Player1;
    string Player2;
    string Player3;
    int TotalRunsScored;
};
int main()
{
    Team t1;
    t1.TeamName = "Team A";
    t1.Player1 = "Sachin";
    t1.Player2 = "Rahul";
    t1.Player3 = "sewagh";
    t1.TotalRunsScored = 0;
    Team t2;
    t2.TeamName = "Team B";
    t2.Player1 = "fufu";
    t2.Player2 = "Bob";
    t2.Player3 = "Wob";
    t2.TotalRunsScored = 0;
    Sleep(1000);
    cout << "------" << t1.TeamName << " V/S" << t1.TeamName << "------\n";
    Sleep(1000);
    cout << "Its a beautiful sunny day, perfect weather for the finals.\nreally excited to watch it...\n";
    Sleep(1000);
    cout << "The game has begun\n";
    int i = 1;
    while (i < 3)
    {
        if (i = 1)
        {
            srand(time(0));
            switch (player())
            {
            case 1:
                Sleep(1000);
                cout << t1.Player1 << " is batting"
                     << "\n";
                break;
            case 2:
                Sleep(1000);
                cout << t1.Player2 << " is batting"
                     << "\n";
                break;
            case 3:
                Sleep(1000);
                cout << t1.Player3 << " is batting"
                     << "\n";
                break;
            }
            switch (player())
            {
            case 1:
                Sleep(1000);
                cout << t2.Player1 << " is bowling"
                     << "\n";
                break;
            case 2:
                Sleep(1000);
                cout << t2.Player2 << " is bowling"
                     << "\n";
                break;
            case 3:
                Sleep(1000);
                cout << t2.Player3 << " is bowling"
                     << "\n";
                break;
            }
            int score = 0;
            for (int i = 0; i < 6; i++)
            {
                int s = Score();
                cout << s << endl;
                t1.TotalRunsScored = t1.TotalRunsScored + s;
                Sleep(1000);
            }
            cout << "Team 1 total score is :" << t1.TotalRunsScored << "\n";
            Sleep(1000);
            cout << "End of innings 1. \n";
            Sleep(1000);
        }

        if (i = 2)
        {
            cout<<"Team B has sent its best batsman\n";
            srand(time(0));
            switch (player())
            {
            case 1:
                Sleep(1000);
                cout << t2.Player1 << " is batting"
                     << "\n";
                break;
            case 2:
                Sleep(1000);
                cout << t2.Player2 << " is batting"
                     << "\n";
                break;
            case 3:
                Sleep(1000);
                cout << t2.Player3 << " is batting"
                     << "\n";
                break;
            }
            switch (player())
            {
            case 1:
                Sleep(1000);
                cout << t1.Player1 << " is bowling"
                     << "\n";
                break;
            case 2:
                Sleep(1000);
                cout << t1.Player2 << " is bowling"
                     << "\n";
                break;
            case 3:
                Sleep(1000);
                cout << t1.Player3 << " is bowling"
                     << "\n";
                break;
            }

            for (int i = 0; i < 6; i++)
            {
                int s = Score();
                cout << Score() << endl;
                t2.TotalRunsScored = t2.TotalRunsScored + s;
                Sleep(1000);
            }
            cout << "Team 2 Total score is :" << t2.TotalRunsScored << "\n";
            Sleep(1000);
            cout << "End of innings 2. \n";
            Sleep(1000);
        }
        i++;
    }
    if (t1.TotalRunsScored > t2.TotalRunsScored)
    {
        cout << "Team A wins \n";
    }
    else if (t1.TotalRunsScored < t2.TotalRunsScored)
    {
        cout << "Team B wins \n";
    }
    else
    {
        cout << "It's a draw";
    }
}