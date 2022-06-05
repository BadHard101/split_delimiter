#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s = "/ob1/ob3/ob4";
    string delimiter = "/";
    vector<string> path;

    size_t pos = 0;
    string token;
    while ((pos = s.find(delimiter)) != string::npos) {
        token = s.substr(0, pos);
        path.push_back(token);
        s.erase(0, pos + delimiter.length());
    }
    path.push_back(s);

    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i];
    }

}