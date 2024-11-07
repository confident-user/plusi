#include<iostream>
#include<vector>
#include<cstdlib>
#include<fstream>
#include<cstring>
using namespace std;
main()
{
    ofstream fout("output.txt");
    int i,j,n,m,a,diag = 1,k = 1,ks1 = 0,ks2 = 0;
    string str;
    cout << "Enter square`s side" << endl;
    cin >> a;
    cin.ignore();
    cout << "Enter the corner you want to start from (top left, top right, bottom left, bottom right)" << endl;
    getline(cin,str);  
    int y = 0,x = 0;
    n = a * a;
    while (n > 0) {
        n = n/ 10;
        ks1++;
    }
    vector < vector <int> > matr(a, vector <int> (a) );
    for (i = 0;i < a; i++) {
        for (j = 1; j <= diag;j++) {
            matr[y][x] = k;
            if (diag % 2 != 0) {
                y++;
                if (x!=0) {
                    x--;
                }
            }
            if (diag % 2 == 0) {
                if (y!=0) {
                    y--;
                }
                x++;
            }
            k++;
        }
        diag++;
    }
    diag = diag - 2;
    if (diag % 2 != 0) {
        x--;
        y++;
    }
    else {
        x++;
        y--;
    }
    for (i = 0;i < a - 1; i++) {
        for (j = 1; j <= diag;j++) {
            matr[y][x] = k;
            if (diag % 2 != 0) {
                if (y!=a-1) {
                    y++;
                    x--;
                }
                else {
                    x++;
                }

            }
            if (diag % 2 == 0) {
                if (x!=a-1) {
                    y--;
                    x++;
                }
                else {
                    y++;
                }
                
            }
            k++;
        }
        diag = diag - 1;
    }
    if (str == "top right") {
        for (i=0;i<a;i++) {
        	for (j=0;j<a/2;j++) {
        	swap(matr[i][j],matr[i][a - j - 1]);
			}
    	}
    }
    if (str == "bottom left") {
        for (i=0;i<a;i++) {
        	for (j=0;j<a/2;j++) {
        	swap(matr[j][i],matr[a - j - 1][i]);
			}
    	}
    }
    if (str == "bottom right") {
    	
        for (i=0;i<a;i++) {
        	for (j=0;j<a/2;j++) {
        	swap(matr[j][i],matr[a - j - 1][a - i - 1]);
			}
    	}
    	if (a&2!=0) {
    		for (i=0;i<a/2;i++) {
    			swap(matr[a/2][i],matr[a/2][a-i-1]);
			}
		}
    }
	for (i=0;i<a;i++) {
        for (j=0;j<a;j++) {
            n = matr[i][j];
            while (n > 0) {
            n = n / 10;
            ks2++;
            }
            for (m = 0; m < ks1 - ks2; m++) {
                cout << " ";
                fout << " ";
            }
            ks2 = 0;
            cout << matr[i][j] << " ";
            fout << matr[i][j] << " ";
        }
        cout << endl;
        fout << endl;
    }
    system("pause");
}

