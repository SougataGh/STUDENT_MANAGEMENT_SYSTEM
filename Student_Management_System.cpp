
#include "Regular_Student.h"
#include "management_Student.h"
#include "Student_Management_System.h"
#include "stream_change_Student.h"
#include<iostream>
using namespace std;
Student_Management_System::Student_Management_System()
{
       sptr=NULL;
}
Student_Management_System:: ~Student_Management_System()
{
     delete sptr;
     sptr=NULL;
}
void Student_Management_System::get_Regular_Students()
{
	               sptr=new Regular_Student();
	               cout<<"------------------------------------\n";
			cout<<"1) ADD A STUDENT\n";
			cout<<"2) VIEW ALL STUDENTS\n";
			cout<<"3) SEARCH FOR A STUDENT\n";
			cout<<"------------------------------------\n";
			char ch;
			cout<<"\nENTER YOUR CHOICE : ";
			cin>>ch;
			switch(ch){
				case '1':
					cin.ignore();
					sptr->add_student();
					
					break;
				case '2':
					cin.ignore();
				        sptr->search_student();
					sptr=NULL;
					break;
				case '3':
					cin.ignore();
				       sptr->show_all_student();
					sptr=NULL;
					break;
				default:
				    cout<<"INVALID CHOICE......!";break;	
			}
	          delete sptr;
	          sptr=NULL;
}
void Student_Management_System::get_stream_change_Students()
{
	                sptr=new stream_change_Student();
	                cout<<"------------------------------------\n";
			cout<<"1) ADD A STUDENT\n";
			cout<<"2) VIEW ALL STUDENTS\n";
			cout<<"3) SEARCH FOR A STUDENT\n";
			cout<<"------------------------------------\n";
			char ch;
			cout<<"\nENTER YOUR CHOICE : ";
			cin>>ch;
			switch(ch){
				case '1':
					cin.ignore();
					sptr->add_student();
					sptr=NULL;
					break;
				case '2':
					cin.ignore();
					sptr->show_all_student();
					sptr=NULL;
					break;
				case '3':
					cin.ignore();
				    sptr->search_student();
					sptr=NULL;
					break;
				default:
				    cout<<"INVALID CHOICE......!";break;	
			}
}
void Student_Management_System::get_management_Students()
{
	               sptr=new management_Student();
	                cout<<"------------------------------------\n";
			cout<<"1) ADD A STUDENT\n";
			cout<<"2) VIEW ALL STUDENTS\n";
			cout<<"3) SEARCH FOR A STUDENT\n";
			cout<<"------------------------------------\n";
			char ch;
			cout<<"\nENTER YOUR CHOICE : ";
			cin>>ch;
			switch(ch){
				case '1':
					cin.ignore();
					sptr->add_student();
					sptr=NULL;
					break;
				case '2':
					cin.ignore();
					sptr->show_all_student();
					sptr=NULL;
					break;
				case '3':
					cin.ignore();
				    sptr->search_student();
					sptr=NULL;
					break;
				default:
				    cout<<"INVALID CHOICE......!";break;	
			}
}
