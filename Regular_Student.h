#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Regular_Student {
protected:
    string name, roll_no, id, dob;
public:
   virtual void add_student();
   virtual void show_all_student();
   virtual void search_student();
};
