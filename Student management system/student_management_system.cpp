

// A simple Management system using file handling in c++
// Developed by
// Amrit poudel
// Asim baral
// Bibek Shrestha



#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <string>
//#include <regex>
#include <stdio.h>
#include <iomanip>
#include <ios>
using namespace std;

// a class of marksheet type
class MarkSheet
{
public:
    void line_break(int w)
    {
        std::cout << std::setw(w * 2) << std::setfill('-') << '\n'
                  << std::setfill(' ');
    }

    string findgrade(int &marks)
    {
        if (marks >= 90)
        {
            return "A*";
        }
        else if (marks >= 80 && marks < 90)
        {
            return "A";
        }
        else if (marks >= 70 && marks < 80)
        {
            return "B+";
        }
        else if (marks >= 60 && marks < 70)
        {
            return "B";
        }
        else if (marks >= 50 && marks < 60)
        {
            return "C+";
        }
        else if (marks >= 40 && marks < 50)
        {
            return "C";
        }
        else if (marks >= 30 && marks < 40)
        {
            return "D+";
        }
        else if (marks >= 20 && marks < 30)
        {
            return "D";
        }
        else if (marks >= 0 && marks < 20)
        {
            return "E";
        }
    }

    double findgpa(int &marks)
    {
        return ((((double)marks) / 20) - 1);
    }

    string totalgrade(int &maths, int &nepali, int &science, int &social, int &hpe, int &english, int &opt_maths, int &accountancy)
    {
        int totalmarks = (maths + nepali + science + social + hpe + english + opt_maths + accountancy) / 8;

        if (totalmarks >= 90)
        {
            return "A*";
        }
        else if (totalmarks >= 80 && totalmarks < 90)
        {
            return "A";
        }
        else if (totalmarks >= 70 && totalmarks < 80)
        {
            return "B+";
        }
        else if (totalmarks >= 60 && totalmarks < 70)
        {
            return "B";
        }
        else if (totalmarks >= 50 && totalmarks < 60)
        {
            return "C+";
        }
        else if (totalmarks >= 40 && totalmarks < 50)
        {
            return "C";
        }
        else if (totalmarks >= 30 && totalmarks < 40)
        {
            return "D+";
        }
        else if (totalmarks >= 20 && totalmarks < 30)
        {
            return "D";
        }
        else if (totalmarks >= 0 && totalmarks < 20)
        {
            return "E";
        }
    }

    float round(float var)
    {
        float value = (int)(var * 100 + .5);
        return (float)value / 100;
    }

    float totalgpa(int &maths, int &nepali, int &science, int &social, int &hpe, int &english, int &opt_maths, int &accountancy)
    {
        double totalgpa = (findgpa(maths) + findgpa(nepali) + findgpa(science) + findgpa(social) + findgpa(hpe) + findgpa(english) + findgpa(opt_maths) + findgpa(accountancy)) / 8;
        return round(totalgpa);
    }

    void fillspace(){
        cout << "\t\t\t\t\t\t\t\t\t\t\t";
    }

