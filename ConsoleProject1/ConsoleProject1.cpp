#include <iostream>
#include <string>

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

int main()
{
    User me;
    me.first_name = "Ehsan";
    me.last_name = "Ahmed";
    //me.status = "awesome";

    std::cout << "first name: " << me.first_name << "\n";
    std::cout << "last name: " << me.last_name << "\n";
    std::cout << "status: " << me.get_status()<< "\n";

    //system("pause>0");
}