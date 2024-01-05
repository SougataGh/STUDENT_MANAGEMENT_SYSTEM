class management_Student : public Regular_Student {
    class AdmissionDetails {
        string donation;
        string entrance_exam;
        string percentage;

    public:
        AdmissionDetails(string donation, string entrance_exam,
                         string percentage) {
            this->donation = donation;
            this->entrance_exam = entrance_exam;
            this->percentage = percentage;
        }
    };

public:
    void add_student();
    void show_all_student();
    void search_student();
};
