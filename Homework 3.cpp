#include <iostream>
#include<locale.h>
using namespace std;
int main()
{
    char s[2000];
    int a=0 , c = 0;
    setlocale(LC_ALL, "Russian");
    cout << "Количество слов в строке " << endl;
    cin.get(s, 2000);
for(int i=0;i<strlen(s);i++) 
    {
    if (s[i] == ' ' )
        if (a == 0)continue;
        else a = 0, c++;
    else
        a++;
    }
    cout << "Количество слов в строке " << c;
    cin.get(); cin.get();
    return 0;
}