#include "Regular_Student.h"
#include<string>
#include<fstream>
#include<iostream>

void Regular_Student::add_student() {
    cout << "ENTER NAME OF THE STUDENT : ";
    getline(cin, name);
    cout << "ENTER ROLL_NO OF THE STUDENT : ";
    getline(cin, roll_no);
    cout << "ENTER ID OF THE STUDENT : ";
    getline(cin, id);
    cout << "ENTER AGE OF THE STUDENT : ";
    getline(cin, dob);
    fstream file;
    file.open("student_Data.txt", ios::out | ios::app);
    file << name << "*" << roll_no << "*" << id << "*" << dob << "\n";
    cout << "\nSTUDENT ADDED SUCESSFULLY......\n";
    file.close();
}
void Regular_Student::show_all_student() {
    fstream file;
    file.open("student_Data.txt", ios::in);
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
void Regular_Student::search_student() {
    fstream file;
    file.open("student_Data.txt", ios::in);
    if (!file) {
        cout << "NO STUDENT RECORD FOUND....SORRY!.....\n";
        return;
    }
    cout << "ENTER STUDENTS ROLL NO : ";
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
Regular_Student::void get_Student() {
    cout << "------------------------------------\n";
    cout << "1) ADD A STUDENT\n";
    cout << "2) VIEW ALL STUDENTS\n";
    cout << "3) SEARCH FOR A STUDENT\n";
    cout << "------------------------------------\n";
    char ch;
    cout << "\nENTER YOUR CHOICE : ";
    cin >> ch;
    switch (ch) {
    case '1':
        cin.ignore();
        add_student();
        break;
    case '2':
        cin.ignore();
        show_all_student();
        break;
    case '3':
        cin.ignore();
        search_student();
        break;
    default:
        cout << "INVALID CHOICE......!";
        break;
    }
}
