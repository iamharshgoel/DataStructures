class Student{

    public:

    int rollNumber;

    private:

    int age;

    public:

    ~Student() {
        cout<< "Destructor called ! " <<endl;
    }

    //Default constructor
    /*Student(){
        cout<<"Constructor called !"<<endl;
    }*/

    //Parametrized constructor
    Student(int rollNumber){
        cout<<"Constructor 2 called !" <<endl;

        this-> rollNumber = rollNumber;
    }

    Student(int a, int r){
        cout<<"this :" <<this<<endl;
        cout<<"Constructor 3 called !"<<endl;
        this->age = a;
        this->rollNumber = r;
    }
    void display(){
        cout<<age <<" "<<rollNumber<<endl;
    }
};