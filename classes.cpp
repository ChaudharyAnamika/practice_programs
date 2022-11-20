#include<iostream>

using namespace std;

class student
{
  private:
          int rollno,marks[5];
          char name[20],classe;
          float percentage;
          float calculate();
 
  public:
         void readmarks();
         void displaymarks();
};

float student::calculate()
{
  float t;
  int total=0,i;
    for(int i=0;i<5;i++)
      {
        total=total + marks[i];
       }
   t=total/5;
  return t;
}

void student::readmarks()
{
 cout<<"enter the name student"<<'\n';
 cin>>name;
 cout<<"enter the rollno";
 cin>>rollno;
   cout<<"enter the classe"<<'\n';
   cin>>classe;
    for(int i=0;i<5;i++)
     { cout<<"enter the marks of"<<i+1<<"subject";
       cin>>marks[i];
     }
    percentage=calculate();

}
void student::displaymarks()
 {
   cout<<"name of the student"<<name<<'\n';
   cout<<"roll no "<<rollno<<'\n';
   cout<<"marks"<<'\n';
   
    for(int i=0;i<5;i++)
      {
        cout<<"marks of "<<i+1<<"subject="<<marks[i]<<'\n';
      }
   cout<<"percentage"<<percentage;
 }


int  main()
{
 student st;
 st.readmarks();
 st.displaymarks(); 
 return 0;
}
   

