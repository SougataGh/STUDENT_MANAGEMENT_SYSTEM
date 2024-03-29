#include "Regular_Student.h"
#include "management_Student.h"
#include "Student_Management_System.h"
#include "stream_change_Student.h"
#include<string>
#include<fstream>
#include<iostream>

using namespace std;

void stream_change_Student::add_student() {
    cout << "ENTER NAME OF THE STUDENT : ";
    getline(cin, name);
    cout << "ENTER ROLL_NO OF THE STUDENT : ";
    getline(cin, roll_no);
    cout << "ENTER ID OF THE STUDENT : ";
    getline(cin, id);
    cout << "ENTER AGE OF THE STUDENT : ";
    getline(cin, dob);
    cout << "ENTER NEW STREAM OF THE STUDENT : ";
    getline(cin, new_stream);
    fstream file;
    file.open("schange_student_Data.txt", ios::out | ios::app);
    file << name << "*" << roll_no << "*" << id << "*" << dob << "*"
         << new_stream << "\n";
    cout << "\nSTUDENT ADDED SUCESSFULLY......\n";
    file.close();
}
void stream_change_Student::search_student() {
    fstream file;
    file.open("schange_student_Data.txt", ios::in);
    if (!file) {
        cout << "NO STUDENT RECORD FOUND....SORRY!.....\n";
        return;
    }
    cout << "ENTER STREAM OF THE STUDENT : ";
    string str;
    cin >> str;
    cout << "ENTER ROLL_NO OF THE STUDENT : ";
    string search_rn;
    cin >> search_rn;
    getline(cin, name, '*');
    getline(cin, roll_no, '*');
    getline(cin, id, '*');
    getline(cin, dob, '*');
    getline(cin, new_stream, '\n');
    while (!(file.eof())) {
        if (roll_no == search_rn && str == new_stream) {
            cout << "STUDENT FOUND ..........\n";
            cout << "NAME : " << name << endl;
            cout << "ROLL NO. : " << roll_no << endl;
            cout << "ID NO. : " << id << endl;
            cout << "DATE OF BIRTH : " << dob << endl;
            cout << "STREAM : " << new_stream << endl;
        }
        getline(cin, name, '*');
        getline(cin, roll_no, '*');
        getline(cin, id, '*');
        getline(cin, dob, '*');
        getline(cin, new_stream, '\n');
    }
    file.close();
}
void stream_change_Student::show_all_student() {
    fstream file;
    file.open("student_Data.txt", ios::in);
    if (!file) {
        cout << "NO STUDENT RECORD FOUND....SORRY!.....\n";
        return;
    }
    getline(cin, name, '*');
    getline(cin, roll_no, '*');
    getline(cin, id, '*');
    getline(cin, dob, '*');
    getline(cin, new_stream, '\n');
    while (!(file.eof())) {
        cout << "NAME : " << name << endl;
        cout << "ROLL NO. : " << roll_no << endl;
        cout << "ID NO. : " << id << endl;
        cout << "DATE OF BIRTH : " << dob << endl;
        cout << "NEW STREAM : " << new_stream << endl;
        cout << "-----------------------------------------\n";
        getline(cin, name, '*');
        getline(cin, roll_no, '*');
        getline(cin, id, '*');
        getline(cin, dob, '*');
        getline(cin, new_stream, '\n');
    }
    file.close();
}
