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
    int toGo;
    int down;
    int qtr;
    bool pos;
  public:
    Scoreboard () 
    {
      toGo = 0;
      down = 1;
      qtr = 1;
      pos = true;
    }

    void setTeam1 (Team tm1)
      {t1 = tm1;}
    void setTeam2 (Team tm2)
      {t1 = tm2;}
    void setToGo (int tg)
      {toGo = tg;}
    void setDown (int d)
      {down = d;}
    void setQtr (int q)
      {qtr = q;}
    void setPos (bool p)
      {pos = p;}

    Team getTeam1 () const
      {return t1;}
    Team getTeam2 () const
      {return t2;}
    int getToGo () const
      {return toGo;}
    int getDown () const
      {return down;}
    int getQtr () const
      {return qtr;}
    bool getPos () const
      {return pos;}
    
    //GUI DISPLAY ********************************************************************
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
      cout << cYellow << getQtr() << cPine << "|############################|";
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
    
    //MENU OPTIONS ********************************************************************
    void menu1()
    {
      cout << "\n\n ____";
      cout << "\n|" << cUnderL << "MENU" << cReset << "|______________________";
      cout << "\n|\t\t\t\t\t\t\t|";
      cout << "\n|" << cYellow << " A - Scoreboard Options   " << cReset << " |";
      cout << "\n|" << cCyan <<   " B - Home Team Options    " << cReset << " |";
      cout << "\n|" << cRed <<    " C - Visiting Team Options" << cReset << " |";
      cout << "\n|" << cPine <<   " X - End the Game         " << cReset << " |";
      cout << "\n|___________________________|";
    }

    void menu2()
    {
      cout << "\n\n _______________";
      cout << "\n|" << cUnderL << "SCOREBOARD MENU" << cReset << "|________";
      cout << "\n|\t\t\t\t\t\t |";
      cout << "\n|" << cYellow << " A - Down              " << cReset << " |";
      cout << "\n|" << cYellow << " B - To Go             " << cReset << " |";
      cout << "\n|" << cYellow << " C - Possession        " << cReset << " |";
      cout << "\n|" << cYellow << " D - Quarter           " << cReset << " |";
      cout << "\n|" << cYellow << " F - Exit              " << cReset << " |";
      cout << "\n|________________________|";
    }

    void menu3()
    {
      cout << "\n\n ______________";
      cout << "\n|" << cUnderL << "HOME TEAM MENU" << cReset << "|_________";
      cout << "\n|\t\t\t\t\t\t |";
      cout << "\n|" << cCyan << " A - Team Name         " << cReset << " |";
      cout << "\n|" << cCyan << " B - Home City         " << cReset << " |";
      cout << "\n|" << cCyan << " C - Score             " << cReset << " |";
      cout << "\n|" << cCyan << " D - Timeout Count     " << cReset << " |";
      cout << "\n|" << cCyan << " E - Coach Name        " << cReset << " |";
      cout << "\n|" << cCyan << " F - Exit              " << cReset << " |";
      cout << "\n|________________________|";
    }

    void menu4()
    {
      cout << "\n\n __________________";
      cout << "\n|" << cUnderL << "VISITING TEAM MENU" << cReset << "|_____";
      cout << "\n|\t\t\t\t\t\t |";
      cout << "\n|" << cRed << " A - Team Name         " << cReset << " |";
      cout << "\n|" << cRed << " B - Home City         " << cReset << " |";
      cout << "\n|" << cRed << " C - Score             " << cReset << " |";
      cout << "\n|" << cRed << " D - Timeout Count     " << cReset << " |";
      cout << "\n|" << cRed << " E - Coach Name        " << cReset << " |";
      cout << "\n|" << cRed << " F - Exit              " << cReset << " |";
      cout << "\n|________________________|";
    }
    
    //SCOREBOARD CONTROL ***********************************************************
    void sboardControl()
    {
      drawSboard();
      char decision = '\0';
      
      do
      {
        cout << cClear;
        drawSboard();
        menu1();

        cout << cReset << "\n\nMake a Choice: ";
        validateChar(decision);

        //SCOREBOARD OPTIONS +++++++++++++++++++++++++++++++++++++++++++++++++++++++++
        if (decision == 'a' || decision == 'A')
        {
          do
          {
            cout << cClear;
            drawSboard();
            menu2();

            cout << cReset << "\n\nMake a Choice: ";
            validateChar(decision);

            //DOWN ------------------------------------------------------------------
            if (decision == 'a' || decision == 'A')
            {
              int d = -1;

              do
              {
                cout << cClear;
                drawSboard();
                menu2();
                cout << "\n\nWhat down is it: ";
                validateInt(d);

                if (d < 5 && d > 0)
                {
                  setDown(d);
                }
                else 
                {
                  cout << cClear;
                  drawSboard();
                  menu2();
                  cout << "\n\nThere are four downs";
                  cin.ignore(10000, '\n');
                }
              }while (d >= 5 || d <= 0);   
            }

            //TOGO ------------------------------------------------------------------  
            else if (decision == 'b' || decision == 'B')
            {
              int d = -1;

              do
              {
                cout << cClear;
                drawSboard();
                menu2();
                cout << "\n\nHow many yards to go: ";
                validateInt(d);

                if (d < 100 && d > 0)
                {
                  setToGo(d);
                }
                else 
                {
                  cout << cClear;
                  drawSboard();
                  menu2();
                  cout << "\n\nThere are only 99 yards to go max";
                  cin.ignore(10000, '\n');
                }
              }while (d >= 100 || d <= 0);
            }

            //Possession ------------------------------------------------------------
            else if (decision == 'c' || decision == 'C')
            {
              int d = -1;

              do
              {
                cout << cClear;
                drawSboard();
                menu2();
                cout << "\n\nWho has the ball (1 for Home | 0 for Visitors: ";
                validateInt(d);

                if (d == 1)
                {
                  setPos(d);
                }
                else if (d == 0)
                {
                  setPos(d);
                }
                else 
                {
                  cout << cClear;
                  drawSboard();
                  menu2();
                  cout << "\n\nThere are only two teams";
                  cin.ignore(10000, '\n');
                }
              }while (d != 1 && d != 0);
            }

            //QUARTER ----------------------------------------------------------------
            else if (decision == 'd' || decision == 'D')
            {
              int d = -1;

              do
              {
                cout << cClear;
                drawSboard();
                menu2();
                cout << "\n\nWhat quarter is it: ";
                validateInt(d);

                if (d == 1)
                {
                  setQtr(d);
                }
                else if (d == 2)
                {
                  setQtr(d);
                }
                else if (d == 3)
                {
                  setQtr(d);
                }
                else if (d == 4)
                {
                  setQtr(d);
                }
                else 
                {
                  cout << cClear;
                  drawSboard();
                  menu2();
                  cout << "\n\nThere are only four quarters";
                  cin.ignore(10000, '\n');
                }
              }while (d <= 0 && d >= 5);
            }


          }while (decision != 'f' && decision != 'F');
        }

        //HOME TEAM OPTIONS +++++++++++++++++++++++++++++++++++++++++++++++++++++++++
        else if (decision == 'b' || decision == 'B')
        {
          do
          {
            cout << cClear;
            drawSboard();
            menu3();

            cout << cReset << "\n\nMake a Choice: ";
            validateChar(decision);
            
            //TEAM NAME --------------------------------------------------------------
            if (decision == 'a' || decision == 'A')
            {
                cout << cClear;
                drawSboard();
                menu3();
                cout << "\n\nWhat is the team name (No more than 15 letters): ";
                t1.setName();  
            }
            
            //CITY NAME --------------------------------------------------------------
            else if (decision == 'b' || decision == 'B')
            {
                cout << cClear;
                drawSboard();
                menu3();
                cout << "\n\nWhat is their city name (3 letter ID): ";
                t1.setHomeCity();
            }

            //TEAM SCORE -------------------------------------------------------------
            else if (decision == 'c' || decision == 'C')
            {
              int d = -1;

              do
              {
                cout << cClear;
                drawSboard();
                menu3();
                cout << "\n\nWhat is their score: ";
                validateInt(d);

                if (d >= 0 && d < 100)
                {
                  t1.setScore(d);
                }
                else 
                {
                  cout << cClear;
                  drawSboard();
                  menu3();
                  cout << "\n\n99 points max";
                  cin.ignore(10000, '\n');
                }
              }while (d < 0 || d >= 100);
            }

            //TIMEOUT COUNT ----------------------------------------------------------
            else if (decision == 'd' || decision == 'D')
            {
              int d = -1;

              do
              {
                cout << cClear;
                drawSboard();
                menu3();
                cout << "\n\nHow many timeouts left: ";
                validateInt(d);

                if (d == 0)
                {
                  t1.setTimeoutCount(d);
                }
                else if (d == 1)
                {
                  t1.setTimeoutCount(d);
                }
                else if (d == 2)
                {
                  t1.setTimeoutCount(d);
                }
                else if (d == 3)
                {
                  t1.setTimeoutCount(d);
                }
                else 
                {
                  cout << cClear;
                  drawSboard();
                  menu3();
                  cout << "\n\nThere are only three timeouts per half";
                  cin.ignore(10000, '\n');
                }
              }while (d < 0 || d >= 5);
            }

            //COACH NAME --------------------------------------------------------------
            else if (decision == 'e' || decision == 'E')
            {
                cout << cClear;
                drawSboard();
                menu3();
                cout << "\n\nWhat is their coach's name: ";
                t1.setCoachName();
            }
          }while (decision != 'f' && decision != 'F');
        }

        //VISITORS TEAM OPTIONS ++++++++++++++++++++++++++++++++++++++++++++++++++++++
        else if (decision == 'c' || decision == 'C')
        {
          do
          {
            cout << cClear;
            drawSboard();
            menu4();

            cout << cReset << "\n\nMake a Choice: ";
            validateChar(decision);
            
            //TEAM NAME --------------------------------------------------------------
            if (decision == 'a' || decision == 'A')
            {
                cout << cClear;
                drawSboard();
                menu4();
                cout << "\n\nWhat is the team name (No more than 15 letters): ";
                t2.setName();  
            }
            
            //CITY NAME --------------------------------------------------------------
            else if (decision == 'b' || decision == 'B')
            {
                cout << cClear;
                drawSboard();
                menu4();
                cout << "\n\nWhat is their city name (3 letter ID): ";
                t2.setHomeCity();
            }

            //TEAM SCORE -------------------------------------------------------------
            else if (decision == 'c' || decision == 'C')
            {
              int d = -1;

              do
              {
                cout << cClear;
                drawSboard();
                menu4();
                cout << "\n\nWhat is their score: ";
                validateInt(d);

                if (d >= 0 && d < 100)
                {
                  t2.setScore(d);
                }
                else 
                {
                  cout << cClear;
                  drawSboard();
                  menu4();
                  cout << "\n\n99 points max";
                  cin.ignore(10000, '\n');
                }
              }while (d < 0 || d >= 100);
            }

            //TIMEOUT COUNT ----------------------------------------------------------
            else if (decision == 'd' || decision == 'D')
            {
              int d = -1;

              do
              {
                cout << cClear;
                drawSboard();
                menu4();
                cout << "\n\nHow many timeouts left: ";
                validateInt(d);

                if (d == 0)
                {
                  t2.setTimeoutCount(d);
                }
                else if (d == 1)
                {
                  t2.setTimeoutCount(d);
                }
                else if (d == 2)
                {
                  t2.setTimeoutCount(d);
                }
                else if (d == 3)
                {
                  t2.setTimeoutCount(d);
                }
                else 
                {
                  cout << cClear;
                  drawSboard();
                  menu4();
                  cout << "\n\nThere are only three timeouts per half";
                  cin.ignore(10000, '\n');
                }
              }while (d < 0 || d >= 5);
            }

            //COACH NAME --------------------------------------------------------------
            else if (decision == 'e' || decision == 'E')
            {
                cout << cClear;
                drawSboard();
                menu4();
                cout << "\n\nWhat is their coach's name: ";
                t2.setCoachName();
            }
          }while (decision != 'f' && decision != 'F');
        }
      } while (decision != 'x' && decision != 'X'); //END OF GAME
      cin.clear();
    }
};

#endif