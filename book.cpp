#include<iostream>

using namespace std;

class book
{
  private:
          int bookno;
          char booktittle[20];
          float price;
          float totalcost(int);
  public:
         void input();
         void purchase();
};

float book::totalcost(int n)
{
  float total;
  total=n*price;
  return total;
}

void book::input()
{
  cout<<"enter the book no";
  cin>>bookno;
  cout<<"enter the booktittle";
  cin>>booktittle;
  cout<<"enter the price";
  cin>>price;
}

void book::purchase()
{
  int n;
  float t;
  cout<<"enter the no of copies to be purchase";
  cin>>n;
  t=totalcost(n);
  cout<<"total amount is"<<t;
}

int main()
{
  book b;
  b.input();
  b.purchase();
 
 return 0; 
}


