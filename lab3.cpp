#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	ifstream inFile("file.in.txt", ios::in);//Ū��
	if (!inFile) {
		cerr << "Failed opening" << endl;
		exit(1);
	             }
	
	int c = 0;
	vector<int> Cows;//�s�������q
	int x = -1;
	while (inFile >>  c){
		if (c != 0){
			x++;
		           }
		if (x > 0){
			Cows.push_back(c);
		           }
	                    }
	sort(Cows.begin(), Cows.end());//�Ƨ�
	reverse(Cows.begin(), Cows.end());
	int weight = 0;
	for (int i = 0; i < 5; i++){
		weight = weight + Cows[i];
	                           }
	cout << weight;

	cin.get();
	return 0;
}