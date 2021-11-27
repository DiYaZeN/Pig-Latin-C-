#include <string>
#include <iostream>

using namespace std;

string pig_it(string str)
{
  string newWord;
  int i=0;
  string word;
  char first;
  
  while(str.size()>0){
    
    while(str[0]==' '){
       str.erase(0,1);      
    }
    
    i =0;
    while(str[i]!=' ' && i<str.size()){
      i++; 
    }
     word=str.substr(0,i);
    str.erase(0,i);
    
    first=word[0];
    
    if(first !=','&& first!='.' && first!='!' && first!='?'){
    word.append(1,first);
    word.append("ay");
    word.erase(0,1);
    }
    
     newWord=newWord+" "+word;
   while(newWord[0]==' '){
       newWord.erase(0,1);      
    }
    
  }
  
 
  return newWord;
}
