//代码参考liuchuo
//scanf和printf效率比cin和cout高很多
#include <iostream>
#include <list>
#include <cstdio>
using namespace std;

struct node{
	int id;
	int de;
	int cai;
};

int cmp(struct node a, struct node b) {
	if ((a.de + a.cai) != (b.de + b.cai)) {
		return (a.de + a.cai) > (b.de + b.cai);
	}else if (a.de != b.de) {
		return a.de > b.de;
	} else
	return a.id < b.id;
}

int main(){
	list<node> v[4];
	node temp;
	int n,l,h,count = 0;
	scanf("%d %d %d", &n, &l, &h);
	for(int i = 0; i < n; ++i) {
		scanf("%d %d %d", &temp.id, &temp.de, &temp.cai);
		if(temp.de >= l && temp.cai >= l)count++;
		else continue;
		if(temp.de >= h && temp.cai >= h) v[0].push_back(temp);
		else if(temp.de>= h) v[1].push_back(temp);
		else if(temp.de < h && temp.cai < h && temp.de >= temp.cai) v[2].push_back(temp);
		else v[3].push_back(temp);
	}
	printf("%d\n", count);
	for (int i = 0; i < 4; i++) {
		v[i].sort(cmp);
		while (!v[i].empty()) {
			temp = v[i].front();
			v[i].pop_front();
			printf("%d %d %d\n",temp.id,temp.de,temp.cai);
		}
	}
	return 0;
}
