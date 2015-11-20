#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main()
{
    ofstream output;
    string input;
    std::string firstname = "";  
    std::string lastname = "";  
    int age = 0;  
    cout << "First name: \t";
    getline(cin, firstname);   
    cout << "Last name: \t";
    getline(cin, lastname);
    cout << "Age: \t";
    getline(cin, input);
    stringstream(input) >> age;

	char* x = new char[firstname.length() + lastname.length()+age];

	printf(x, "First Name: \t %s \nLast Name: \t %s \nAge: \t %d \n", firstname.c_str(), lastname.c_str(), age );

    output.open ("output_file.txt");
    output << str;   
    output.close();
    return 0;
}
