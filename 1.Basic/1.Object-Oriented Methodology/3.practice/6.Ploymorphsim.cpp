#include <iostream>

using namespace std;

class Pen
{
public:
    Pen(){ x = 0; y = 0; isUp = true;};
    void move(int x, int y){cout << "I'm in Pen" << endl; }
    void penUp(){cout << "I'm in Pen" << endl; }
    void penDown(){cout << "I'm in Pen" << endl; }
    void special();
    
protected:
    int getX(){cout << "I'm in Pen" << endl; return 0;}
    int getY(){cout << "I'm in Pen" << endl; return 0;}
private:
    int x, y;
    bool isUp;
};


void Pen::special( )
{ penDown( );  //P
  int saveX = getX(); //P
  move (3,5);  //P
  bool saveStat = isUp; //P
  //setColor(32); //X			Undefined Function
  //int c = color;// X          Undefined value
}

class ColorPen : public Pen
{
public:
    ColorPen(){color = 0;};
    void move(int x, int y){cout << "I'm in ColorPen" << endl; }
    void setColor(int color){cout << "I'm in ColorPen" << endl; }
    void CPspecial();
protected:
    int color;
};

void ColorPen::CPspecial( )
{ penDown( );  //P			Derived
  int saveX = getX( ); //P		Derived Class Can Use Protected Section
  move (3,5);  //CP		Self Class First
  //bool saveStat = isUp; //X		private
  setColor(32); //CP		Self Class
  int c = color; //CP
}

int main()
{
    Pen p = Pen();
    ColorPen cp = ColorPen();

    cout << "=====Pen====" << endl;
    p.special();
    cout << "=====ColorPen====" << endl;
    cp.CPspecial();

    return 0;
}