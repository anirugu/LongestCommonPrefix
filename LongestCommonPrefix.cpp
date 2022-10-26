#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string>& strs)
{
	if (strs.size() == 0)
		return "";
	else if (strs.size() == 1)
		return strs[0];
	else {
		// using smallest string to loop less
		string small = min(strs[0], strs[1]);
		for (int i = 1; i < strs.size() - 1; i++)
		{
			exchange(strs[i], strs[i + 1]);
		}
	}

	return "hello";
}

int main()
{
	vector<string> vect{ "flower", "flow", "flight" };
	longestCommonPrefix(vect);
	std::cout << "Hello World!\n";
}