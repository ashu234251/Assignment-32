/*
10. Create a C++ class for player objects with the following attributes: player no., name,
number of matches and number of goals done in each match. The number of
matches varies for each player. Write a parameterized constructor which initializes
player no., name, number of matches and creates an array for number of goals and
number of matches dynamically.
*/
#include<iostream>
using namespace std;
class Player
{
      int player_no;
      string player_name;
      int no_of_matches;
      int *goals;
    public:
      Player()
      {}
      Player(int number,string name,int matches,int *g)
      {
        player_no = number;
        player_name = name;
        no_of_matches = matches;
        goals=g;
      }
      void display()
      {
         cout<<"------------------------------------"<<endl;
         cout<<"Player Number: "<<player_no<<endl;
         cout<<"Player Name: "<<player_name<<endl;
         cout<<"Number of Matches Played: "<<no_of_matches<<endl;

         for(int i=0;i<no_of_matches;i++)
         {
            cout<<"Goals in Match "<<i+1<<": "<<goals[i]<<endl;
         }
         cout<<endl;
      }
};
int main()
{
    int n;
    cout<<"Enter Number of players: ";
    cin>>n;
    Player *p;
    p=new Player[n];

    int p_no,p_matches;
    int *goals;
    string p_name;

    for(int i=0;i<n;i++)
    {
         cout<<"Enter Player Number: ";
         cin>>p_no;
         cout<<"Enter Player Name: ";
         fflush(stdin);
         getline(cin,p_name);
         cout<<"Enter Number of Matches Played: ";
         cin>>p_matches;

         goals=new int[p_matches];

         for(int i=0;i<p_matches;i++)
         {
           cout<<"Enter Goals in Match "<<i+1<<" :";
           cin>>goals[i];
         }
         cout<<endl;

         p[i]=Player(p_no,p_name,p_matches,goals);
    }

    for(int i=0;i<n;i++)
    {
        p[i].display();
    }

    return 0;
}