#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Regular_Student {
protected:
    string name, roll_no, id, dob;
   virtual void add_student();
   virtual void show_all_student();
   virtual void search_student();

public:
    virtual void get_Student();
};
