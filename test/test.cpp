#include <iostream>
#include <string>
#include <vector>
using namespace std;
 int main()
{
	string str = "123";
	cout << str << endl;
	str.clear();
	cout << str << endl;
	str.assign("123456");
	return 0;
}
