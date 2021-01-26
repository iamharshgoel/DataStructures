class Student{

    static int totalStudents;    //total number of students present

    public:

        int rollNumber;
        int age;


        Student(){
            totalStudents++;
        }

        int getRollNumber(){
            return rollNumber;
        }

        static int getTotalStudents(){
            return totalStudents;
        }
};

int Student :: totalStudents = 0;  //initialize static data members


