#include <iostream>
#include <string>
#include <vector>


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
class User //default is private for the member values
{
    static int user_count;
    std::string status = "Gold"; //assigned a default value
    
public:    
    static int get_user_count() {
        //std::cout << user_count << std::endl; //don't use this
        return user_count;
    }
    std::string first_name;
    std::string last_name;
    std::string get_status() {
        return status;
    }
    
    User() //default constructor is the one with no parameters, you can edit it by explicitly writing it out and adding further code to execute, as done here.
    {
        //std::cout << "Constructor\n";
        user_count++;
    }
    
    User(std::string first_name, std::string last_name, std::string status)//if you're using a custom constructor, and don't define a default constructor, then calling the default constructor will produce an error.
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
        user_count++;
    }
    ~User()
    {
        //std::cout << "Desctructor\n";
        user_count--;
    }
    void set_status(std::string status)
    {
        if (status == "Gold" || status == "Silver" || status == "Bronze") {
            this->status = status;
        }
        else {
            this->status = "No status";
        }
        
    }
    friend void output_status(User user);
    friend std::istream& operator >> (std::istream& input, User& user);
    friend std::ostream& operator << (std::ostream& output, const User user);

};

int User::user_count = 0;

int add_user_if_not_exist(std::vector<User> users, User user) {
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].first_name==user.first_name &&
            users[i].last_name==user.last_name)
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

std::istream& operator >> (std::istream& input, User &user)
{
    input >> user.first_name >> user.last_name>>user.status;
    return input;
}

void output_status(User user)
{
    std::cout << user.status << std::endl;
}

int main()
{

    User user;

    std::cin >> user;
    /*
    user.first_name = "Ehsan";
    user.last_name = "Ahmed";
    */
    std::cout << user << std::endl;
    //output_status(user);









    /*
    User user, user1, user2, user3, user4;
    std::cout << User::get_user_count() << std::endl;
    user.~User();
    std::cout << User::get_user_count() << std::endl;
    */
    
    /*
    User me;
    me.set_status("tacos");
    std::cout << me.get_status() << std::endl;
    */

    //User me;
    //User user1("Ehsan", "Ahmed", "silver");
    //std::cout << user1.get_status() << std::endl;
    
    
    //User me;
    //me.first_name = "Ehsan";
    //me.last_name = "Ahmed";
    //me.status = "awesome";

    /*
    * //used along with the add_user_if_not_exist
    std::vector<User> users;
    User user1, user2, user3;
    
    user1.first_name = "Ehsan";
    user1.last_name = "Ahmed";

    user2.first_name = "Arsalan";
    user2.last_name = "Ahmed";

    user3.first_name = "Sumit";
    user3.last_name = "Bhardwaj";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User user4;
    user4.first_name = "Arsalan";
    user4.last_name = "Ahmed";

    std::cout << add_user_if_not_exist(users, user4) << std::endl;

    std::cout << users.size() << std::endl;
    */


    //users.push_back(me);
    //users.push_back(User());

    //std::cout << users[0].first_name << "\n";
    //std::cout << users[1].first_name << "\n";

    //std::cout << "first name: " << me.first_name << "\n";
    //std::cout << "last name: " << me.last_name << "\n";
    //std::cout << "status: " << me.get_status()<< "\n";

    //system("pause>0");
}