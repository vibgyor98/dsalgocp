#include <iostream>
using namespace std;

int main() {

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    char str[19];
    cin>>str;

    int i = 0;
    if(str[i]=='9') {
        i++;
    }

    //Iterate over the entire string
    for(; str[i]!='\0'; i++) {

        int digit = str[i] - '0';
        if(digit>=5) {
            digit = 9-digit;
        }

        str[i]=digit+'0';
    }
    cout<<str;
    return 0;
}
    
    
         

//Input
// 4545


//Output
// 4444
