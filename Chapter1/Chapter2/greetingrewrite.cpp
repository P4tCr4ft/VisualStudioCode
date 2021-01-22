// Greeting rewrite more flexible form of output without storing each line
// in a local variable

# include <iostream>
# include <string>

int main()
{
    // ask for the person's name
    std::cout << "Please enter your first name: ";

    // read the name
    std::string name;   // define variable called name
    std::cin >> name;   // read into name

    // build the message we intend to write
    const std::string greeting = "Hello, " + name + "!";

    // we have to rewrite this part...

    // the number of blanks surrounding the greeting
    const int pad = 1;

    // we know there are always 3 rows, the greeting and the top and bottom rows
    // total number of rows to write
    const int rows = pad * 2 + 3;

    // separate the output from the input
    std::cout << std::endl;

    // write rows rows of output
    int r = 0;

    // invariant: we have written r rows so far
    while (r != 0)
    {
        // write a row of output (as in 2.4)
        std::cout << std::endl;
        ++r;
    }

    return 0;
}