    void printMarkSheet(int &english, int &maths, int &social, int &nepali, int &hpe, int &science, int &opt_maths, int &accountancy)
    {

        int snwidth = 4;
        int subjectswidth = 25;
        int markswidth = 6;
        int gradewidth = 6;
        int gpawidth = 6;

        int totalwidth = snwidth + subjectswidth + markswidth + gradewidth + gpawidth;

        // Now making mark sheet
        fillspace();
        line_break(totalwidth);
        std::cout << std::endl;
       fillspace(); std::cout << std::setw(50) << "GRADE SHEET" << std::setw(50);
        std::cout << std::endl<< std::endl; cout << "\t\t\t\t\t\t"; line_break(totalwidth);

        fillspace();
        cout << "|" << std::setw(5) << "S.N" << std::setw(4) << "|";

        cout << std::setw(24) << "SUBJECTS" << std::setw(13) << "|";

        cout << std::setw(11) << "MARKS" << std::setw(5) << "|";

        cout << std::setw(11) << "GRADE" << std::setw(5) << "|";

        cout << std::setw(10) << "GPA" << std::setw(4) << "|";

        // a space
        
        
        cout << endl;fillspace();cout<< "|" << std::setw(5) << " " << std::setw(4) << "|";

        cout << std::setw(24) << " " << std::setw(13) << "|";

        cout << std::setw(11) << " " << std::setw(5) << "|";

        cout << std::setw(11) << " " << std::setw(5) << "|";

        cout << std::setw(10) << " " << std::setw(4) << "|";

        // Maths

        
        cout << endl;fillspace(); cout<< "|" << std::setw(5) << "1" << std::setw(4) << "|";
        cout << std::setw(24) << "COMPULSARY MATHS" << std::setw(13) << "|";

        cout << std::setw(11) << maths << std::setw(5) << "|";

        cout << std::setw(11) << findgrade(maths) << std::setw(5) << "|";

        cout << std::setw(10) << findgpa(maths) << std::setw(4) << "|";

        // english

        
        cout << endl; fillspace();
        cout<< "|" << std::setw(5) << "2" << std::setw(4) << "|";
        cout << std::setw(24) << "COMPULSARY ENGLISH" << std::setw(13) << "|";

        cout << std::setw(11) << english << std::setw(5) << "|";

        cout << std::setw(11) << findgrade(english) << std::setw(5) << "|";

        cout << std::setw(10) << findgpa(english) << std::setw(4) << "|";

        //Nepali

        
        cout << endl; fillspace();
        cout<< "|" << std::setw(5) << "3" << std::setw(4) << "|";
        cout << std::setw(24) << "COMPULSARY NEPALI" << std::setw(13) << "|";

        cout << std::setw(11) << nepali << std::setw(5) << "|";

        cout << std::setw(11) << findgrade(nepali) << std::setw(5) << "|";

        cout << std::setw(10) << findgpa(nepali) << std::setw(4) << "|";

        // science

        
        cout << endl; fillspace();
        cout<< "|" << std::setw(5) << "4" << std::setw(4) << "|";
        cout << std::setw(24) << "COMPULSARY SCIENCE" << std::setw(13) << "|";

        cout << std::setw(11) << maths << std::setw(5) << "|";

        cout << std::setw(11) << findgrade(science) << std::setw(5) << "|";

        cout << std::setw(10) << findgpa(science) << std::setw(4) << "|";

        //SOCIAL STUDIES

        
        cout << endl; fillspace();

        cout << "|" << std::setw(5) << "5" << std::setw(4) << "|";
        
        cout << std::setw(24) << "SOCIAL STUDIES" << std::setw(13) << "|";

        cout << std::setw(11) << maths << std::setw(5) << "|";

        cout << std::setw(11) << findgrade(social) << std::setw(5) << "|";

        cout << std::setw(10) << findgpa(social) << std::setw(4) << "|";

        // HPE

        
        cout << endl; fillspace();
        cout<< "|" << std::setw(5) << "6" << std::setw(4) << "|";
        cout << std::setw(24) << "HEALTH" << std::setw(13) << "|";

        cout << std::setw(11) << maths << std::setw(5) << "|";

        cout << std::setw(11) << findgrade(hpe) << std::setw(5) << "|";

        cout << std::setw(10) << findgpa(hpe) << std::setw(4) << "|";

        //OPT MATHS

        
        cout << endl; fillspace();
        cout<< "|" << std::setw(5) << "7" << std::setw(4) << "|";
        cout << std::setw(24) << "OPT(I) MATHS" << std::setw(13) << "|";

        cout << std::setw(11) << maths << std::setw(5) << "|";

        cout << std::setw(11) << findgrade(opt_maths) << std::setw(5) << "|";

        cout << std::setw(10) << findgpa(opt_maths) << std::setw(4) << "|";

        // ACCOUNTANCY

        
        cout << endl; fillspace();
        cout << "|" << std::setw(5) << "8" << std::setw(4) << "|";
        cout << std::setw(24) << "OPT(II) ACCOUNTANCY" << std::setw(13) << "|";

        cout << std::setw(11) << maths << std::setw(5) << "|";

        cout << std::setw(11) << findgrade(accountancy) << std::setw(5) << "|";

        cout << std::setw(10) << findgpa(accountancy) << std::setw(4) << "|";

        // A space

        
        cout << endl; fillspace();
        cout<< "|" << std::setw(5) << " " << std::setw(4) << "|";

        cout << std::setw(24) << " " << std::setw(13) << "|";

        cout << std::setw(11) << " " << std::setw(5) << "|";

        cout << std::setw(11) << " " << std::setw(5) << "|";

        cout << std::setw(10) << " " << std::setw(4) << "|";
        

        
        cout << endl; fillspace();
        cout<< "|" << std::setw(5) << " " << std::setw(4) << "|";

        cout << std::setw(24) << " " << std::setw(13) << "|";

        cout << std::setw(11) << " " << std::setw(5) << "|";

        cout << std::setw(11) << " " << std::setw(5) << "|";

        cout << std::setw(10) << " " << std::setw(4) << "|";

        // total grade and gpa

        

        cout << endl; fillspace();
        cout<< "|" << std::setw(5) << "  " << std::setw(4) << "|";
        cout << std::setw(24) << "   " << std::setw(13) << "|";

        cout << std::setw(11) << "  " << std::setw(5) << "|";

        cout << std::setw(11) << "TOTAL GRADE" << std::setw(5) << "|";

        cout << std::setw(10) << "TOTAL GPA" << std::setw(4) << "|";
        

        
        cout << endl; fillspace();
        cout<< "|" << std::setw(5) << "  " << std::setw(4) << "|";
        cout << std::setw(24) << "   " << std::setw(13) << "|";

        cout << std::setw(11) << "  " << std::setw(5) << "|";

        cout << std::setw(11) << totalgrade(maths, nepali, science, social, hpe, english, opt_maths, accountancy) << std::setw(5) << "|";

        cout << std::setw(10) << totalgpa(maths, nepali, science, social, hpe, english, opt_maths, accountancy) << std::setw(4) << "|";
    }
};

