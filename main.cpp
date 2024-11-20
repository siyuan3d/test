#include <iostream>
#include <ctime>

using namespace std;

time_t now = time(nullptr);
char *tm = ctime(&now);
int main()
{
    cout << "Hello,world" << endl;
    return 0;
}