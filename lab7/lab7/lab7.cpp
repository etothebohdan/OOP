#include <stack>
#include <iostream>

using namespace std;
void main() {
	stack <int> S;
	S.push(8);
	S.push(7);
	int x = S.size();
	while (!S.empty())
	{
		printf("&d", S.top());
		S.pop();
		cin.get();
	}
}