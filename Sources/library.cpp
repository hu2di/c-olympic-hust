#include<stdio.h>
#include<stdlib.h>
#include<algorithm>

using namespace std;

int n;
int a[10001];

void input(){
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
			scanf("%d", &a[i]);
}

void khoi_tao(){
	long dem;
	int tg;
	dem = 0;
	for(int i=1;i<=n;i++)
			for(int j=i+1;j<=n;j++)
					if(a[i]>a[j]){
						dem++;
						tg = a[i];
						a[i] = a[j];
						a[j] = tg;
					}
	std::sort(a, a+n);
	printf("%d", dem);
}

int main(){
	input();
	khoi_tao();
	return 0;
}
