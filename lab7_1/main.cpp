    //singelton
    #include <iostream>
    using namespace std;

    class Printer_Singelton{
    private:
        Printer_Singelton(){}
        static Printer_Singelton* instance;
    public:
    static Printer_Singelton* getInstance(){
        if(instance == nullptr){
            instance = new Printer_Singelton();
        } return instance;
        }

        void Print(string text){
            cout << text;
        }
    
    };
    Printer_Singelton* Printer_Singelton::instance = nullptr;

    class Student{
    private:
        string name;
    public:
    Student(string name){
        this->name = name;
    }
    void printHomework(){
        Printer_Singelton::getInstance()->Print(name + " printed Homework.");
        
    }
    };

int main(){
    Student s("Alex");
    s.printHomework();

       return 0;
}


