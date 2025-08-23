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

    //vector function
    vec1.push_back(3);
    cout << vec1[0] << endl;
    cout << "Size efore poping:" << vec2.size() << endl;
    vec2.pop_back();
    cout << "Size after poping:" << vec2.size() << endl;

    cout << vec4.front() << endl;
    cout << vec4.back() << endl;
    return 0;
}