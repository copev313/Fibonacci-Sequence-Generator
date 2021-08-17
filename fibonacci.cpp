#include<iostream>
using namespace std;

void fibo(int n) {
    int n1 = 0, n2 = 1;
    int nextNum;
    for (int i = 0; i < n; i++) {
        // Print the current number:
        cout<<n1<<endl;
        // Calculate the next number:
        nextNum = n1 + n2;
        n1 = n2;
        n2 = nextNum;
    }

    return;
}

// Driver program to test the above function:
int main() {
    int n;
    cout<<"Enter the number of terms you would like to generate: ";

    // Accept input from user:
    cin>>n;
    cout<<"The first "<<n<<" terms of the Fibonacci sequence are: ";

    // Call our function:
    fibo(n);
    return 0;
}