// a class of Student type
class Student // class School to Class Student
{
private:
    string name, roll_no, grade, address, email_id, contact_no;
    string maths, science, nepali, english, socialStudies, hpe, optMaths, accountancy;

public:
    void studentInsert();
    void studentDisplay();
    void studentModify();
    void studentSearch();
    void studentDelete();
    bool is_empty(fstream &);
};

void Student::studentInsert() // add  details
{
    system("cls");
    fstream file, file1;
    file.open("studentRecordFile.txt", ios::app | ios::out);
    file1.open("studentmarks.txt", ios::app | ios::out);

    
            cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t|         ADD DATA           |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;

    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Name: ";
    cin.ignore();
    getline(cin, name);
    file << name << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Roll No.: ";
    cin >> roll_no;
    file << roll_no << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter grade: ";
    cin.ignore();
    getline(cin, grade);
    file << grade << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Email Id: ";
    cin >> email_id;
    file << email_id << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Contact No: ";
    cin >> contact_no;
    file << contact_no << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Address: ";
    cin.ignore();
    getline(cin, address);
    file << address << endl;
    
    cout<<endl<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Marks obtained in different subjects \n\n\n";

    file1 << roll_no << endl;

    cout << "\t\t\t\t\t\t\t\t\t\t\tCOMPULSORY MATHS : ";
    cin >> maths;
    file1 << maths << endl;

    cout << "\t\t\t\t\t\t\t\t\t\t\tCOMPULSORY SCIENCE : ";
    cin >> science;
    file1 << science << endl;

    cout << "\t\t\t\t\t\t\t\t\t\t\tCOMPULSORY NEPALI : ";
    cin >> nepali;
    file1 << nepali << endl;

    cout << "\t\t\t\t\t\t\t\t\t\t\tCOMPULSORY ENGLISH : ";
    cin >> english;
    file1 << english << endl;

    cout << "\t\t\t\t\t\t\t\t\t\t\tSOCIAL STUDIES : ";
    cin >> socialStudies;
    file1 << socialStudies << endl;

    cout << "\t\t\t\t\t\t\t\t\t\t\tHEALTH AND ENVIRONMENT : ";
    cin >> hpe;
    file1 << hpe << endl;

    cout << "\t\t\t\t\t\t\t\t\t\t\tOPT (I) MATHS : ";
    cin >> optMaths;
    file1 << optMaths << endl;

    cout << "\t\t\t\t\t\t\t\t\t\t\tOPT (II) ACCOUNTANCY : ";
    cin >> accountancy;
    file1 << accountancy << endl;

}

bool Student::is_empty(fstream &pFile)
{
    return pFile.peek() == std::ifstream::traits_type::eof();
}

