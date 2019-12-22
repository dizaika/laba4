#include <iostream>
#include "student.h"

using namespace std;

double middle(double* points)
{
    double res = 0;
    for(int i = 0; i < sizeof(points)/sizeof (double); ++i)
    {
        res += points[i];
    }
    return res/(sizeof(points)/sizeof(double));
}

double* EmulateSession()
{
    double points[12];
    for(int i = 0; i < 12; ++i)
    {
        points[i] = rand()%6;
    }
    return points;
}

int main()
{
    Student* stackStudents = new Student[3];
    for(int i = 0; i < 3; ++i)
    {
        stackStudents[i].SetName("Петя " + to_string(i));
        stackStudents[i].SetSurname("Петров");
        stackStudents[i].SetPatronymic("Петрович");
        stackStudents[i].SetSex('m');
        stackStudents[i].SetNum(20000+i);
        stackStudents[i].SetYearBorn(2000+i);
        stackStudents[i].SetYearEnter(2017+i);
        stackStudents[i].SetMiddle(4.0+i/10.0);
    }

    Student* heapStudent = new Student("Хипов", "Хип", "Хипович", 'm', 1990, 2010, 30001, 4);

    for(int personNum = 0; personNum < 3; ++personNum)
    {
        stackStudents[personNum].SetMiddle(middle(EmulateSession()));
    }

    for(int i = 0; i < 3; ++i)
    {
        for(int j = i+1; j < 3; ++j)
        {
            if(stackStudents[i].GetMiddle() < stackStudents[j].GetMiddle())
            {
                Student temp = stackStudents[i];
                stackStudents[i] = stackStudents[j];
                stackStudents[j] = temp;
            }
        }
    }

    for(int i = 0; i < 3; ++i)
        stackStudents[i].PrintState();

    return 0;
}
