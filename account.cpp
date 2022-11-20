#include<iostream>
#include<stdlib.h>

using namespace std;
char con;

class account
{
  char n[20],act;
  int accno;
  float balance;
 
public:
       void accept();
       void deposit(float);
       void withdraw(float);
       void display();
       int getacno()
        {
         return accno;
        }
};

void account::accept()
{
  cout<<"name";
  cin>>n;
  cout<<"enter the account no";
  cin>>accno;
  int cc=1;
 
 while(cc)
   {cout<<"enter the account type-s for saving & c for current";
    cin>>act;
     if(toupper(act)=='s' ::toupper(act)=='c')
        break;
     else
     cout<<"enter s or c only";
   }
  cout<<"enter the current balance";
  cin>>balance;
}

void account::deposit(float amt)
{
  balance=balance+amt;
  cout<<"amount is deposited";
}

void account::withdraw(float amt)
{
  if((balance-amt)>=1000)
    {
     balance=balance-amt;
     cout<<"amount withdrawn";
    }
  else
   {
    cout<<"minimum balance has to be rs1000"<<'\n';
    cout<<"you can withdraw only "<<balance-1000<<"rs";
    cout<<"press any key to continue";
    cin>>con;

   }
}

void account::display()
{
  cout<<"account no"<<accno.<<'\n'
  cout<<"customers name"<<n<<'\n';
  cout<<"account type"<<act<<'\n';
  cout<<"balance"<<balance<<'\n';
}

int main()
{
  account acc[10];
  float a;
  int ch,z=1,ac,r,temp=0;
  for(int i=0;i<10;i++)
  {
    acc[i].accept();
  }

do{
   cout<<'\t'<<'\t'"main menu"<<'\n';
   cout<<"1-deposit"<<'\n';
   cout<<"2-withdraw"<<'\n';
   cout<<"3-display"<<'\n';
   cout<<"4-exit"<<'\n';
   cout <<"enter your choice ";
   cin>>ch;
switch(ch)
{
  case 1:
   {
     cout<<"enter the amount to be deposited";
     cin>>ac;
     cout<<"enter the amount to be deposited";
     cin>>a;
     for(i=0;i<10;i++)
      {
       r=acc[i].getacno();
       if(r==ac)
       {
         acc[i].deposit(a);
        temp=1;
        break;
      }
    }
  if (temp==0)
   {
    cout<<"accont no. is not present";
    break;
   }
  }
 
  case 2:
  {
   cout<<"enter the account no";
   cin>>acc;
   cout<<"enter the amount to be withdrawn";
   cin>>a;
   for(i=0;i<10;i++)
   {
     r=acc[i].getacno();
     if(r==ac)
     {
       acc[i].withdraw(float);
       temp=1;
       break;
     }
   }
  
  if(temp==0)
 {
   cout<<"account no is not present";
   break;
 }

 }
 case 3:
 {
  cout<<"enter the account no"<<ac;
   for(int i=0;i<10;i++)
   {
     r=acc[i].getacno();
     if(r==ac)
     {
      acc[i].display();     
      temp=1;
     }
   break;
 }
 
 if(temp==0)
{
  cout<<"account no not found";
  break;
}
}

case 4:

 exit(0);
 default:
 cout<<"wrong choice";

}
}while(z==1);

 return 0;
} 
