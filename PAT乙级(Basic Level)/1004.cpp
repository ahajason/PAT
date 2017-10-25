#include <iostream>
using namespace std;
struct stu{
	string name;
	string id;
	int score;
};
int main(){
	stu stu[500]; //数组写大点，写100太小了
	int maxIndex = 0;
	int minIndex = 0;
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>stu[i].name>>stu[i].id>>stu[i].score;
		if(stu[i].score > stu[maxIndex].score) {
			maxIndex = i;
		}
		if(stu[i].score < stu[minIndex].score) {
			minIndex = i;
		}
	}
	cout<<stu[maxIndex].name<<" "<<stu[maxIndex].id<<endl;
	cout<<stu[minIndex].name<<" "<<stu[minIndex].id<<endl;
	return 0;
}