#include <iostream>

using namespace std;

int main()
{
    int a=10;
    int b=0;
    
    try{
        if(b==0){
            throw b;
        }
        else{
            cout << "Divide:" << a/b << endl;
        }
    }
    catch(int n){
        cout << "Cannot divide by zero:" << n;
    }

    return 0;
}
