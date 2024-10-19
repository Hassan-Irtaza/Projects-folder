#include <iostream>
using namespace std;

int main() {
    char n;
    cout<<"Enter a letter: ";
    cin>>n;
    
    switch (n)
    {
    case 'A':
    case 'a':
        cout<<n<<" is a vowel";
        break;
    case 'E':
    case 'e':
        cout<<n<<" is a vowel";
        break;
    case 'I':
    case 'i':
        cout<<n<<" is a vowel";
        break;
    case 'O':
    case 'o':
        cout<<n<<" is a vowel";
        break;
    case 'U':
    case 'u':
        cout<<n<<" is a vowel";
        break;    
    default:
        cout<<n<<" is a consonant";
        break;
    }
    return 0;
}