#include<iostream>
using namespace std;

class worker
{
  private:
          
          char wname[25];
          float hrwk,wgrate,totwage;
          float calculate();
  public:
   
         void input();
         void display();
};

float worker::calculate()
{
  float t;
  t=hrwk*wgrate;
  return t;
}

void worker::input()
{
  cout<<"enter the worker name";
  cin.getline(wname,25);
  cout<<"enter the no of hours worked";
  cin>>hrwk;
  cout<<"enter the wgrate";
  cin>>wgrate;
  totwage=calculate();
}


void worker::display()
{
  cout<<"worker name "<<wname<<'\n';
  cout<<"no of hours worked"<<hrwk<<'\n';
  cout<<"wage rate"<<wgrate<<'\n';
  cout<<"total wage"<<totwage;
}

int main()
{
  worker w;
  w.input();
  w.display();

return 0;
} 
