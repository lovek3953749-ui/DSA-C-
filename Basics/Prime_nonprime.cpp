#include <iostream>
using namespace std;

int main()
{
    //// using FOR loop

    int n;
    cout << "Enter n = ";
    cin >> n;

    bool isPrime = true;

    for (int i = 2; i <= n-1; i++){    // here we write condition in another way like -- (i*i <= n)
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }

    if (isPrime == true){
        cout << "Prime Number" << endl;
    }

    else{
        cout << "Non prime number" << endl;
    }
    return 0;
}
