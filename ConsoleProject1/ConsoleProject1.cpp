#include <iostream>
#include <string>
#include "user.h"
#include "teacher.h"
#include "student.h"

void do_something(User& user)
{
    user.output();
}

int main()
{

    Teacher teacher;
    Student student;
    User& u1 = teacher;
    User& u2 = student;
    //u1.output();
    //u2.output();
    do_something(u1);
    do_something(u2);

 //   User user;

   // std::cin >> user;
    /*
    user.first_name = "Ehsan";
    user.last_name = "Ahmed";
    */
  //  std::cout << user << std::endl;
    //output_status(user);

    
    /*
    teacher.first_name = "dude";
    std::cout << teacher.first_name << std::endl;
    teacher.output();
    */






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