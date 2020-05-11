#include <iostream>
using namespace std;

int main(void){
    int t, n;
    cin >> t;
    for(int i=0;i<t; i++){
        cin >> n;
        switch(n%12){
            case 0: cout << n-11 << " " << "WS" << endl;
                    break;
            case 1: cout << n+11 << " " << "WS" << endl;
                    break;
            case 2: cout << n+9 << " " << "MS" << endl;
                    break;
            case 3: cout << n+7 << " " << "AS" << endl;
                    break;
            case 4: cout << n+5 << " " << "AS" << endl;
                    break;
            case 5: cout << n+3 << " " << "MS" << endl;
                    break;
            case 6: cout << n+1 << " " << "WS" << endl;
                    break;
            case 7: cout << n-1 << " " << "WS" << endl;
                    break;
            case 8: cout << n-3 << " " << "MS" << endl;
                    break;
            case 9: cout << n-5 << " " << "AS" << endl;
                    break;
            case 10: cout << n-7 << " " << "AS" << endl;
                    break;
            case 11: cout << n-9 << " " << "MS" << endl;
                    break;
            
                     
        }
    }
    
    return 0;
}