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
    char name[50];
    char coachName[50];
    char homeCity[50];
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
      {cin.getline(name, 50);}
    void setCoachName()
      {cin.getline(coachName, 50);}
    void setHomeCity()
      {cin.getline(homeCity, 50);}
    void setHomeStatus(bool hs)
      {homeStatus = hs;}
    void setScore(short int s)
      {score = s;}
    void setTimeoutCount(short int toc)
      {timeoutCount = toc;}
    

    void getName() const
      {
        int count = 0;
        while(name[count] != '\0')
        {
          cout << name[count];
          count++;
        }
      }
    void getCoachName() const
      {
        int count = 0;
        while(coachName[count] != '\0')
        {
          cout << coachName[count];
          count++;
        }
      }
    void getHomeCity() const
      {
        int count = 0;
        while(homeCity[count] != '\0')
        {
          cout << homeCity[count];
          count++;
        }
      }
    bool getHomeStatus() const
      {return homeStatus;}
    short int getScore() const
      {return score;}
    short int getTimeoutCount() const
      {return timeoutCount;}
}; 
#endif