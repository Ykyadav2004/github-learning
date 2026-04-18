#include<iostream>
#include<vector>
using namespace std;


int getlength(char name[]){

  int count = 0;

  for(int i= 0; name[i]!= '\0';i++){
    count++;
  }

  return count;
}

void swapping(char name[],int n){
  int s = 0;
  int e = n-1;

  while(s<e){
    swap(name[s++],name[e--]);
    
  }
}


bool palindrome(char name[],int n){
   int s = 0;
  int e = n-1;

  while(s<=e){
    if(name[s]==name[e]){
      s++;
      e--;
    }else{ 
      return false;
    } 
  }
  return true;
}


char tolowercase (char ch){

  if(ch >= 'a' && ch <= 'z'){
    return ch;
  }else{
    char temp = ch;
    temp = temp - 'A' + 'a';
    return temp;
  }
}

 

char tolowercase(char ch){
        if(ch >= 'a' && ch <= 'z'){
            return ch;
        } else if(ch >= 'A' && ch <= 'Z'){
            return ch - 'A' + 'a';
        }
        return ch;
    }

    bool isPalindrome(string s) {
        string temp = "";

        // Step 1: remove special characters + convert to lowercase
        for(int i = 0; i < s.length(); i++){
            if((s[i] >= 'a' && s[i] <= 'z') ||
               (s[i] >= 'A' && s[i] <= 'Z') ||
               (s[i] >= '0' && s[i] <= '9')){
                
                temp += tolowercase(s[i]);
            }
        }

        // Step 2: check palindrome
        int start = 0;
        int end = temp.length() - 1;

        while(start <= end){
            if(temp[start] != temp[end]){
                return false;
            }
            start++;
            end--;
        }

        return true;
    }












int main() 
{


char name[20];

cout<<"enter your name"<<endl;
cin>> name;


cout<<"your name us ";
cout<<name<<endl;



cout<<getlength(name);

int nnnn = getlength(name);

swapping(name,nnnn);


cout<<"your name us ";
cout<<name<<endl;


cout<<palindrome(name,nnnn);






}


