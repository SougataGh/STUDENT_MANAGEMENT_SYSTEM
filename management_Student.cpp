 management_Student::AdmissionDetails(string donation, string entrance_exam,
                         string percentage) {
            this->donation = donation;
            this->entrance_exam = entrance_exam;
            this->percentage = percentage;
 }

void management_Student::add_student() {
    string str1, str2, str3;
    cout << "ENTER NAME OF THE STUDENT : ";
    getline(cin, name);
    cout << "ENTER ROLL_NO OF THE STUDENT : ";
    getline(cin, roll_no);
    cout << "ENTER ID OF THE STUDENT : ";
    getline(cin, id);
    cout << "ENTER AGE OF THE STUDENT : ";
    getline(cin, dob);
    cout << "ENTER DONATION GIVEN BY THE STUDENT : ";
    cin >> str1;
    cout << "ENTER THE ENTRANCE EXAM GIVEN BY THE STUDENT : ";
    cin >> str2;
    cout << "ENTER THE PERCENTAGE OF THE STUDENT AT 12TH GRADE : ";
    cin >> str3;
    AdmissionDetails Ad(str1, str2, str3);
    fstream file;
    file.open("mngmnt_student_Data.txt", ios::out | ios::app);
    file << name << "*" << roll_no << "*" << id << "*" << dob << "*"
         << "*" << str1 << "*" << str2 << "*" << str3 << "\n";
    cout << "\nSTUDENT ADDED SUCESSFULLY......\n";
    file.close();
}
void management_Student::show_all_student() {
    fstream file;
    file.open("mngmnt_student_Data.txt", ios::in);
    if (!file) {
        cout << "NO STUDENT RECORD FOUND....SORRY!.....\n";
        return;
    }
    getline(cin, name, '*');
    getline(cin, roll_no, '*');
    getline(cin, id, '*');
    getline(cin, dob, '\n');
    while (!(file.eof())) {
        cout << "NAME : " << name << endl;
        cout << "ROLL NO. : " << roll_no << endl;
        cout << "ID NO. : " << id << endl;
        cout << "DATE OF BIRTH : " << dob << endl;
        cout << "-----------------------------------------\n";
        getline(cin, name, '*');
        getline(cin, roll_no, '*');
        getline(cin, id, '*');
        getline(cin, dob, '\n');
    }
    file.close();
}
void management_Student::search_student() {
    fstream file;
    file.open("mngmnt_student_Data.txt", ios::in);
    if (!file) {
        cout << "NO STUDENT RECORD FOUND....SORRY!.....\n";
        return;
    }
    cout << "ENTER ROLL_NO OF THE STUDENT : ";
    string search_rn;
    cin >> search_rn;
    getline(cin, name, '*');
    getline(cin, roll_no, '*');
    getline(cin, id, '*');
    getline(cin, dob, '\n');
    while (!(file.eof())) {
        if (roll_no == search_rn) {
            cout << "STUDENT FOUND ..........\n";
            cout << "NAME : " << name << endl;
            cout << "ROLL NO. : " << roll_no << endl;
            cout << "ID NO. : " << id << endl;
            cout << "DATE OF BIRTH : " << dob << endl;
        }
        getline(cin, name, '*');
        getline(cin, roll_no, '*');
        getline(cin, id, '*');
        getline(cin, dob, '\n');
    }
    file.close();
}
