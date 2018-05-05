#include <QCoreApplication>
#include <iostream>


using namespace std;

void getUpperCaseString(string& str)
{
    char ch;

    if (str.length() != 1 && str[0] != 'q')
    {
        for (int i = 0; i < str.length(); ++i) {
            ch = str[i];
            str[i] = (char)toupper(ch);
        }
    }
}

int main(int argc, char *argv[])
{
    std::cout << "Start program.\n";
    QCoreApplication a(argc, argv);

    cout << "Enter a string (q to quit):" << endl;
    string input;
    getline(cin, input);
    cout << "Your initial string is: " << input << endl;

    getUpperCaseString(input);
    cout << "Result string is: " << input << endl;
    cout << "Bye ";
    return a.exec();
}
