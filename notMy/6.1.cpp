#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string Name;
    string Surname;
    string Patronymic;
    int Age;
    int Course;
    bool IsMan;
    int Progress[3];
    int MathMark;
    int PhisicsMark;
    int EnglishMark;
};

Student CreateStudent()
{
    Student NewStudent;

    cout << "Enter name: ";
    cin >> NewStudent.Name;

    cout << "Enter surname: ";
    cin >> NewStudent.Surname;

    cout << "Enter patronymic: ";
    cin >> NewStudent.Patronymic;

    cout << "Enter age: ";
    cin >> NewStudent.Age;

    cout << "Enter course: ";
    cin >> NewStudent.Course;

    cout << "Enter gender:\n1. Man\n2. Woman\n";
    int Choice;
    cin >> Choice;

    NewStudent.IsMan = (Choice == 1) ? 1 : 0;

    cout << "Enter math mark: ";
    cin >> NewStudent.Progress[0];

    cout << "Enter phisics mark: ";
    cin >> NewStudent.Progress[1];

    cout << "Enter english mark: ";
    cin >> NewStudent.Progress[2];
    cout << endl;

    return NewStudent;
}

void PrintStudentInfo(const Student& student)
{
    cout << "Student name is: " << student.Name << endl;
    cout << "Student surname is: " << student.Surname << endl;
    cout << "Student patronymic is: " << student.Patronymic << endl;
    cout << "Student age is: " << student.Age << endl;
    cout << "Student course is: " << student.Course << endl;
    cout << "Student gender is: " << ((student.IsMan == 1) ? "man" : "woman") << endl;
    cout << "Student english mark is: " << student.Progress[2] << endl;
    cout << "Student math mark is: " << student.Progress[0] << endl;
    cout << "Student phisics mark is: " << student.Progress[1] << endl;
}

void PrintStudentFIO(const Student& student)
{
    cout << endl << "The youngest student on the " << student.Course << " course is " << student.Surname << " " << student.Name << " " << student.Patronymic << " " << student.Age;
}

void CreateNewStudentsList(Student *StudentsArray, int n)
{
    for (int i = 0; i < n; i++)
    {

        Student NewStudent = CreateStudent();
        StudentsArray[i] = NewStudent;
    }
}

void ShowAllStudents(const Student *StudentsArray, int n)
{
    for (int i = 0; i < n; i++)
    {
        PrintStudentInfo(StudentsArray[i]);
        cout << endl << endl;
    }
}

Student* SearchTheYoungestStudent(Student *StudentsArray, int n, int Course)
{
    int minAge=100, minIndex;
    for(int k = 0; k<n; k++)
    {
        if(StudentsArray[k].Age < minAge && StudentsArray[k].Course == Course)
        {
            minIndex = k;
            minAge = StudentsArray[k].Age;
        }
    }
    return &StudentsArray[minIndex];
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Enter number of students: " << endl;
    int n; cin >> n;

    Student* StudentsList = new Student[n];

    CreateNewStudentsList(StudentsList, n);  //Ввод
    ShowAllStudents(StudentsList, n); //Вывод

    cout << endl << endl << "Enter course: " << endl;
    int Course; cin >> Course;

    Student* YS = SearchTheYoungestStudent(StudentsList, n, Course); //Анализ

    PrintStudentFIO(*YS);  //Вывод результата

    delete [] StudentsList;

    return 0;
}
