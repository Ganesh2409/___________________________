#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    // Input array elements
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int window;
    cin >> window;
    
    cout << "Elements of each window:" << endl;
    
    // Print elements of the first window
    for(int i = 0; i < window; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
// Total NO of windows with apecid=fic s=window sia=ze would be (n-k+1) n = size of arr , k = sizize of the window u wanted 
    // Print elements of the sliding window 
    for(int start = 1; start <= n - window; start++){ // naku inka enni window osthat if manam already oka window ni print chesey sam ga so 1- n-k+1 --> no_of elements in array  -  window_size
        for(int j = start; j < start + window; j++){ // aa window lo enni elements padthai and avi enti 
        // window lo starting ele aney dhi start nundi and end aney dhi start + window_size 
        // for example window 3 index nundi start ithey and aa window 3 sized ithey aa window  end aney dhi 3+3 6 dhaka 
            cout << arr[j] << " "; 
        }
        cout << endl;
    }

    return 0;
}
