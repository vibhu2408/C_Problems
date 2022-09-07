#include <iostream> 
using namespace std;
/* 01--
*****
*****
*****
*****
*****
*/
/* 01
void pattern(int n) {
    int i, j;
    for(int i =0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
*/

/* 02
*
**
***
****
*****
*/
/* 02
void pattern (int n) {
    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
*/

/* 03 
1
12
123
1234
12345
*/
/* 03
void pattern (int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << " " << j+1;
        }
        cout << endl;
    }
}
*/

/* 04
1
22
333
4444
55555*/

/* 04
void pattern(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            cout << i + 1;
        }
        cout << endl;
    }
}
*/

/* 05

*****
****
***
**
*

*/

/*
void pattern(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
*/

/* 06
12345
1234
123
12
1
*/

/* 06
void pattern(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i; j++) {
            cout << j + 1;
        }
        cout << endl;
    }
}
*/

/* 07
     *
    ***
   *****
  *******
 *********
*/

/* 07
void pattern(int n) {
    int j;
    for(int i = 0; i < n; i++) {
        for(j = 0; j < n - i - 1; j++)
            cout << " ";
            for(int k = 0; k < 2*i + 1; k++) {
                cout << "*";
            }
            cout << endl;
    }
}
*/

/* 08
*********
 *******
  *****
   ***
    *
*/

/* 08
void pattern(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++)
        cout << " ";
            for(int k = 0; k < 2*(n - i) - 1; k++) {
                cout << "*";
            }
            cout << endl;
    }
}
*/
int main(){
    int n;
    cin >> n;
    cout << endl;
    pattern(n);
    return 0;
}
