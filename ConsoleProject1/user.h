//#pragma once
#ifndef USER_H
#define USER_H


#include <iostream>
#include <string>
#include <vector>



class User //default is private for the member values
{
    static int user_count;
    std::string status = "Gold"; //assigned a default value

public:
    static int get_user_count();
    std::string first_name;
    std::string last_name;
    std::string get_status();

    User(); //default constructor is the one with no parameters, you can edit it by explicitly writing it out and adding further code to execute, as done here.
    

    User(std::string first_name, std::string last_name, std::string status);//if you're using a custom constructor, and don't define a default constructor, then calling the default constructor will produce an error.
    
    ~User();
    void set_status(std::string status);
    //std::ostream& operator<<(std::ostream& output, const User user);
    friend void output_status(User user);
    friend std::istream& operator >> (std::istream& input, User& user);
    friend std::ostream& operator << (std::ostream& output, const User user);

};

#endif // !USER_H