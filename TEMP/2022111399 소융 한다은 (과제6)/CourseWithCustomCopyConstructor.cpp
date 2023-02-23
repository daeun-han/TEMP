#include <iostream>
#include "CourseWithCustomCopyConstructor.h"
using namespace std;

Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];
}

Course::~Course()
{
	// Good practice to ensure students not deleted again
	if (students != NULL) {
		students = NULL;
		delete[] students;
	}
}

string Course::getCourseName() const
{
	return courseName; {}
}

void Course::addStudent(const string& name)
{
	if (numberOfStudents >= capacity)
	{
		cout << "The maximum size of array exceeded" << endl;
		cout << "Program terminates now" << endl;
		exit(0);
	}

	students[numberOfStudents] = name;
	numberOfStudents++;
}

void Course::dropStudent(const string& name)
{
	//Find the students name, delete it and shift everything down one spot in the array
	for (int i = 0; i < numberOfStudents; i++) {
		if (students[i] == name) {
			numberOfStudents--;
			for (int j = i + 1; j < numberOfStudents + 1; j++) {
				students[i] = students[j];
				i++;
			}
		}
	}
}

string* Course::getStudents() const
{
	return students;
}

int Course::getNumberOfStudents() const
{
	return numberOfStudents;
}

Course::Course(const Course& course) // Copy constructor
{
	courseName = course.courseName;
	numberOfStudents = course.numberOfStudents;
	capacity = course.capacity;
	students = new string[capacity];
	for (int i = 0; i < numberOfStudents; i++)
		students[i] = course.students[i];
}