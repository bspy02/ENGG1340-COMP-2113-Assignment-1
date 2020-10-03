#include <iostream> 
#include <cctype>

using namespace std; 
char CaesarShift(char text, int shift)
{
      if(isalpha(text))
      {
        if (isupper(text)) return tolower(char(int(text+shift-65)%26 +65));
        else return toupper(char(int(text+shift-97)%26 +97));
      }
      return text;
}

int main() 
{ 
  char type, text;
  int shift;
  cin >> type >> shift;
  if (type =='d'){shift = -shift;}
	while (text != '!'){cin >> text;cout << CaesarShift(text,shift);}	
  return 0; 
} 