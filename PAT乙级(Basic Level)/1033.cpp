#include <iostream>
#include <string>
using namespace std;
int main(){
	string s1,s2;
	bool shift = true;
	int set[300] = {0};
	getline(cin, s1);
	getline(cin, s2);
	for(unsigned i = 0; i < 26; ++i) {
		char ch = i+'A';
		if(s1.find(ch) != string::npos) {
			set[ch] = 1;
		}
	}
	for(unsigned i = 0; i < 10; ++i) {
		char ch = i+'0';
		if(s1.find(ch) != string::npos) {
			set[ch] = 1;
		}
	}
	if(s1.find('.') != string::npos) {
		set['.'] = 1;
	}
	if(s1.find(',') != string::npos) {
		set[','] = 1;
	}
	if(s1.find('-') != string::npos) {
		set['-'] = 1;
	}
	if(s1.find('_') != string::npos) {
		set['_'] = 1;
	}
	if(s1.find('+') != string::npos) {
		shift = false;
	}
	for(unsigned i = 0; i < s2.length(); ++i) {
		char ch = s2[i];
		if( ch >= 'a' &&  ch <= 'z' && !set[ch-32]) {
			cout<<ch;

		}else if( ch >= '0' &&  ch <= '9' && !set[ch]) {
			cout<<ch;
		}else if( ch >= 'A' &&  ch <= 'Z' && shift && !set[ch]) {
			cout<<ch;
		}else if( !(ch >= 'a' &&  ch <= 'z') && !(ch >= '0' &&  ch <= '9') && !(ch >= 'A' &&  ch <= 'Z') && !set[ch]) {
			cout<<ch;
		}
	}
}
