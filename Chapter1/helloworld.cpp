// ask for a person's name, and greet the person
# include <iostream>
# include <string>

// int main()
// {
//     // ask for the person's name
//     std::cout << "Please enter your first name: ";

//     // read the name
//     std::string name;   // define variable called name
//     std::cin >> name;   // read into name

//     // write a greeting
//     std::cout << "Hello, " << name << "!" << std::endl;
//     return 0;
// }

// More elaborate greeting
// int main()
// {
//     // ask for the person's name
//     std::cout << "Please enter your first name: ";

//     // read the name
//     std::string name;   // define variable called name
//     std::cin >> name;   // read into name

//     // build the message we intend to write
//     const std::string greeting = "Hello, " + name + "!";

//     // build the second and fourth lines of output
//     const std::string spaces(greeting.size(), ' ');
//     const std::string second = "* " + spaces + " *";

//     // build the first and fifth lines of output
//     const std::string first(second.size(), '*');

//     // write it all
//     std::cout << std::endl;
//     std::cout << first << std::endl;
//     std::cout << second << std::endl;
//     std::cout << "* " << greeting << " *" << std::endl;
//     std::cout << second << std:: endl;
//     std::cout << first << std::endl;

//     return 0;
// }

// Exercises
// int main()
// {
//     const std::string hello = "Hello";
//     const std::string message = hello + ", world" + "!";

//     const std::string exclam = "!";
//     // No for below because + operator is left associative, 
//     //we cannot use it for a string literal and a string literal. Is ok for a string and a string literal, or a string and a string., 
//     // const std::string mess2 = "Hello" + ", world" + exclam;
// }

// 1-3 and 1-4
// int main()
// {
//     {
//         const std::string s = "a string";
//         std::cout << s << std::endl;
//         {
//             const std::string s = "another string";
//             std::cout << s << std::endl;
//         }
//     }
// }

// 1-5
// int main()
// {
//     {
//         std::string s = "a string";
//         std::string x = s + ", really";
//         std::cout << s << std::endl;
//         std::cout << x << std::endl;
//     }
//     return 0;
// }

// 1-6
int main()
{
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl << "And what is yours? ";
    std::cin >> name;
    std::cout << "Hello, " << name << "; nice to meet you too!" << std::endl;
    return 0;
}
