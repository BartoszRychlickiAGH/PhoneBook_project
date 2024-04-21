#include <iostream>
#include <map>

using std::endl;
using std::cin;
using std::cout;
using std::string;
using std::map;
using std::pair;

bool Contains(string &name,map<string,string>&mapa) {
    
    for (auto i = mapa.begin();i != mapa.end(); i++) {
        if (name == i->first) {
            return true;
        }
    }
    return false;
}


int main()
{
    string input{};
    map<string, string>PhoneBook;
    while (true) {
        cout << "Enter name: " << endl;
        cin >> input;
        if (input == "exit") {
            break;
        }
        else {
            if (Contains(input, PhoneBook)) {
                cout << PhoneBook[input] << endl;
            }
            else {
                string number{ "" };
                cout << "Enter number: " << endl;
                cin >> number;
                PhoneBook.insert(pair<string, string>(input, number));
            }
        }
    }
    


    return 0;
}