void Student::studentDisplay() // display s details
{

    system("cls");
    fstream file;
    int total = 1;

    cout << "\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t|   STUDENTS RECORD DATA    |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;

    file.open("studentRecordFile.txt", ios::in);
    if (!file) // yo yedi file nai create vaa xainaa vanae dekhi ni ho, naa ki empty file huda

    {
        
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tNo Data Is Present...";
        file.close();
    }

    else if (is_empty(file))
    {
        cout << "No data to display \n";
    }

    else
    {
        
        getline(file, name);
        getline(file, roll_no);
        getline(file, grade);
        getline(file, email_id);
        getline(file, contact_no);
        getline(file, address);
        while (!file.eof())
        {

            cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t  No.: " << total++ << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t  Name: " << name << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t  Roll No.: " << roll_no << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t  grade: " << grade << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t  Email Id.: " << email_id << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t  Contact No.: " << contact_no << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t  Address: " << address << endl;
            // (SELF MOD) file >> name >> teacher_id_number >> grade >> email_id >> contact_no >> address;
            getline(file, name);
            getline(file, roll_no);
            getline(file, grade);
            getline(file, email_id);
            getline(file, contact_no);
            getline(file, address);
        }
        if (total == 0)
        {
            cout << "\n\t\t\t\t\t\t\t\t\t\t\tNo Data Is Present...";
        }
    }

    file.close();
}
void Student::studentModify() // Modify s Details
{
    system("cls");
    fstream file, file1;
    string rollno;
    int found = 0;

    cout << "\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t|        MODIFY DATA        |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;

    file.open("studentRecordFile.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tNo Data is Present..";
    }
    else
    {
        cout << "\nEnter Roll No. of  which you want to Modify: ";
        cin >> rollno;
        file1.open("studentRecordTempFile.txt", ios::app | ios::out);
        getline(file, name);
        getline(file, roll_no);
        getline(file, grade);
        getline(file, email_id);
        getline(file, contact_no);
        getline(file, address);
        while (!file.eof())
        {
            if (rollno != roll_no)

            {
                file1 << name << endl;
                file1 << roll_no << endl;
                file1 << grade << endl;
                file1 << email_id << endl;
                file1 << contact_no << endl;
                file1 << address << endl;
            }
            else
            {
                cout << "\n\t\t\t\t\t\t\t\t\t\t\tEnter Name: ";
                cin.ignore();
                getline(cin, name);

                cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Roll No.: ";
                cin >> roll_no;
                cout << "\t\t\t\t\t\t\t\t\t\t\tEnter grade: ";
                cin.ignore();
                getline(cin, grade); // cin >> grade;
                cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Email Id: ";
                cin >> email_id; //cin >> email_id;
                cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Contact No.: ";
                cin >> contact_no; //cin >> contact_no;
                cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Address: ";
                cin.ignore();
                getline(cin, address);
                file1 << name << endl;
                file1 << roll_no << endl;
                file1 << grade << endl;
                file1 << email_id << endl;
                file1 << contact_no << endl;
                file1 << address << endl;
                found++;
            }

            
            getline(file, name);
            getline(file, roll_no);
            getline(file, grade);
            getline(file, email_id);
            getline(file, contact_no);
            getline(file, address);

            if (found == 0)
            {
                cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t  Roll No. Not Found....";
            }
        }
        file1.close();
        file.close();
        remove("studentRecordFile.txt");
        rename("studentRecordTempFile.txt", "studentRecordFile.txt");
    }
}
void Student::studentSearch() // search data of
{
    system("cls");
    fstream file, file1;
    int found = 0;
    file.open("studentRecordFile.txt", ios::in);

    if (!file)
    {

        cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t|        SEARCH DATA         |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t No Data Is Present...";
    }
    else
    {
        string rollno;
        
        cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t|        SEARCH DATA         |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;


        cout << "\n\t\t\t\t\t\t\t\t\t\t\t Enter Roll No. of  Which You Want to Search: ";
        cin >> rollno;
        getline(file, name);
        getline(file, roll_no);
        getline(file, grade);
        getline(file, email_id);
        getline(file, contact_no);
        getline(file, address);

        while (!file.eof())
        {
            if (rollno == roll_no)
            {
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t  Name: " << name << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t\t  Roll No.: " << roll_no << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t\t  grade: " << grade << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t\t  Email Id.: " << email_id << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t\t  Address: " << address << endl;
                cout<<"\n\n";
                found++;
            }
            getline(file, name);
            getline(file, roll_no);
            getline(file, grade);
            getline(file, email_id);
            getline(file, contact_no);
            getline(file, address);
        }
        if (found == 0)
        {
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t Roll No. Not Found...";
        }
        file.close();

        // Now we will display our mark sheet

        file1.open("studentmarks.txt", ios::in);

        getline(file1, roll_no);

        getline(file1, maths);
        getline(file1, science);
        getline(file1, nepali);
        getline(file1, english);
        getline(file1, socialStudies);
        getline(file1, hpe);
        getline(file1, optMaths);
        getline(file1, accountancy);

        while (!file1.eof())
        {

            if (rollno == roll_no)
            {
                MarkSheet m;
                int english1 = std::stoi(english);
                int maths1 = std::stoi(maths);
                int socialStudies1 = std::stoi(socialStudies);
                int nepali1 = std::stoi(nepali);
                int hpe1 = std::stoi(hpe);
                int science1 = std::stoi(science);
                int optMaths1 = std::stoi(optMaths);
                int accountancy1 = std::stoi(accountancy);

                m.printMarkSheet(english1, maths1, socialStudies1, nepali1, hpe1, science1, optMaths1, accountancy1);
            }
            getline(file1, roll_no);

            getline(file1, maths);
            getline(file1, science);
            getline(file1, nepali);
            getline(file1, socialStudies);
            getline(file1, hpe);
            getline(file1, optMaths);
            getline(file1, accountancy);
        }

        file1.close();
    }
}
void Student::studentDelete()
{
    system("cls");
    fstream file, file1;
    int found = 0;
    string roll;

        cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t|        DELETE DATA         |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;

    file.open("studentRecordFile.txt", ios::in);
    if (!file) // file nai present chainaa vannae
    {
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tNo Data is Present..";
        file.close();
    }
    else
    {
        cout << "\nEnter Roll No. of  which you want Delete Data: ";
        cin >> roll;
        file1.open("studentRecordTempFile.txt", ios::app | ios::out);
        getline(file, name);
        getline(file, roll_no);
        getline(file, grade);
        getline(file, email_id);
        getline(file, contact_no);
        getline(file, address);
        while (!file.eof())
        {
            if (roll != roll_no)
            {
                file1 << name << endl;
                file1 << roll_no << endl;
                file1 << grade << endl;
                file1 << email_id << endl;
                file1 << contact_no << endl;
                file1 << address << endl;
            }
            else
            {
                found++;
                cout << "\n\t\t\t\t\t\t\t\t\t\t\tSuccessfully Delete Data";
            }
            getline(file, name);
            getline(file, roll_no);
            getline(file, grade);
            getline(file, email_id);
            getline(file, contact_no);
            getline(file, address);
        }
        if (found == 0)
        {
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t  Roll NO. Not Found....";
        }
        file1.close();
        file.close();
        remove("studentRecordFile.txt");
        rename("studentRecordTempFile.txt", "studentRecordFile.txt");
    }
}

