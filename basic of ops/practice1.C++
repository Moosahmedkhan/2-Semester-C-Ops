// #include <iostream>
// using namespace std;
// class mobile{
//     private:
//     string brand_name;
//     string model_name;
//     int price;
//     public:
//     mobile()
//     {
//         brand_name="Unknown";
//         model_name="Unknown";
//         price=0;
//     }
//     mobile (string brand_name,string model_name,int price)
//     {
//         this->brand_name=brand_name;
//         this->model_name=model_name;
//         this->price=price;
//     }
//     void display()
//     {
//         cout<<"Brand Name: "<<brand_name<<endl;
//         cout<<"Model Name: "<<model_name<<endl;
//         cout<<"Price: "<<price<<endl;
//     }
// };
// int main()
// {
//     mobile m1;
//     mobile m2("Samsung","Galaxy S21",799);
//     m1.display();
//     m2.display();
// 
#include <iostream>
using namespace std;   
class  school{
    private:
    string name;
    int roll_no;
    int marks;

    public:
    school()
    {
        name="unknown";
        roll_no=0;
        marks=0;
    }
    school(string name,int roll_no,int marks)
    {
        this->name = name;
        this->roll_no = roll_no;
        this->marks = marks ;
    }

    void input()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>roll_no;
        cout<<"Enter marks: ";
        cin>>marks;
    }
    void calculate_grade()
    {
        if (marks >= 90)
        {
            cout<<"Grade: A"<<endl;
        }
        else if (marks >= 80)
        {
            cout<<"Grade: B"<<endl;
        }
        else if (marks >= 70)
        {
            cout<<"Grade: C"<<endl;
        }
        else if (marks >= 60)
        {
            cout<<"Grade: D"<<endl;
        }
        else
        {
            cout<<"Grade: F"<<endl;
        }
    }
    void displayInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll_no<<endl;
        cout<<"Marks: "<<marks<<endl;
        calculate_grade();
    }
};
int main ()
{
    school s1;
    s1.displayInfo();
    school s2("moosa",004,90);
    s2.displayInfo();
    school s3;
    s3.input();
    s3.displayInfo();
}