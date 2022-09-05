#include<bits/stdc++.h>

using namespace std;

int main() {
	while (true) {
		int N;
		cin>> N;
		if (N==0) {
            break;
        }
		else {
            vector < int > v;

		while (N--) {
            int num;
            cin >> num;
            if(num != 0){
                v.push_back(num);
            }
        }
        if(v.size() == 0){
            cout << 0 << endl;
        }
        else{
            cout<< v[0];
            for(int i = 1; i< v.size(); i++){
                cout << " " << v[i];
            }
            cout << endl;
            }
        }
    }
}
