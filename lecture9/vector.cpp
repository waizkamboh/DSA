#include <iostream>
#include <vector>
using namespace std;

int main() {
    //vector syntax1
    vector<int> vec1;
    //vector syntax2
    vector<int> vec2 = {1,2,3};
    //vector syntax3
    vector<int> vec3(3, 0);
    cout << vec2[0] << endl;
    cout << vec2[1] << endl;
    cout << vec2[2] << endl;
    cout << vec3[0] << endl;
    cout << vec3[1] << endl;
    cout << vec3[2] << endl;
    vector<int> vec4 = {1, 2, 3, 0, 0};
    for (int val : vec4)
    {
        cout << val << endl;

    }
    
    
    return 0;
}