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
    short int qtr;
    bool pos;
  public:
    Scoreboard () 
    {
      toGo = 0;
      down = 0;
      qtr = 1;
      pos = true;
    }

    void setToGo (short int tg)
      {toGo = tg;}
    void setDown (short int d)
      {down = d;}
    void setQtr (short int q)
      {qtr = q;}
    void setPos (bool p)
      {pos = p;}

    short int getToGo () const
      {return toGo;}
    short int getDown () const
      {return down;}
    short int getQtr () const
      {return qtr;}
    

    void drawSboard()
    {
      cout << cClear;
      //Line 1
      cout << cCyan << " _____________________________________________________________\n";
      //Line 2
      cout << "|" << cGreen << "HOME" << cCyan << "||";
      cout << cYellow << setw(3) << t1.getHomeCity() << cCyan << "|";
      cout <<  cYellow << setw(14) << left << t1.getName() << cCyan;
      cout << "|00:00:00|";
      cout << cYellow << setw(14) << right << t2.getName() << cCyan << "|";
      cout << cYellow << setw(3) << t2.getHomeCity();
      cout << cCyan << "||" << cRed << "VISITOR" << cCyan << "|";
      //Line 3
      cout << "\n" << "|#|" << cYellow << setw(2) << t1.getScore(); 
      cout << cCyan << "|###################################################|";
      cout << cYellow << setw(2) << t2.getScore();
      cout << cCyan << "|#|\n";
      //Line 4
      cout <<  "|###########|";
      if(pos == true)
      {
        cout << cYellow << "<>" << cCyan << "|" << cReset << "POS" << cCyan << "|#######################|" << cReset<< "POS" << cCyan << "|  |###########|";
      }
      else
      {
        cout << "  |" << cReset << "POS" << cCyan << "|#######################|" << cReset << "POS" <<        cCyan << "|" << cYellow << "<>" << cCyan << "|###########|";
      }
      //Line 5
      
    }

    void sboardControl()
    {
      drawSboard();
      
      t1.setName();
      cin.clear();
      t1.setHomeCity();

      drawSboard();

      t2.setName();
      cin.clear();
      t2.setHomeCity();
    }
};

#endif