#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string word ;
//	size_type cnt = 0;
	int num = 10;
	vector<int> text;
//	cin >> word;
//	while (cin >> word){
//	  text.push_back(word);
//	}
	for(vector<int>::size_type ix = 0; ix != 10; ++ix ){
		text.push_back(ix);
	}
	for(int i = 0; i < num; ++i){
	 cout<<text[i]<<endl;
	}
//	cout<<text<<endl;
	return 0;
}
