#include<bits/stdc++.h>
#include<string>
using namespace std;


class newst

{

    string name;
    float credit;
    string semester;
    float cgpa;
    int roll;
    int age;
    string dept;
public:

//    map<int,string>n;
//    friend class registration;
//    friend class course;
//   friend class all;





    void input()
    {
        ofstream infile;
        infile.open("user.txt",ios::app);
        ofstream infile2;
        infile2.open("roll.txt",ios::app);

        getchar();
        cout<<"enter your Nick name: string"<<endl;
        getline(cin,name);
        infile<<name<<endl;

        cout<<"Enter your roll int "<<endl;
        cin>>roll;
        infile<<roll<<endl;
        infile2<<roll<<endl;


        cout<<"Enter your age int"<<endl;
        cin>>age;
        infile<<age<<endl;


        cout<<"Enter your Department string"<<endl;
        cin.ignore();
        getline(cin,dept);
        infile<<dept<<endl;


        cout<<"Enter your semester string"<<endl;

        getline(cin,semester);
        infile<<semester<<endl;


        cout<<"Enter your previous credit int"<<endl;
        cin>>credit;
        infile<<credit<<endl;


        cout<<"Enter your cgpa float"<<endl;
        cin>>cgpa;
        cin.ignore();
        infile<<cgpa<<endl;

        infile.close();
        infile2.close();

    }

};



class registration
{
    int roll;
    string dept;

public:

    void reg()
    {
        ofstream file;
        file.open("reg.txt",ios::app);

        ifstream file2;
        file2.open("roll.txt");

        int u=0;
        int roll2;
        cout<<"int your roll number"<<endl;
        cin>>roll2;

        while (file2>>roll)
        {
            if(roll2==roll)
            {
                u=1;
                int option;
                int seme;
                int year;
                int x=1;
                int y=1;
                int z=1;
                int m=1;
                int n=1;

                cout<<"which Department(choose option (1-4))\n1.ECE\n2.CSE\n3.EEE\n4.Civil"<<endl;
                cin>>option;


                file<<roll<<endl;

                if(option==1)
                {
                    x=0;
                    file<<"ECE"<<endl;
                }
                else if(option==2)
                {
                    x=0;
                    file<<"CSE"<<endl;
                }
                else if (option==3)
                {
                    x=0;
                    file<<"EEE"<<endl;
                }
                else if (option==4)
                {
                    x=0;
                    file<<"Civil"<<endl;
                }
                else
                {
                    n=0;
                    cout<<"wrong Department"<<endl;
                }
                if(n==1)
                {
                    cout<<"which year(1-4)"<<endl;
                    cin>>year;
                    if(x==0)
                    {
                        if(year==1)
                        {
                            y=0;
                            file<<"1st Year"<<endl;
                        }
                        else if(year==2)
                        {
                            y=0;
                            file<<"2nd Year"<<endl;
                        }
                        else if(year==3)
                        {
                            y=0;
                            file<<"3rd Year"<<endl;
                        }
                        else if(year==4)
                        {
                            y=0;
                            file<<"4th Year"<<endl;
                        }
                        else
                        {
                            m=0;
                            cout<<"wrong Year"<<endl;
                        }
                    }



                    if(x==0&&y==0 && m==1 && n==1)
                    {
                        cout<<"semester\n1.odd\n2.even"<<endl;
                        cin>>seme;
                        if(seme==1)
                        {
                            z=0;
                            file<<"odd semester"<<endl;
                        }
                        else if(seme==2)
                        {
                            z=0;
                            file<<"even semester"<<endl;
                        }
                        else
                            cout<<"wrong semster"<<endl;
                    }
                }
                if(z==0)
                {
                    cout<<"you have registered successfully"<<endl;
                    file.close();
                }
                else
                {
                    cout<<"you can not registered"<<endl;
                    file.close();
                }
            }



        }
        file2.close();

        if(u==0)
        {
            cout<<"your roll does not exist"<<endl;
        }

    }
};




class result
{
private:
    string name;
    string roll;
    string age;
    string dept;
    string semester;
    string credit;
    string cgpa;
public:


