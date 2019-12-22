#ifndef CONDITIONER_H
#define CONDITIONER_H
#include <iostream>
using namespace std;

class Student
{
private:
    string fSurname;
    string fName;
    string fPatronymic;
    char fSex;
    int fYearBorn;
    int fYearEnter;
    int fNum;
    double fMiddle;
public:
    Student();
    Student(const string Surname,
            const string Name,
            const string Patrontmic,
            const char Sex,
            const int YearBorn,
            const int YearEnter,
            const int Num,
            const double Middle);

    string GetFileName();

    void Serialize();
    void DeSerialize();

    void Serialize(const string* filename);
    void DeSerialize(const string* filename);

    void Serialize(const string filename);
    void DeSerialize(const string filename);

    void PrintState();

//================================================
    void SetSurname(const string& Surname)
    {
        fSurname = Surname;
    }
    void SetName(const string& Name)
    {
        fName = Name;
    }
    void SetPatronymic(const string& Patronymic)
    {
        fPatronymic = Patronymic;
    }
    void SetSex(const char Sex)
    {
        fSex = Sex;
    }
    void SetYearBorn(const int YearBorn)
    {
        fYearBorn = YearBorn;
    }
    void SetYearEnter(const int YearEnter)
    {
        fYearEnter = YearEnter;
    }
    void SetMiddle(double Middle)
    {
        fMiddle = Middle;
    }
    void SetNum(int Num)
    {
        fNum = Num;
    }
//=================================
    string GetSurname()
    {
        return fSurname;
    }
    string GetName()
    {
        return fName;
    }
    string GetPatronymic()
    {
        return fPatronymic;
    }
    char GetSex()
    {
        return fSex;
    }
    int GetYearBorn()
    {
        return fYearBorn;
    }
    int GetYearEnter()
    {
        return fYearEnter;
    }
    int GetNum()
    {
        return fNum;
    }
    double GetMiddle()
    {
        return fMiddle;
    }
};

#endif // CONDITIONER_H
