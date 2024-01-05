void Student_Management_System::get_Regular_Students()
{
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
					st1.add_student();break;
				case '2':
					cin.ignore();
				st1.search_student();break;
				case '3':
					cin.ignore();
				    st1.show_all_student();break;
				default:
				    cout<<"INVALID CHOICE......!";break;	
			}
}
void Student_Management_System::get_stream_change_Students()
{
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
					st2.add_student();break;
				case '2':
					cin.ignore();
					st2.show_all_student();break;
				case '3':
					cin.ignore();
				    st2.search_student();break;
				default:
				    cout<<"INVALID CHOICE......!";break;	
			}
}
void Student_Management_System::get_management_Students()
{
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
					st3.add_student();break;
				case '2':
					cin.ignore();
					st3.show_all_student();break;
				case '3':
					cin.ignore();
				    st3.search_student();break;
				default:
				    cout<<"INVALID CHOICE......!";break;	
			}
}
