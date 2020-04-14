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

    void setTeam1 (Team tm1)
      {t1 = tm1;}
    void setTeam2 (Team tm2)
      {t1 = tm2;}
    void setToGo (short int tg)
      {toGo = tg;}
    void setDown (short int d)
      {down = d;}
    void setQtr (short int q)
      {qtr = q;}
    void setPos (bool p)
      {pos = p;}

    Team getTeam1 () const
      {return t1;}
    Team getTeam2 () const
      {return t2;}
    short int getToGo () const
      {return toGo;}
    short int getDown () const
      {return down;}
    short int getQtr () const
      {return qtr;}
    bool getPos () const
      {return pos;}
    
    void drawSboard()
    {
      cout << cClear;
      //Line 1
      cout << cPine << " _____________________________________________________________\n";
      //Line 2
      cout << "|" << cCyan << "HOME" << cPine << "||";
      cout << cYellow << setw(3) << t1.getHomeCity() << cPine << "|";
      cout <<  cYellow << setw(14) << left << t1.getName() << cPine;
      cout << "|" << cOrange << "00:00:00" << cPine << "|";
      cout << cYellow << setw(14) << right << t2.getName() << cPine << "|";
      cout << cYellow << setw(3) << t2.getHomeCity();
      cout << cPine << "||" << cRed << "VISITOR" << cPine << "|";
      //Line 3
      cout << "\n" << "|#|" << cYellow << setw(2) << t1.getScore(); 
      cout << cPine << "|###################################################|";
      cout << cYellow << setw(2) << t2.getScore();
      cout << cPine << "|#|\n";
      //Line 4
      cout <<  "|###########|";
      if(pos == true)
      {
        cout << cYellow << "<>" << cPine << "|" << cReset << "POS" << cPine << "|#######################|" << cReset<< "POS" << cPine << "|  |###########|";
      }
      else
      {
        cout << "  |" << cReset << "POS" << cPine << "|#######################|" << cReset << "POS" << cPine << "|" << cYellow << "<>" << cPine << "|###########|";
      }
      //Line 5
      cout << "\n|##########################|";
      cout << cReset << "QTR" << cPine << "|";
      cout << cYellow << qtr << cPine << "|############################|";
      //Line 6
      cout << "\n|###|" << cReset << "TOL" << cPine << "|#########|";
      cout << cReset << "DOWN" << cPine << "|##############|";
      cout << cReset << "TO GO" << cPine << "|#########|";
      cout << cReset << "TOL" << cPine << "|###|";
      //Line 7
      cout << "\n|####|" << cYellow << t1.getTimeoutCount();
      cout << cPine << "|############|" << cYellow << getDown();
      cout << cPine << "|################|" << cYellow << setw(2) << getToGo();
      cout << cPine << "|############|" << cYellow << t2.getTimeoutCount();
      cout << cPine << "|####|";
      //Line 8
      cout << "\n|1111111111111111111111111111111111111111111111111111111111111|";
      //Post
      cout << cLGray << "\n\t\t\t\t\t\t [][][][][]";
      cout << "\n\t\t\t\t\t\t   [][][]";
      cout << "\n\t\t\t\t\t\t   [][][]";
      cout << "\n\t\t\t\t\t\t   [][][]";
      cout << "\n\t\t\t\t\t\t   [][][]";
      cout << "\n\t\t\t\t\t\t   [][][]";
      //Ground
      cout << cUnderL << "\n\tWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW\n";
      cout << cReset;
    }

    void sboardControl()
    {
      drawSboard();
      
      cout << "\n\n _______________";
      cout << "\n|" << cUnderL << "SCOREBOARD MENU" << cReset << "|________";
      cout << "\n|\t\t\t\t\t\t |";
      cout << "\n|" << cYellow << " A - Scoreboard Options" << cReset << " |";
      cout << "\n|" << cCyan <<   " B - Team 1 Options    " << cReset << " |";
      cout << "\n|" << cRed <<    " C - Team 2 Options    " << cReset << " |";
      cout << "\n|________________________|";

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