
/*  https://www.hackerrank.com/challenges/c-tutorial-class/problem*/


#include <iostream>
#include <sstream>
using namespace std;

class Student{
    string first_name;
    int age;
    int standard;
    string last_name;
    public:
        void set_age(int x){
            age =x;
        }
        int get_age(){
            return age;
        }
        void set_first_name(string x){
            first_name =x;
        }
        string get_first_name(){
            return first_name;
        }
        void set_last_name(string x){
            last_name =x;
        }
        string get_last_name(){
            return last_name;
        }
        void set_standard(int n){
            standard =n;
        }
        int get_standard(){
            return standard;
        }
        string to_string(){
    
        stringstream result;
        char coma = ',';
        result << age << coma << first_name << coma << last_name << coma << standard;
        return result.str();
        }
    
    
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
