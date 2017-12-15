// conditional.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
	int n;
	cin >> n;
	// your code goes here
	if (n == 1)
		cout << "One " << n << endl;
	else if (n == 2)
		cout << "Two " << n << endl;
	else if (n == 3)
		cout << "Three " << n << endl;
	else if (n == 4)
		cout << "Four " << n << endl;
	else if (n == 5)
		cout << "Five " << n << endl;
	else if (n == 6)
		cout << "Six " << n << endl;
	else if (n == 7)
		cout << "Seven " << n << endl;
	else if (n == 8)
		cout << "Eight " << n << endl;
	else if (n == 9)
		cout << "Nine " << n << endl;
	else 
		cout << n << " Greater than 9" << endl;

	return 0;
}
