#include<iostream>
using namespace std;


class Node {
   public:
      int data;
      Node *next;
};

class List
{   
    private: 
        Node *head = NULL;
    
    public:
        void  insert_begning(int value);
        void  insert_specific( int prev,int value);
        void  insert_end(int value);
        void  display_data();
};

void List::insert_begning(int value)
{ 
  Node *node = new Node();
  node->data = value;
  node->next = head;
  head = node;
}


void List::display_data()
{
   Node *temp = head;

   while(temp != NULL)
   {
    cout<< temp->data <<" ";
    temp =temp->next;
   }
}

void List::insert_end(int value)
{

  Node *node=new Node();
  node->data=value;
  node->next=NULL;

  if(head == NULL)
  {
    head = node;
    return;
  }
  Node *last = head;
  while(last->next!=NULL)
  {
    last=last->next;

  }

  last->next=node;
}

void List::insert_specific(int prev, int value)
{
  Node *node = new Node();
  node->data = value;
  node->next = NULL;

  if(head == NULL)
  {
    head = node;
    return;
  }

  Node *temp = head;
  while(temp != NULL)
  {
     if(temp->data == prev)
     {
        node->next = temp->next;
        temp->next = node;
        return;
     }
     else{
        temp = temp->next;
     }
  }
  cout << "Value does not exist";


}

int main()
{

  List list;

  int ch, value, pos;

while(1)
{
  cout<<"\n\nmain menu\n";
  cout<<"1.insertion at  begning\n";
  cout<<"2.insertion at a specific point\n";
  cout<<"3.insert at the end\n";
  cout<<"4.print the list\n";
  cout<<"enter your choice\n";
  cin>>ch;

    case 1:
        cout<<"Enter the value to be added at begning";
        cin >> value;
        list.insert_begning(value);
        break;
        
        
    case 2:
        cout<<"enter the value to be inserted at specific position";
        cin>>value;
        cout<<"value to be added after which node";
        cin>>pos;
        list.insert_specific(pos, value);
         break;
         
    case 3:
        cout<<"enter the value to be  inserted at the end";
        cin>>value;
        list.insert_end(value);
        break;
        
     case 4:
         cout<<"List is: ";
         list.display_data();
         break;
         
default: 
     cout<<"wrong choice";
}    
}    
return 0;
}
                                                                                 145,1