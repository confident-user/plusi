#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>

using namespace std;
int main()
{
	int n,i,k = 0,j, sum = 0, min = 9999, result,maxroom=0, minroom;
	std::vector<int> c;
	cout << "Введите колличество комнат" << endl;
	cin >> n;
	int b;
	cout << "Введите номера комнат, в которых хотите поставить телефоны"<<endl;
	for (i = 1 ; i <= n ; i++) {
	    cin>>b;
        c.push_back(b);
        if (b>maxroom) {
            maxroom = b;
        }
        if (i==1) {
            minroom = b;
        }
        if (b<minroom) {
            minroom = b;
        }
    }
    for (i = minroom ; i <= maxroom; i++) {
        for (j = 0 ; j < c.size(); j++) {
            sum = sum + abs( c[j] - i );
        }
        if (sum < min) {
            result = i;
            min = sum;
        }
        sum = 0;
    }
    cout << result <<" - В этой комнате нужно разместить коммутатор" << endl;
	system("pause");  
	
}