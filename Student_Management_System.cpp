void Student_Management_System::get_Regular_Students()
{
	               sptr=new 
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
}
void Student_Management_System::get_stream_change_Students()
{
	    sptr=&st2;
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
	sptr=&st3;
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
