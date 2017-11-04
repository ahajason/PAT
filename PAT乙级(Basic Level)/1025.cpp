#include <iostream>
#include <list>
#include <cstdio>
using namespace std;

struct node {
	int data;
	int next;
};

int main() {
	//读入到指针数组
	node node[100005];
	int k;
	int begin,n;
	scanf("%d%d%d",&begin,&n,&k);
	int temp;
	for(unsigned i = 0; i < n; ++i) {
		scanf("%d",&temp);
		scanf("%d%d",&node[temp].data,&node[temp].next);
	}
	//翻转
	//开始题目理解错误以为是前k个翻转，而题目是[将L中每K个结点反转]。
	list<int> list,tlist,tlist2;
	int index = begin;
	int j = 1;
	while(index != -1) {
		if(j%k == 0) {
			tlist.push_front(index);
			while(!tlist.empty()) {
				list.push_back(tlist.front());
				tlist.pop_front();
			}
		}else{
			tlist.push_front(index);
		}
		index=node[index].next;
		j++;
	}
	//输出
	while(!tlist.empty()) {
		list.push_back(tlist.back());
		tlist.pop_back();
	}
	while(!list.empty()) {
		printf("%05d %d ",list.front(),node[list.front()].data);
		list.pop_front();
		if(list.empty()){
			printf("-1");
		}else{
			printf("%05d\n",list.front());
		}
	}
	return 0;
}
