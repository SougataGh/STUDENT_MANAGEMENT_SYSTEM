int main() {
    Regular_Student st1, *sptr1 = NULL;
    stream_change_Student st2;
    management_Student st3;
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
            st1.get_Student();
            break;
        case '2':
            sptr1 = &st2;
            sptr1->get_Student();
            break;
        case '3':
            sptr1 = &st3;
            sptr1->get_Student();
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
