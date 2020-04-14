/*Dr. Tyson 1437 Programming Fundamentals II
  Chet Lockwood
  13 APRIL 2020
  IDE: Repl.it 
  Program:  Header for Class Team of Football Scoreboard
  https://repl.it/@ChetLockwood/FootballScoreboardChetLockwood
*/

#ifndef TEAM_H
#define TEAM_H

#include "Input_Validation_Extended.h"

class Team 
{
  private:
    char name[15] = {'X','X','X','X','X','X','X','X','X','X','X','X','X','X','\0'};
    char coachName[50];
    char homeCity[4] = {'X','X','X','\0'};
    bool homeStatus;
    short int score;
    short int timeoutCount;
  public:
    Team()
    {
      homeStatus = true;
      score = 0;
      timeoutCount = 0;
    }

    void setName()
      {cin.getline(name, 15);}
    void setCoachName()
      {cin.getline(coachName, 50);}
    void setHomeCity()
      {cin.getline(homeCity, 4);}
    void setHomeStatus(bool hs)
      {homeStatus = hs;}
    void setScore(short int s)
      {score = s;}
    void setTimeoutCount(short int toc)
      {timeoutCount = toc;}
    
    string getName() const
      {
        string n = name;
        return n;
      }
    string getCoachName() const
      {
        string cn = coachName;
        return cn;
      }   
    string getHomeCity() const
      {
        string hc = homeCity;
        return hc;
      }
    bool getHomeStatus() const
      {return homeStatus;}
    short int getScore() const
      {return score;}
    short int getTimeoutCount() const
      {return timeoutCount;}
}; 
#endif