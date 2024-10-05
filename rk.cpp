#include <iostream>
using namespace std;
#include <cmath>

int main() {
    float sum=0;
    cout<<"slagaemye:"<< endl;
    for(int i = 2; i <=7; ++i) {
        float a = 1/(log2(i));

        cout <<a<<endl;
        sum+=a;



    }
    cout<<"Summa:"<<endl;
    cout << sum << endl;
    return 0;
}


/*slagaemye:
1
0.63093
0.5
0.430677
0.386853
0.356207
Summa:
3.30467


Калькулятор
1
0.63093
0.5
0.430677
0.386853
0.356207

3.30467*/