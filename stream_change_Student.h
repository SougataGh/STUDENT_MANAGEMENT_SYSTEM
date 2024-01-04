class stream_change_Student : public Regular_Student {
    string new_stream;

protected:
    void add_student();
    void show_all_student();
    void search_student();

public:
    virtual void get_Student();
};
