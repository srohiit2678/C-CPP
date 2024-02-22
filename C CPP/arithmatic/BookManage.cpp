#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class Book

{
  private:
  int bookid;
  char title[20];
 float price;
 public:
 Book()
  {
  bookid=0;
  strcpy(title,"no title");
  price=0;
  }
  void getBookData()
  {
   cout<<"Enter the book id title and price";
   cin>>bookid;
   cin.ignore();
   cin.getline(title,19);
   cin>>price;
  }
  void showBookData()
  {
   cout<<"\n"<<bookid<<" "<<title<<" "<<price;
  }
  int storeBook();
  void viewAllBook();
  void searchBook(char *t);
  void deleteBook(char *t);
  void updateBook(char *t);
} ;
int Book::storeBook()
 {
  ofstream fout;
  getBookData();
  if(bookid==0 && price==0)
   {
    cout<<"book data is not initialized";
    return 0;
   }
   else
   {
     fout.open("file.dat",ios::app | ios::binary);

     fout.write((char*)this,sizeof(*this));
     fout.close();
     return 1;
  }
 }
 void Book::viewAllBook()
  {

   ifstream fin;
   fin.open("file.dat",ios::in|ios::binary);
   if(!fin)
   {
    cout<<"file not found|";
   }
   else
   {
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
     {
       showBookData();
       fin.read((char*)this,sizeof(*this));
     }
     fin.close();
   }
  }
void Book::searchBook(char *t)
   {
     int count=0;
     ifstream fin;
     fin.open("file.dat",ios::in|ios::binary);
     if(!fin)
      {
       cout<<"\n file not found";
      }
      else
      {
       fin.read((char*)this,sizeof(*this));
       while(!fin.eof())
	{
	 if(!strcmp(t,title))
	  {
	   showBookData();
	   count++;
	  }
	  fin.read((char*)this,sizeof(*this));
	}
	if(count==0)
	 {
	  cout<<"\nrecord not found";
	 }
      }
      fin.close();
   }
void Book::deleteBook(char *t)
    {
     ifstream fin;
     ofstream fout;
     fin.open("file.dat",ios::in| ios::binary);
     if(!fin)
     {
      cout<<"\n file not found";
     }
     else
     {
      fout.open("tempfile.dat",ios::out| ios::binary);
      fin.read((char*)this,sizeof(*this));
      while(!fin.eof())
       {
	if(strcmp(title,t))
	 {
	  fout.write((char*)this,sizeof(*this));

	 }
	 fin.read((char*)this,sizeof(*this));

       }
       fin.close();
       fout.close();
       remove("file.dat");
       rename("tempfile.dat","file.dat");
     }
    }
void Book::updateBook(char *t)
     {
      fstream file;
      file.open("file.dat",ios::in|ios::out| ios::ate|ios::binary);
      file.seekg(0);
      file.read((char*)this,sizeof(*this));
      while(!file.eof())
       {
	if(!strcmp(t,title))
	 {
	  getBookData();
	  file.seekp(file.tellp()-sizeof(*this));
	  file.write((char*)this,sizeof(*this));
	 }
	 file.read((char*)this,sizeof(*this));

       }
     }
     int menu()
      {
       int choice;
       cout<<"\nBook Management";
       cout<<"\n1. insert book record";
       cout<<"\n2. view all record";
       cout<<"\n3. search book record";
       cout<<"\n4. delete book record";
       cout<<"\n5. update book record";
       cout<<"\n6. Exit";
       cout<<"\n Enter your choice";
       cin>>choice;
       return choice;
      }
int main()
 {
 
  Book b1;
  char title[20];
  while(1)
  {
  
    switch(menu())
     {
       case 1:
       //b1.getBookData();
       b1.storeBook();
       cout<<"\nRecord Inserted";
       break;
       case 2:
       b1.viewAllBook();
       break;
       case 3:
       cout<<"\nEnter the title of book to search";

       
       b1.searchBook("php");
       break;
       case 4:
       cout<<"\nEnter the book titke to delete record";
       cin.ignore();
       cin.getline(title,19);
       b1.deleteBook(title);
       break;
       case 5:
       cout<<"\nEnter the book title to update";
       cin.ignore();
       cin.getline(title,19);
       b1.updateBook(title);
       break;
       case 6:
       cout<<"\nThank you for using this application";
       exit(0);
       default:
       cout<<"\ninvalid choice";
     }
     
  }
  return 0;

}
