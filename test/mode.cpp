#include <iostream>
using namespace std;

int main(){
    int arr[15] = {1, 2, 2, 3,3,3, 4,4,4,4, 5,4,3,3,3};
    int  n = sizeof(arr)/sizeof(arr[0]);
    int mode = arr[0];
    int maxCount = 0;
    
    for (int i=0;i<n;i++){
        int count = 1;
        for (int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                count ++;

            }
        }
        if(maxCount < count){
        maxCount = count;
        mode = arr[i];
        
    }

    }
    cout << "The mode is: " << mode << endl;
    cout << "It appears " << maxCount << " times." << endl;

    return 0;
}

