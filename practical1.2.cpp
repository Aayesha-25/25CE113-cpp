#include<iostream>
#include<string.h>
using namespace std;
class Library
{
    int book_id;
    string author;
    string title;
    int copies;
public:
    void set_data(int,string,string,int );
    void add_book();
    void issue_book(int);
    void return_book(int);
    void display_book();
};
void Library::set_data(int b1,string A,string T,int C)
{
    book_id=b1;
    author=A;
    title=T;
    copies=C;
}
void Library::add_book()
{
    copies++;
}
void Library::issue_book(int)
{
    if(copies>0)
    {
        copies--;
    }
}
void Library::return_book(int)
{
    copies++;
}
void Library::display_book()
{
    cout<<"The Book ID is: "<<book_id<<endl;
    cout<<"The Book Author is: "<<author<<endl;
    cout<<"The Book Title is: "<<title<<endl;
    cout<<"The available book copies are: "<<copies<<endl;

}

int main()
{
    Library b1,b2;
    b1.set_data(1,"KJT","C++",3);
    int choice,t=0,id;
    N:
    cout << "\n\n1. Add Book";
    cout << "\n2. Issue Book";
    cout << "\n3. Return Book";
    cout << "\n4. Display All Books";
    cout << "\n5. Exit\n";
    cout << "Enter choice: ";
    cin>>choice;
    switch(choice){
    case 1:
    b1.add_book();
    t++;
   goto N;
case 2:
    cout<<"Enter book ID to issue: ";
    cin>>id;
    b1.issue_book(id);
  goto N;
case 3:
    cout << "Enter book ID to return: ";
    cin >> id;
    b1.return_book(id);
    goto N;
case 4:
    b1.display_book();
  goto N;
case 5:
    return 0;
default:
    cout << "Invalid choice!";
}
return 0;
}