// A class of Teacher type
class Teacher
{
private:
    string name, teacher_id_number, grade, address, email_id, contact_no;

public:
    void teacherInsert();
    void teacherDisplay();
    void teacherModify();
    void teacherSearch();
    void teacherDelete();
    bool is_empty(fstream &);
};

void Teacher::teacherInsert() // add  details
{
    system("cls");
    fstream file;
    file.open("teacherRecordFile.txt", ios::app | ios::out);



        cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t|         ADD DATA           |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;

    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Name: ";
    cin.ignore();
    getline(cin, name);
    file << name << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Teacher ID Number: ";
    cin >> teacher_id_number;
    file << teacher_id_number << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter grades of teaching: ";
    cin.ignore();
    getline(cin, grade);
    file << grade << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Email Id: ";
    cin >> email_id;
    file << email_id << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Contact No: ";
    cin >> contact_no;
    file << contact_no << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Address: ";
    cin.ignore();
    getline(cin, address);
    file << address << endl;
}

// this one checks whether file is empty or not
bool Teacher::is_empty(fstream &pFile)
{
    return pFile.peek() == std::ifstream::traits_type::eof();
}

void Teacher::teacherDisplay() // display s details
{

    system("cls");
    fstream file;
    int total = 1;


        cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t|    TEACHER RECORD TABLE    |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
    file.open("teacherRecordFile.txt", ios::in);
    if (!file) // yo yedi file nai create vaa xainaa vanae dekhi ho, naa ki empty file huda

    {
        
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tNo Data Is Present...";
        file.close();
    }

    else if (is_empty(file))
    {
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\tNo data to display \n";
    }

    else
    {
        getline(file, name);
        getline(file, teacher_id_number);
        getline(file, grade);
        getline(file, email_id);
        getline(file, contact_no);
        getline(file, address);
        while (!file.eof())
        {

            cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t  No.: " << total++ << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t  Name: " << name << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t  Teacher ID Number: " << teacher_id_number << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t  Grades of Teaching: " << grade << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t  Email Id.: " << email_id << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t  Contact No.: " << contact_no << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t  Address: " << address << endl;
            getline(file, name);
            getline(file, teacher_id_number);
            getline(file, grade);
            getline(file, email_id);
            getline(file, contact_no);
            getline(file, address);
        }
        if (total == 0)
        {
            cout << "\n\t\t\t\t\t\t\t\t\t\t\tNo Data Is Present...";
        }
    }

    file.close();
}
void Teacher::teacherModify() // Modify s Details
{
    system("cls");
    fstream file, file1;
    string rollno;
    int found = 0;

     
    cout << "\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t|        MODIFY DATA        |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;


    file.open("teacherRecordFile.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tNo Data is Present..";
    }
    else
    {
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tEnter Roll No. of  which you want to Modify: ";
        cin >> rollno;
        file1.open("teacherRecordTempFile.txt", ios::app | ios::out); // studentRecordTempFile.txt  Changed  to   teacherRecordTempFile.txt
        getline(file, name);
        getline(file, teacher_id_number);
        getline(file, grade);
        getline(file, email_id);
        getline(file, contact_no);
        getline(file, address);
        while (!file.eof())
        {
            if (rollno != teacher_id_number)

            {
                file1 << name << endl;
                file1 << teacher_id_number << endl;
                file1 << grade << endl;
                file1 << email_id << endl;
                file1 << contact_no << endl;
                file1 << address << endl;
            }
            else
            {
                cout << "\n\t\t\t\t\t\t\t\t\t\t\tEnter Name: ";
                cin.ignore();
                getline(cin, name);

                cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Teacher ID Number: ";
                cin >> teacher_id_number;
                cout << "\t\t\t\t\t\t\t\t\t\t\tEnter grade: ";
                cin.ignore();
                getline(cin, grade); // cin >> grade;
                cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Email Id: ";
                cin >> email_id; //cin >> email_id;
                cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Contact No.: ";
                cin >> contact_no; //cin >> contact_no;
                cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Address: ";
                cin.ignore();
                getline(cin, address); 
                file1 << name << endl;
                file1 << teacher_id_number << endl;
                file1 << grade << endl;
                file1 << email_id << endl;
                file1 << contact_no << endl;
                file1 << address << endl;
                found++;
            }
            

            
            getline(file, name);
            getline(file, teacher_id_number);
            getline(file, grade);
            getline(file, email_id);
            getline(file, contact_no);
            getline(file, address);

            if (found == 0)
            {
                cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t  Teacher ID Number Not Found....";
            }
        }
        file1.close();
        file.close();
        remove("teacherRecordFile.txt");
        rename("teacherRecordTempFile.txt", "teacherRecordFile.txt");
    }
}
void Teacher::teacherSearch() // search data of
{
    system("cls");
    fstream file;
    int found = 0;
    file.open("teacherRecordFile.txt", ios::in);
    if (!file)
    {
        cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t|        SEARCH DATA         |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t No Data Is Present...";
    }
    else
    {
        string rollno;
        cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t|        SEARCH DATA         |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;

        cout << "\n \t\t\t\t\t\t\t\t\t\t\tEnter ID Number Of Teacher Which You Want to Search: ";
        cin >> rollno;
        getline(file, name);
        getline(file, teacher_id_number);
        getline(file, grade);
        getline(file, email_id);
        getline(file, contact_no);
        getline(file, address);

        while (!file.eof())
        {
            if (rollno == teacher_id_number)
            {
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t  Name: " << name << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t\t  Teacher ID Number: " << teacher_id_number << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t\t  Grades Of Teaching: " << grade << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t\t  Email Id.: " << email_id << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t\t  Address: " << address << endl;
                found++;
            }
            getline(file, name);
            getline(file, teacher_id_number);
            getline(file, grade);
            getline(file, email_id);
            getline(file, contact_no);
            getline(file, address);
        }
        if (found == 0)
        {
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t Teacher ID Number Not Found...";
        }
        file.close();
    }
}
void Teacher::teacherDelete()
{
    system("cls");
    fstream file, file1;
    int found = 0;
    string roll;

        cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t|        DELETE DATA         |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
    file.open("teacherRecordFile.txt", ios::in);
    if (!file) // file nai present chainaa vannae
    {
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tNo Data is Present..";
        file.close();
    }
    else
    {
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tEnter ID Number of teacher which you want Delete Data: ";
        cin >> roll;
        file1.open("teacherRecordTempFile.txt", ios::app | ios::out);
        getline(file, name);
        getline(file, teacher_id_number);
        getline(file, grade);
        getline(file, email_id);
        getline(file, contact_no);
        getline(file, address);
        while (!file.eof())
        {
            if (roll != teacher_id_number)
            {
                file1 << name << endl;
                file1 << teacher_id_number << endl;
                file1 << grade << endl;
                file1 << email_id << endl;
                file1 << contact_no << endl;
                file1 << address << endl;
            }
            else
            {
                found++;
                cout << "\n\t\t\t\t\t\t\t\t\t\t\tSuccessfully Delete Data";
            }
            getline(file, name);
            getline(file, teacher_id_number);
            getline(file, grade);
            getline(file, email_id);
            getline(file, contact_no);
            getline(file, address);
        }
        if (found == 0)
        {
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t  Roll NO. Not Found....";
        }
        file1.close();
        file.close();
        remove("teacherRecordFile.txt");
        rename("teacherRecordTempFile.txt", "teacherRecordFile.txt");
    }
}

