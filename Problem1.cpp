#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


string reverse(string input){
    reverse(input.begin(),input.end());

    return input;
}

string multiReverse(string input){
    vector<char> strArr;
    string output = "";
    string temp = "";

    for(auto c:input)
        strArr.push_back(c);
    for(auto c:strArr){
        if(c == ' '){
            reverse(temp.begin(),temp.end());
            output += temp;
            output += ' ';
            temp = "";
            continue;
        }
        temp += c;
    }
    reverse(temp.begin(),temp.end());
    output += temp;
    return output;
}


int main()
{
    string first = "junyiacademy";
    string second = "flipped class room is important";

    cout << reverse(first) << endl;
    cout << multiReverse(second);
    return 0;
}

