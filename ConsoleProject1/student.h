//#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include "user.h"
#include <iostream>
#include <string>

class Student : public User
{
public:
	void output();
};
#endif // !STUDENT_H
