#include<iostream>
#include<string>


int main()
{
    std::cout << "Give me a name: ";
    std::string name;
    std::cin >> name;

    std::cout << "Give me a theme: ";
    std::string theme;
    std::cin >> theme;

    std::cout << "Give me a place: ";
    std::string place;
    std::cin >> place;

    std::cout << "Give me a day of the week: ";
    std::string day;
    std::cin >> day;

    std::cout << "Give me a time: ";
    std::string time;
    std::cin >> time;

    std::cout << "Give me a verb: ";
    std::string verb;
    std::cin >> verb;  

    std::cout << "Give me a/an Animal: ";
    std::string animal;
    std::cin >> animal;

    std::cout << "Give me a body part: ";
    std::string body_part;
    std::cin >> body_part;

    std::cout << "Give me contact information:";
    std::string info;
    std::cin >> info;

    std::cout <<"\n"  << name << " is having a " << theme << " party!\nIt's going to be at " 
                    << place << " on " << day << ".\n" "Please make sure to show up at " << time << 
                    ", or else you will be required to " 
                    << verb << " a/an " << animal << " with your " << body_part << ".\nRSVP at " << info <<  ".\n";
    
    return 0;
}