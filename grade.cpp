
#include<iostream>

using namespace std;

class student
{
  private:
          char name[20];int roll;int total;
          char grade;
 
  public:
  
         void readdata();
         void computegrade();
         void display();
};

void student::readdata()
{
  cout<<"enter the name"<<'\n';
  cin>>name;
  cout<<"enter the roll no"<<'\n';
  cin>>roll;
  cout<<"enter the total marks"<<'\n';
  cin>>total;
}
 
void student::computegrade()
{
  if(total>=480)
   grade='A';

  else
      if(total>=360)
      grade='B';

  else
      if(total>=300)
      grade='c';

  else
     if(total>=210)
     grade='D';
  
  else
     grade='E';
}

void student::display()
{
  computegrade();
  cout<<"name"<<name<<'\n';
  cout<<"rollno"<<roll<<'\n';
  cout<<"total marks"<<total<<'\n';
  cout<<"grade"<<grade<<'\n';
}

int main()
{
  student st[50];
  int n;
  cout<<"enter the no of students";
  cin>>n;
  for(int i=0;i<n;i++)
  {
    st[i].readdata();
  }
  
  for(int i=0;i<n;i++)
  st[i].display();

return 0;
}

    

   