// A class of NonTeachingStaffs type

class NonTeachingStaffs
{

private:
    string name, id_number, address, email_id, contact_no;

public:
    void nonTeachingStaffsInsert();
    void nonTeachingStaffsDisplay();
    void nonTeachingStaffsModify();
    void nonTeachingStaffsSearch();
    void nonTeachingStaffsDelete();
    bool is_empty(fstream &);
};

void NonTeachingStaffs::nonTeachingStaffsInsert() // add  details
{
    system("cls");
    fstream file;
    file.open("nonTeachingStaffsRecordFile.txt", ios::app | ios::out);

         cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t|         ADD DATA           |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;

    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Name: ";
    cin.ignore();
    getline(cin, name);
    file << name << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter ID Number: ";
    cin >> id_number;
    file << id_number << endl;
    
    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Email Id: ";
    cin >> email_id;
    file << email_id << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Contact No: ";
    cin >> contact_no;
    file << contact_no << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Address: ";
    cin.ignore();
    getline(cin, address);
    file << address << endl;
   
}

bool NonTeachingStaffs::is_empty(fstream &pFile)
{
    return pFile.peek() == std::ifstream::traits_type::eof();
}

void NonTeachingStaffs::nonTeachingStaffsDisplay() // display s details
{

    system("cls");
    fstream file;
    int total = 1;

  
        cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t ---------------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t| NON TEACHING STAFFS RECORD TABLE |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t ---------------------------------" << endl;


    file.open("nonTeachingStaffsRecordFile.txt", ios::in);
    if (!file) // yo yedi file nai create vaa xainaa vanae dekhi ho, naa ki empty file huda

    {
        
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tNo Data Is Present...";
        file.close();
    }

    else if (is_empty(file))
    {
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tNo data to display \n";
    }

    else
    {
        
        getline(file, name);
        getline(file, id_number);
        getline(file, email_id);
        getline(file, contact_no);
        getline(file, address);
        while (!file.eof())
        {

            cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t  No.: " << total++ << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t  Name: " << name << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t  ID Number: " << id_number << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t  Email Id.: " << email_id << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t  Contact No.: " << contact_no << endl;
            cout << "\t\t\t\t\t\t\t\t\t\t\t  Address: " << address << endl;
            
            getline(file, name);
            getline(file, id_number);
            getline(file, email_id);
            getline(file, contact_no);
            getline(file, address);
        }
        if (total == 0)
        {
            cout << "\n\t\t\t\t\t\t\t\t\t\t\tNo Data Is Present...";
        }
    }

    file.close();
}
void NonTeachingStaffs::nonTeachingStaffsModify() // Modify s Details
{
    system("cls");
    fstream file, file1;
    string rollno;
    int found = 0;

   
    cout << "\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t|        MODIFY DATA        |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
    file.open("nonTeachingStaffsRecordFile.txt", ios::in);
    if (!file)
    {
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tNo Data is Present..";
    }
    else
    {
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tEnter Roll No. of  which you want to Modify: ";
        cin >> rollno;
        file1.open("nonTeachingStaffsRecordTempFile.txt", ios::app | ios::out); // studentRecordTempFile.txt  Changed  to   teacherRecordTempFile.txt
        
        getline(file, name);
        getline(file, id_number);
        getline(file, email_id);
        getline(file, contact_no);
        getline(file, address);
        while (!file.eof())
        {
            if (rollno != id_number)

            
            {
                file1 << name << endl;
                file1 << id_number << endl;
                file1 << email_id << endl;
                file1 << contact_no << endl;
                file1 << address << endl;
            }
            else
            {
                cout << "\n\t\t\t\t\t\t\t\t\t\t\tEnter Name: ";
                cin.ignore();
                getline(cin, name);

                cout << "\t\t\t\t\t\t\t\t\t\t\tEnter ID Number: ";
                cin >> id_number;
                
                cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Email Id: ";
                cin >> email_id; //cin >> email_id;
                cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Contact No.: ";
                cin >> contact_no; //cin >> contact_no;
                cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Address: ";
                cin.ignore();
                getline(cin, address); 
                file1 << name << endl;
                file1 << id_number << endl;
                file1 << email_id << endl;
                file1 << contact_no << endl;
                file1 << address << endl;
                found++;
            }

            
            getline(file, name);
            getline(file, id_number);
            getline(file, email_id);
            getline(file, contact_no);
            getline(file, address);

            if (found == 0)
            {
                cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t  Id Number Not Found....";
            }
        }
        file1.close();
        file.close();
        remove("nonTeachingStaffsRecordFile.txt");
        rename("nonTeachingStaffsRecordTempFile.txt", "nonTeachingStaffsRecordFile.txt");
    }
}
void NonTeachingStaffs::nonTeachingStaffsSearch() // search data of
{
    system("cls");
    fstream file;
    int found = 0;
    file.open("nonTeachingStaffsRecordFile.txt", ios::in);
    if (!file)
    {
        
        cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t|        SEARCH DATA         |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t No Data Is Present...";
    }
    else
    {
        string rollno;

       
        cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t|        SEARCH DATA         |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tEnter ID Number of data  Which You Want to Search: ";
        cin >> rollno;
        getline(file, name);
        getline(file, id_number);
        getline(file, email_id);
        getline(file, contact_no);
        getline(file, address);

        while (!file.eof())
        {
            if (rollno == id_number)
            {
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t  Name: " << name << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t\t  ID Number: " << id_number << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t\t  Email Id.: " << email_id << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t\t  Address: " << address << endl;
                found++;
            }
            getline(file, name);
            getline(file, id_number);
            getline(file, email_id);
            getline(file, contact_no);
            getline(file, address);
        }
        if (found == 0)
        {
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t Roll No. Not Found...";
        }
        file.close();
    }
}
void NonTeachingStaffs::nonTeachingStaffsDelete()
{
    system("cls");
    fstream file, file1;
    int found = 0;
    string roll;

        cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t|        DELETE DATA         |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
    file.open("nonTeachingStaffsRecordFile.txt", ios::in);
    if (!file) // file nai present chainaa vannae
    {
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tNo Data is Present..";
        file.close();
    }
    else
    {
        cout << "\n\t\t\t\t\t\t\t\t\t\t\tEnter ID Number of which you want Delete Data: ";
        cin >> roll;
        file1.open("teacherRecordTempFile.txt", ios::app | ios::out);
        getline(file, name);
        getline(file, id_number);
        getline(file, email_id);
        getline(file, contact_no);
        getline(file, address);
        while (!file.eof())
        {
            if (roll != id_number)
            {
                file1 << name << endl;
                file1 << id_number << endl;
                file1 << email_id << endl;
                file1 << contact_no << endl;
                file1 << address << endl;
            }
            else
            {
                found++;
                cout << "\n\t\t\t\t\t\t\t\t\t\t\tSuccessfully Delete Data";
            }
            getline(file, name);
            getline(file, id_number);
            getline(file, email_id);
            getline(file, contact_no);
            getline(file, address);
        }
        if (found == 0)
        {
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t  Roll NO. Not Found....";
        }
        file1.close();
        file.close();
        remove("nonTeachingStaffsRecordFile.txt");
        rename("nonTeachingStaffsRecordTempFile.txt", "nonTeachingStaffsRecordFile.txt");
    }
}

