using namespace std;
#include <iostream>
#include <string>
#include <stack>
#include <cstring> 

string IsPalindrom(string word)
{
    stack<char> charsStack;

    for (int i = 0; i < word.length(); i++)
    {
        charsStack.push(word[i]);
    }

    for (int k = 0; (charsStack.size() != 0); k++)
    {
        char charHolder = charsStack.top();
        charsStack.pop();

        if (charHolder != word[k])
            return "Not Palindrome";
    }

    return "Palindrome";
}

int main()
{
    cout << "\t\tAlgorithm\n\n";


    cout << "Test \"1\" : " << IsPalindrom("1") << "\n";

    cout << "Test \"2\" : " << IsPalindrom("2") << "\n";

    cout << "Test \"3\" : " << IsPalindrom("3") << "\n";
    
    cout << "Test \"4\" : " << IsPalindrom("4") << "\n";

   
}
