
#include <iostream> 
#include <algorithm> 
using namespace std; 
int main() 
{ 
	int v[10] = { 9, 4, 7, 2, 5, 10, 11, 12, 1, 3 }; 

	int* i1; 
	i1 = std::min_element(v+0,v+10); 

	cout << *i1 << "\n"; 
	return 0; 
}