    friend class all;
    void a()
    {
        string a=name;
        string b=roll;
        string c=age;
        string d=dept;
        string e=semester;
        string f=credit;
        string g=cgpa;
    }
    friend void detail(result&);

    void result1 ()

    {
        ifstream outfile;
        outfile.open("user.txt");


        cout<<"enter your roll"<<endl;
        string roll2;
        cin>>roll2;
        int u=0;




        while (outfile)
        {



            getline(outfile,name);
            getline(outfile,roll);
            getline(outfile,age);
            getline(outfile,dept);
            getline(outfile,semester);
            getline(outfile,credit);
            getline(outfile,cgpa);


            if(roll2==roll)
            {
                u=1;


                cout<<"          Student Details          "<<endl;
                cout<<"Name           : "<<name<<endl;
                cout<<"Roll           : "<<roll<<endl;
//               cout<<"Age            : "<<age<<endl;
                //              cout<<"Department     : "<<dept<<endl;
                //              cout<<"Semester       : "<<semester<<endl;
                cout<<"Previous Credit: "<<credit<<endl;
                cout<<"CGPA           : "<<cgpa<<endl;
                cout<<endl<<endl<<endl;

                break;

            }

        }
        if (u==0)
        {
            cout<<"your roll number does not exist"<<endl;
        }
        outfile.close();


    }
};




void detail(result& x)
{

    int count=1;

    ifstream outfile;
    outfile.open("user.txt");
    string roll2;
    cout<<"your roll"<<endl;
    cin>>roll2;

    while (!outfile.eof())
    {



        getline(outfile,x.name);
        getline(outfile,x.roll);
        getline(outfile,x.age);
        getline(outfile,x.dept);
        getline(outfile,x.semester);
        getline(outfile,x.credit);
        getline(outfile,x.cgpa);


        if(roll2==x.roll)
        {
            count=0;


            cout<<"          Student Details          "<<endl;
            cout<<"Name           : "<<x.name<<endl;
            cout<<"Roll           : "<<x.roll<<endl;
            cout<<"Age            : "<<x.age<<endl;
            cout<<"Department     : "<<x.dept<<endl;
            cout<<"Semester       : "<<x.semester<<endl;
//            cout<<"Previous Credit: "<<x.credit<<endl;
//            cout<<"CGPA           : "<<x.cgpa<<endl;
            cout<<endl<<endl<<endl;

            break;

        }

    }
    if (count==1)
    {
        cout<<"your roll number does not exist"<<endl;
    }
    outfile.close();
}







class all
{
public:

    void searc(result &a)
    {



        int count=1;

        ifstream outfile;
        outfile.open("user.txt");

        cout<<"          ALL Student Details          "<<endl<<endl<<endl;
        while (!outfile.eof())
        {



            getline(outfile,a.name);
            getline(outfile,a.roll);
            getline(outfile,a.age);
            getline(outfile,a.dept);
            getline(outfile,a.semester);
            getline(outfile,a.credit);
            getline(outfile,a.cgpa);

            cout<<"Student No     : "<<count<<endl;
            cout<<"Name           : "<<a.name<<endl;
            cout<<"Roll           : "<<a.roll<<endl;
            cout<<"Age            : "<<a.age<<endl;
            cout<<"Department     : "<<a.dept<<endl;
            cout<<"Semester       : "<<a.semester<<endl;
            cout<<"Previous Credit: "<<a.credit<<endl;
            cout<<"CGPA           : "<<a.cgpa<<endl;
            cout<<endl<<endl<<endl;
            count++;
        }
        outfile.close();
    }



};



class update
{

public:

