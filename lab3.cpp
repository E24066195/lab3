#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	ifstream inFile("file.in.txt", ios::in);//讀檔
	if (!inFile) {
		cerr << "Failed opening" << endl;
		exit(1);
	             }
	
	int c = 0;
	vector<int> Cows;//存牛隻重量
	int x = -1;
	while (inFile >>  c){
		if (c != 0){
			x++;
		           }
		if (x > 0){
			Cows.push_back(c);
		           }
	                    }
	sort(Cows.begin(), Cows.end());//排序
	reverse(Cows.begin(), Cows.end());
	int weight = 0;
	for (int i = 0; i < 5; i++){
		weight = weight + Cows[i];
	                           }
	cout << weight;

	cin.get();
	return 0;
}