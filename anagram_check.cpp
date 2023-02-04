#include <iostream>
#include <string>
#include <algorithm>

bool isAnagram(std::string s1, std::string s2) {
    
    std::transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    std::transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

   
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

     
    return (s1 == s2);
}

int main() {
    std::string str1 = "silent";
    std::string str2 = "listen";

    if (isAnagram(str1, str2)) {
        std::cout << "The strings are anagram of each other";
    }
    else {
        std::cout << "The strings are not anagram of each other";
    }

    return 0;
}