    update()
    {
        string froll;
        string name,roll,age,dept,semester,credit,cgpa;

        cout<<"which roll you want to update"<<endl;
        cin>>froll;

        cout<<froll<<endl;

        ifstream file;
        file.open("user.txt");
        ofstream temp;
        temp.open("temp.txt");
        int check=1;
//    ifstream file2;
//    file2.open("roll.txt");



        while (!file.eof())
        {

            getline(file,name);
            getline(file,roll);
            getline(file,age);
            getline(file,dept);
            getline(file,semester);
            getline(file,credit);
            getline(file,cgpa);


            if(froll!=roll)
            {

                temp<<name<<endl<<roll<<endl<<age<<endl<<dept<<endl<<semester<<endl<<credit<<endl<<cgpa<<endl;
            }
            else
                check=0;
        }
        file.close();
        temp.close();
        if (check ==0)
        {


            remove("user.txt");
            rename("temp.txt","user.txt");


            ofstream myfile;
            myfile.open("user.txt",ios::app);

            ofstream infile2;
            infile2.open("roll.txt",ios::app);
            {
                string name2;
                int roll3;
                int age2;
                string dept2;
                string semester2;
                float credit2;
                float cgpa2;


                cout<<"enter your Nick name: string"<<endl;
                getchar();
                getline(cin,name2);
                myfile<<name2<<endl;

                cout<<"Enter your roll int "<<endl;
                cin>>roll3;
                myfile<<roll3<<endl;
                infile2<<roll3<<endl;


                cout<<"Enter your age int"<<endl;
                cin>>age2;
                myfile<<age2<<endl;


                cout<<"Enter your Department string"<<endl;
                cin.ignore();
                getline(cin,dept2);
                myfile<<dept2<<endl;


                cout<<"Enter your semester string"<<endl;

                getline(cin,semester2);
                myfile<<semester2<<endl;


                cout<<"Enter your previous credit int"<<endl;
                cin>>credit2;
                myfile<<credit2<<endl;


                cout<<"Enter your cgpa float"<<endl;
                cin>>cgpa2;
                cin.ignore();
                myfile<<cgpa2<<endl;

                file.close();
                infile2.close();
                myfile.close();
            }


        }
        else
            cout<<"your roll does not exist"<<endl;


    }





};





class course
{
    string name;
    string Designation;
    string mobile;
    string email;
public:

    course()
    {
        ifstream file;
        file.open("teacher.txt");
        int count=1;
        cout<<"             Electrical And Computer Engineering             "<<endl<<endl<<endl;
        while(!file.eof())
        {
            getline(file,name);
            getline(file,Designation);
            getline(file,email);
            getline(file,mobile);


            cout<<"             Electrical And Computer Engineering             "<<endl<<endl<<endl;
            cout<<"Teacher No     : "<<count<<endl;
            cout<<"Name           : "<<name<<endl;
            cout<<"Designation    : "<<Designation<<endl;
            cout<<"Email          : "<<email<<endl;
            cout<<"Mobile         : "<<mobile<<endl;
            cout<<endl<<endl<<endl;
            count++;


        }

        file.close();

    }
};



class delet
{
public:

    delet()
    {
        int option;
        int b;
        string password;
        string password2="0471PasswordforprograM";
        cout<<"are you admin\n1.Yes\n2.No"<<endl;
        cin>>option;


        if (option==1)
        {



            cout<<"enter password"<<endl;
            getchar();
            getline(cin,password);

            if(password==password2)
            {


//                ifstream temp;
//                temp.open("temp.txt");

                if( remove( "user.txt" ) != 0 )
                    perror( "Error deleting file" );
                else
                    puts( "File successfully deleted" );

                    if( remove( "roll.txt" ) != 0 )
                    perror( "Error deleting file" );
                else
                    puts( "File successfully deleted" );

                ofstream file;
                file.open("user.txt");
                ofstream file5;
                file5.open("roll.txt");
            }
            else
                cout<<"password Incorrect"<<endl;
        }
        else
            cout<<"you have not permission to enter"<<endl;
    }
};



//class sub
//{
//
//public:
//    virtual void subject()
//    {
//        cout<<"kisui print korbena bal!!!!!"<<endl;
//    }
//};
//
//class subj:public sub
//{
//    void subject()
//    {
//        cout<<
//    }
//};




int main()

