#include <iostream>
#include <string>
#include <vector>
#include "user.h"

/*
struct User //default is public for the member values
{
    std::string first_name;
    std::string last_name;
    std::string get_status() {
        return status;
    }
private:
    std::string status="Gold"; //assigned a default value
};
*/
 //default is private for the member values of a class

    


    int User::get_user_count() {
        //std::cout << user_count << std::endl; //don't use this
        return user_count;
    }
    
    std::string User::get_status() {
        return status;
    }

    User::User() //default constructor is the one with no parameters, you can edit it by explicitly writing it out and adding further code to execute, as done here.
    {
        //std::cout << "Constructor\n";
        user_count++;
        //std::cout << "User\n";
    }

    User::User(std::string first_name, std::string last_name, std::string status)//if you're using a custom constructor, and don't define a default constructor, then calling the default constructor will produce an error.
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
        user_count++;
    }
    User::~User()
    {
        //std::cout << "Desctructor\n";
        user_count--;
    }
    void User::output()
    {
        std::cout << "I am a user\n";
    }
    void User::set_status(std::string status)
    {
        if (status == "Gold" || status == "Silver" || status == "Bronze") {
            this->status = status;
        }
        else {
            this->status = "No status";
        }

    }
    void output_status(User user);//don't add User:: to friend functions!!
    std::istream& operator >> (std::istream& input, User& user);//don't add User:: to friend functions!!
    std::ostream& operator << (std::ostream& output, const User user);//don't add User:: to friend functions!!



int User::user_count = 0;

int add_user_if_not_exist(std::vector<User> users, User user) {
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].first_name == user.first_name &&
            users[i].last_name == user.last_name)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}

std::ostream& operator << (std::ostream& output, const User user)
{
    output << "First name: " << user.first_name << "\nLast name: " << user.last_name << "\nStatus: " << user.status;
    return output;
}

std::istream& operator >> (std::istream& input, User& user)
{
    input >> user.first_name >> user.last_name >> user.status;
    return input;
}

void output_status(User user)
{
    std::cout << user.status << std::endl;
}