class School : public Student, public Teacher, public NonTeachingStaffs
{
public:
    void menu();
};

void School::menu()
{
menustart:
    int choice;
    char x;
    system("cls");

    cout << "\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t|  SCHOOL MANAGEMENT SYSTEM |" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t 1. Enter New Record" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t 2. Display Record" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t 3. Modify Record" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t 4. Search Record" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t 5. Delete Record" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t 6. Exit" << endl;

    cout << "\t\t\t\t\t\t\t\t\t\t\t---------------------------" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\tChoose Option:[1/2/3/4/5/6]" << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t---------------------------" << endl;
    cout << "\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Your Choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        system("cls");
        int choice1;
        cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t| SCHOOL MANAGEMENT SYSTEM |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t 1. New Record of Teachers" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t 2. New Record of student" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t 3. New record of Non Teaching staffs" << endl;
        cout << "\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Your Choice : ";
        cin >> choice1;

        switch (choice1)
        {
        case 2:
            do
            {
                Student::studentInsert();
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t Add Another  Record (Y,N): ";
                cin >> x;

            } while (x == 'y' || x == 'Y');

            break;
        case 1:
            do
            {
                Teacher::teacherInsert();
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t Add Another  Record (Y,N): ";
                cin >> x;

            } while (x == 'y' || x == 'Y');

            break;
        case 3:
            do
            {
                NonTeachingStaffs::nonTeachingStaffsInsert();
                cout << "\n\t\t\t\t\t\t\t\t\t\t\t Add Another  Record (Y,N): ";
                cin >> x;

            } while (x == 'y' || x == 'Y');

            break;

        default:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t Invalid choice... Please Try Again..";
        }

        break;
    case 2:

        system("cls");
        int choice2;
        cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t| SCHOOL MANAGEMENT SYSTEM |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t 1. Display Record of Teachers" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t 2. Display Record of student" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t 3. Display record of Non Teaching staffs" << endl;
        cout << "\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Your Choice : ";
        cin >> choice2;

        switch (choice2)
        {
        case 2:

            Student::studentDisplay();
            break;
        case 1:

            Teacher::teacherDisplay();
            break;

        case 3:
            NonTeachingStaffs::nonTeachingStaffsDisplay();
            break;

        default:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t Invalid choice... Please Try Again..";
        }

        break;
    case 3:

        system("cls");
        int choice3;
        cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t| SCHOOL MANAGEMENT SYSTEM |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t 1. Modify Record of Teachers" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t 2. Modify Record of student" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t 3. Modify record of Non Teaching staffs" << endl;
        cout << "\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Your Choice : ";
        cin >> choice3;

        switch (choice3)
        {
        case 2:
            Student::studentModify();
            break;

        case 1:
            Teacher::teacherModify();
            break;

        case 3:
            NonTeachingStaffs ::nonTeachingStaffsModify();
            break;

        default:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t Invalid choice... Please Try Again..";
        }

        break;
    case 4:
        system("cls");
        int choice4;
        cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t| SCHOOL MANAGEMENT SYSTEM |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t 1. Search Record of Teachers" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t 2. Search Record of student" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t 3. Search record of Non Teaching staffs" << endl;
        cout << "\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Your Choice : ";
        cin >> choice4;

        switch (choice4)
        {
        case 2:

            Student::studentSearch();
            break;

        case 1:
            Teacher::teacherSearch();
            break;

        case 3:
            NonTeachingStaffs ::nonTeachingStaffsSearch();
            break;

        default:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t Invalid choice... Please Try Again..";
        }

        break;
    case 5:
        system("cls");
        int choice5;
        cout << "\n\n\n\n\n\n\n\n\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t| SCHOOL MANAGEMENT SYSTEM |" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t-----------------------------" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t 1. Delete Record of Teachers" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t 2. Delete Record of student" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t 3. Delete record of Non Teaching staffs" << endl;
        cout << "\n\n";
        cout << "\t\t\t\t\t\t\t\t\t\t\tEnter Your Choice : ";
        cin >> choice5;

        switch (choice5)
        {
        case 2:

            Student::studentDelete();
            break;

        case 1:

            Teacher::teacherDelete();
            break;

        case 3:
            NonTeachingStaffs ::nonTeachingStaffsDelete();
            break;

        default:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t Invalid choice... Please Try Again..";
        }

        break;
    case 6:
        exit(0);
    default:
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t Invalid choice... Please Try Again..";
    }
    getch();
    goto menustart;
}

main()
{
    system("Color 71");
    School project;
    project.menu();
    return 0;
}