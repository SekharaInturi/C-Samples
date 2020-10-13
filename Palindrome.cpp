
#include <iostream>
#include <string>

using namespace std;

string removeSpaces(string input);
bool palindromes(string str) ;

int main()
{
  string inputstr ;
  cout << "Please enter a string: ";
  getline(cin, inputstr);
  string outputstr= removeSpaces(inputstr) ;
  for(int i = 0; i < outputstr.length(); i++) 
  {
     outputstr.at(i) = toupper(outputstr.at(i));
  }
  bool Rvalue=palindromes(outputstr );
  if (Rvalue)
     std::cout <<outputstr <<": is a palindrome.\n";
   else
     std::cout <<outputstr <<": is NOT a palindrome.\n";  
  return 0;       
}

/* rmeove space function return string */
string  removeSpaces(string input)
{
 int length = input.length();
  for (int i = 0; i < length; i++) {
     if(input[i] == ' ')
     {
        input.erase(i, 1);
         length--;
         i--;
     }
  }
  return input ;
}

/* Palindromes check function return boolen */
bool palindromes(string outputstr )
{

   if (outputstr == string(outputstr.rbegin(), outputstr.rend())) 
     {
        return true;
     } 
     return false ;
}

   


