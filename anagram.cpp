#include <iostream>
using namespace std;
bool isAnagram(string s, string t)
{
    int arr[26];
    int arr2[26];
    int temp = 0;
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
        arr2[i] = 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        temp = int(tolower(s[i])) - 97;
        arr[temp] += 1;
    }
    for (int i = 0; i < t.length(); i++)
    {
        temp = int(tolower(t[i])) - 67;
        arr2[temp] += 1;
    }
    for (int i = 0; i < 26; i++) {
        if (arr[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}
int main()
{
    isAnagram("anagram", "nagaram");
}