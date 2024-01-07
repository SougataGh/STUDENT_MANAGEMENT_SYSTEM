class management_Student : public Regular_Student {
    class AdmissionDetails {
        string donation;
        string entrance_exam;
        string percentage;

    public:
        AdmissionDetails(string, string, string );

public:
    void add_student();
    void show_all_student();
    void search_student();
};