{

cout<<"\t\t\t\t\t\t";
cout<<"Student Database Management\n\t\t\t\t\t\tPrepared By Hasan Al Muazzaz\n\t\t\t\t\t\tDepartment Of Electrical And Computer Engineering\n\t\t\t\t\t\tRajshahi University Of Engineering And Technology"<<endl;


    while(1)
    {

        int opt;
        int option;
        cout<<endl;
        cout<<"\t\t\t\t\t\t";
        cout<<" 1. Enter new Records"<<endl<<endl;
        cout<<"\t\t\t\t\t\t";
        cout<<" 2. Registration"<<endl<<endl;
        cout<<"\t\t\t\t\t\t";
        cout<<" 3. Edit Records"<<endl<<endl;
        cout<<"\t\t\t\t\t\t";
        cout<<" 4. Delete Records"<<endl<<endl;
        cout<<"\t\t\t\t\t\t";
        cout<<" 5. Search And View Details"<<endl<<endl;
        cout<<"\t\t\t\t\t\t";
        cout<<" 6. Search And View Result"<<endl<<endl;
        cout<<"\t\t\t\t\t\t";
        cout<<" 7. View Full Result"<<endl<<endl;
        cout<<"\t\t\t\t\t\t";
        cout<<" 8. Course Teacher"<<endl<<endl;
        cout<<"\t\t\t\t\t\t";
//        cout<<" 9. Course Subject"<<endl<<endl;
//        cout<<"\t\t\t\t\t\t";
        cout<<" 9. Exit"<<endl<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t\t";
        cout<<"Choose options:[1/2/3/4/5/6/7/8/9]:"<<endl<<endl<<endl;



        cin>>option;

        system("cls");
        if(option==1)
        {
            int opt;
                newst a;
                a.input();
                cout<<"1.Main menu\n2.exit"<<endl;
                cin>>opt;

//                    if(opt==1)
//                    {
//
//                    }
                    if(opt==2)
                    {
                        break;
                    }

        }
        if(option==2)
        {
                registration a;
                a.reg();
                cout<<"1.Main menu\n2.exit"<<endl;
                cin>>opt;

//                    if(opt==1)
//                    {
//
//                    }
                    if(opt==2)
                    {
                        break;
                    }
        }


        if(option==3)
        {
                update();
                cout<<"1.Main menu\n2.exit"<<endl;
                cin>>opt;
//
//                    if(opt==1)
//                    {
//
//                    }
                    if(opt==2)
                    {
                        break;
                    }
        }


        if(option==4)
        {
                delet();
                cout<<"1.Main menu\n2.exit"<<endl;
                cin>>opt;

//                    if(opt==1)
//                    {
//
//                    }
                    if(opt==2)
                    {
                        break;
                    }
        }


        if(option==5)
        {
                result a;
                detail(a);
                cout<<"1.Main menu\n2.exit"<<endl;
                cin>>opt;

//                    if(opt==1)
//                    {
//
//                    }
                    if(opt==2)
                    {
                        break;
                    }
        }



        if(option==6)
        {
                result a;
                a.result1();
                cout<<"1.Main menu\n2.exit"<<endl;
                cin>>opt;

//                    if(opt==1)
//                    {
//
//                    }
                    if(opt==2)
                    {
                        break;
                    }
        }


        if(option==7)
        {
            result x;
                all a;
                a.searc(x);
                cout<<"1.Main menu\n2.exit"<<endl;
                cin>>opt;
//
//                    if(opt==1)
//                    {
//
//                    }
                    if(opt==2)
                    {
                        break;
                    }
        }



        if(option==8)
        {
                course();
                cout<<"1.Main menu\n2.exit"<<endl;
                cin>>opt;

//                    if(opt==1)
//                    {
//
//                    }
                    if(opt==2)
                    {
                        break;
                    }
        }



        if(option==9)
        {
                    cout<<"1.Main menu\n2.exit"<<endl;
                cin>>opt;

//                    if(opt==1)
//                    {
//
//                    }
                    if(opt==2)
                    {
                        break;
                    }
        }



        if(option==10)
        {
                break;
        }

    }








}
