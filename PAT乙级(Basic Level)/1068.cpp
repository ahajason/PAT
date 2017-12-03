//该点的颜色与其周围相邻像素的颜色差充分大
//独一无二颜色的那个像素点
#include <iostream>
#include <cstdio>
using namespace std;
int a[1005][1005];
int flag[2<<24] = {0};
int main(){
	int m,n;
	int tol;
	cin>>m>>n>>tol;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			scanf("%d",&a[i][j]);
			flag[a[i][j]]++;  
		}
	}
	int x,y,z,count = 0;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < m; ++j){
			int ip,im,jp,jm;



			if(i == 0)  im = i + 1;
			else im = i - 1;
			
			if(j == 0)  jm = j + 1;
			else jm = j - 1;
			
			if(i == n - 1)  ip = i - 1;
			else ip = i + 1;

			if(j == m - 1)  jp = j - 1;
			else jp = j + 1;
			
			if((( a[i][j] - a[im][jm] > tol || a[im][jm] - a[i][j] > tol )&&
				( a[i][j] - a[ip][jm] > tol || a[ip][jm] - a[i][j] > tol )&&
				( a[i][j] - a[im][jp] > tol || a[im][jp] - a[i][j] > tol )&&
				( a[i][j] - a[ip][jp] > tol || a[ip][jp] - a[i][j] > tol )&&
				( a[i][j] - a[i ][jm] > tol || a[i ][jm] - a[i][j] > tol )&&
				( a[i][j] - a[i ][jp] > tol || a[i ][jp] - a[i][j] > tol )&&
				( a[i][j] - a[im][j ] > tol || a[im][j ] - a[i][j] > tol )&&
				( a[i][j] - a[ip][j ] > tol || a[ip][j ] - a[i][j] > tol )
				)&&flag[a[i][j]] == 1)
			{
				y = i+1;
				x = j+1;
				z = a[i][j];
				count++;
			}
		}
	}
	if(count==1) {
		cout<<"("<<x<<", "<<y<<"): "<<z;
	}else if(count==0) {
		cout<<"Not Exist";
	}else{
		cout<<"Not Unique";
	}
	return 0;
}