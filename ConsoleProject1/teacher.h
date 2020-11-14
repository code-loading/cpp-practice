//#pragma once
#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include <string>
#include <vector>
#include "user.h"

class Teacher : public User
{
public:
	std::vector<std::string> classes_teaching;
	void output();
	Teacher();
};

#endif