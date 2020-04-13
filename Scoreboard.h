/*Dr. Tyson 1437 Programming Fundamentals II
  Chet Lockwood
  13 APRIL 2020
  IDE: Repl.it 
  Program:  Header for Class Scoreboard of Football Scoreboard
  https://repl.it/@ChetLockwood/FootballScoreboardChetLockwood
*/

#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include "Team.h"

class Scoreboard
{
  private:
    Team t1;
    Team t2;
    short int toGo;
    short int down;
  public:
    Scoreboard () 
    {
      toGo = 0;
      down = 0;
    }

    void drawSboard()
    {
     
    }

    void sboardControl()
    {

    }
};

#endif