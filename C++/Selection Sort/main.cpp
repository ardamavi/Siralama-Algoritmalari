  
// Arda Mavi - ardamavi.com

#include <iostream>

using namespace std;

int main() {
    cout << "Kaç sayı girilecek ? ";
    
    int n;
    
    cin >> n;
    
    int arr[n];
    int swp;
    
    for (int i = 0; i < n; i++) {
        
        cin >> arr[i];
        
    }
    
    for(int i = 0; i < n; i++) {
        
        int min[2] = {99999, 0};
        
        for (int m = i; m < n; m++) {
            
            if (min[0] > arr[m]) {
                min[0] = arr[m];
                min[1] = m;
            }
            
        }
        
        swp = arr[min[1]];
        
        arr[min[1]] = arr[i];
        
        arr[i] = swp;
        
    }
    
    for (int b = 0; b < n; b++) {
        
        cout << " | " << arr[b] << " | ";
        
    }
    
    return 0;
}
