#include "student.h"
#include <iostream>
#include <fstream>

Student::Student()
{
    fSurname = "untitled";
    fName = "untitled";
    fPatronymic = "untitled";
    fSex = 'n';
    fYearBorn = 1970;
    fYearEnter = 1970;
    fNum = 0;
    fMiddle = 0;
}

Student::Student(const string Surname,
                 const string Name,
                 const string Patrontmic,
                 const char Sex,
                 const int YearBorn,
                 const int YearEnter,
                 const int Num,
                 const double Middle)
{
    fSurname = Surname;
    fName = Name;
    fPatronymic = Patrontmic;
    fSex = Sex;
    fYearBorn = YearBorn;
    fYearEnter = YearEnter;
    fNum = Num;
    fMiddle = Middle;
}

string Student::GetFileName()
{
    return "."+to_string((long long)this) + "dmp";
}

void Student::Serialize()
{
    string filename = "."+to_string((long long)this) + "dmp";
    Serialize(&filename);
}

void Student::DeSerialize()
{
    string filename = "."+to_string((long long)this) + "dmp";
    DeSerialize(&filename);
}

void Student::Serialize(const string *filename)
{
    ofstream fout;
    fout.open(*filename, ios_base::binary|ios_base::trunc);

    ulong size = fSurname.length();
    fout.write((char*)&size, sizeof(size));
    fout << fSurname;

    size = fName.length();
    fout.write((char*)&size, sizeof(size));
    fout << fName;

    size = fPatronymic.length();
    fout.write((char*)&size, sizeof(size));
    fout << fPatronymic;

    fout.write((char*)&fSex, sizeof(fSex));
    fout.write((char*)&fYearBorn, sizeof(fYearBorn));
    fout.write((char*)&fYearEnter, sizeof(fYearEnter));
    fout.write((char*)&fNum, sizeof (fNum));
    fout.write((char*)&fMiddle, sizeof (fMiddle));

    fout.close();
}

void Student::DeSerialize(const string *filename)
{
    ifstream fin;
    fin.open(*filename, ios_base::binary|ios_base::in);
    ulong Size = 0;
    fin.read((char*)&Size, sizeof(Size));
    char* tmp = new char[Size+1];
    tmp[Size] = 0;
    fin.read(tmp, Size);
    fSurname = tmp;
    delete[] tmp;

    fin.read((char*)&Size, sizeof(Size));
    tmp = new char[Size+1];
    tmp[Size] = 0;
    fin.read(tmp, Size);
    fName = tmp;
    delete[] tmp;

    fin.read((char*)&Size, sizeof(Size));
    tmp = new char[Size+1];
    tmp[Size] = 0;
    fin.read(tmp, Size);
    fPatronymic = tmp;
    delete[] tmp;

    fin.read((char*)&fSex, sizeof(fSex));
    fin.read((char*)&fYearBorn, sizeof(fYearBorn));
    fin.read((char*)&fYearEnter, sizeof(fYearEnter));
    fin.read((char*)&fNum, sizeof (fNum));
    fin.read((char*)&fMiddle, sizeof (fMiddle));

    fin.close();
}

void Student::Serialize(const string filename)
{
    Serialize(&filename);
}

void Student::DeSerialize(const string filename)
{
    DeSerialize(&filename);
}

void Student::PrintState()
{
    cout << "Фамилия         :" << fSurname << endl
         << "Имя             : " << fName << endl
         << "Отчество        : " << fPatronymic << endl
         << "Пол             : " << fSex << endl
         << "Год рождения    : " << fYearBorn << endl
         << "Год поступления : " << fYearEnter << endl
         << "Средний балл    : " << fMiddle << endl;
}
