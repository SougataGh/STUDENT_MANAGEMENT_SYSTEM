#include "Regular_Student.h"
#include "management_Student.h"
#include "Student_Management_System.h"
#include "stream_change_Student.h"
#include<string>
#include<fstream>
#include<iostream>
int main() {
    Student_Management_System st;
    while (1) {
        system("cls");
        cout << "\t\t\t\t\t STUDENT MANAGEMENT SYSTEM \n\n\n";
        cout << "--------------------------------------\n";
        cout << "1) REGULAR STUDENT\n";
        cout << "2) STREAM CHANGED STUDENT\n";
        cout << "3) MANAGEMENT QUOTA STUDENTS\n";
        cout << "----------------------------------------\n";
        cout << endl << "ENTER YOUR CHOICE : ";
        char ch;
        cin >> ch;
        switch (ch) {
        case '1':
            st.get_Regular_Students();
            break;
        case '2':
            st.get_stream_change_Students();
            break;
        case '3':
            st.get_management_Students();
            break;
        default:
            cout << "INVALID CHOICE.....!\n";
            break;
        }
        cout << "ENTER YES IF YOU WANT TO CONTINUE ELSE ENTER NO : ";
        string str;
        cin >> str;
        if (str == "NO" || str == "No" || str == "no") {
            break;
        }
    }
}
