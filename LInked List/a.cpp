#include <iostream>
#include <string>

using namespace std;

string smallestWord(int n) {
    
    string word = "";

    while (n > 26) {
        word += 'a';
        n -= 1;
    }
    
    word += ('a' + (n - 1));
    
 
    while (word.length() < 3) {
        word += 'z';
    }
    
    return word;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        cout << smallestWord(n) << endl;
    }
    
    return 0;
}
