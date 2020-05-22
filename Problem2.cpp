#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int inputNum = 0;
    cout << "Input:";
    cin >> inputNum;
    vector<int>arr;

    for(int i=0, j=1; i < inputNum; i++,j++){
        arr.push_back(j);
    }
    cout << "所有的數字是:";
    for(int i = 0; i < inputNum; i++){
        cout << arr[i] << ' ';
    }
    cout << "\n其中 ";

    for(int i = 0; i < inputNum; i++){
        if(arr[i] % 3 == 0 && arr[i] % 5 != 0){
            cout << arr[i] << ' ';
            arr.erase(arr.begin()+i);
        }
    }
    cout << "被剔除:";

    for(int i = 0; i < inputNum; i++){
        if(arr[i] % 3 != 0 && arr[i] % 5 == 0){
            cout << arr[i] << ' ';
            arr.erase(arr.begin()+i);
        }
    }
    cout << "被剔除;但是 ";

    for(auto a:arr){
        if(a % 3 == 0 && a % 5 == 0){
            cout << a << ' ';
        }
    }
    cout << "被保留\n所以剩下來的數字是";
    for(auto a:arr){
        cout << a << ' ';
    }
    cout << "因此\nOutput: ";
    cout << arr.size();

    return 0;
}
