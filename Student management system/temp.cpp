
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){

    ofstream fout;
    fout.open("temp1.txt");

    string name, name1;
    name="Amrit poudel";

    fout<<name;

    fout.close();

    ifstream fin;
    fin.open("temp1.txt");
    fin>>name1;

    cout<<"Name1 : "<<name1;




}