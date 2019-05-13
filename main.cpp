
#include "students.h"
#include "complex.h"
#include <iostream>
using namespace std;
int main()
{
	cout << "which part of the program do you want to choose? (1- vector, 2- list, 3- queue) " << endl;
	int exm;
	cin >> exm;
	switch (exm)
	{
	case 1:
	{
		cout << "now the program will add a student into our vector" << endl;
		cout << "enter student age: ";
		int ageStud;
		cin >> ageStud;
		cout << endl;
		cout << "enter student name: ";
		string nameStud;
		cin >> nameStud;
		things_with_students studentent;
		studentent.addStudent(ageStud, nameStud);
		studentent.printStudent();
		cout << "which number studentto delete? ";
		int numberDel;
		cin >> numberDel;
		studentent.deleteStudent(numberDel);
		cout << "vector after deleting the student: " << endl;
		studentent.printStudent();
		break;
	}
	case 2:
	{
		complex c;
		things_with_complex tc;
		int choose = 2;
		while (choose != 0)
		{
			cout << "Add complex? (1- yes; 0- no)" << endl;
			cin >> choose;
			if (choose == 1)
			{
				cout << "Enter complex\nreal: ";
				cin >> c.re;
				cout << "\nimaginary: ";
				cin >> c.im;
				cout << endl;
				tc.enterComplex(c.re, c.im);
			}
		}
		tc.printComplex();
		break;
	}
	case 3:
	{
		queue<int>myQueue;
		int i;
		int exit = 0;
		while (exit == 0)
		{
			cout << "1- enter new car, other- quit" << endl;
			int choose;
			cin >> choose;
			if (choose == 1)
			{
				cout << "enter car number" << endl;
				int carnum;
				cin >> carnum;
				myQueue.push(carnum);
				cout << endl;
			}
			else
				exit++;
		}
		for (int i = 0; i < myQueue.size(); i++)
		{
			cout << "current places taken: " << myQueue.front() << endl;
			myQueue.pop();
			system("pause");
			system("cls");
		}
		break;
	}
	default:
	{
		cout << "part chosen wrong " << endl;
		break;
	}
	}
	cout << "enter to end the program" << endl;
	cin.get();
}