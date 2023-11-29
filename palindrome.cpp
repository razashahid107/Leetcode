// 125. Valid Palindrome
#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int length = s.length();
    int counter_initial = 0;
    string str = "";
    // convert string to lowercase 
    for (int i = 0; i < length; i++) {
        if (isalpha(s[i])) {
            str += tolower(s[i]);
        }
    }
    int counter_final = str.length()-1;
    while (counter_initial != counter_final) {
        char initial = str[counter_initial];
        char final = str[counter_final];
        if (initial != final){
            return false;
        }
        cout << "ran";
        counter_initial++;
        counter_final--;
    }
    return true;
}
int main(){
    string s = "amanaplanacanalpanama";
    isPalindrome("aaa");
}