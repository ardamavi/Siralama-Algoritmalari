  
// Arda Mavi - ardamavi.com

// iostream kütüphanesini dahil etmeyi unutmayınız !

using namespace std;

int main() {
    
    cout << "Kaç sayı girilecek: ";
    
    int n;
    
    cin >> n;
    
    cout << "Sayıları Giriniz: " << endl;
    
    int arr[n];
    
    for(int k = 0; k < n; k++){
        
        cout << k+1 << ". ";
        cin >> arr[k];
        
    }
    
    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < n-1; j++){
            
            if(arr[i] < arr[j]){
                
                int tmp;
                
                tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
                
                
            }
        }
    }
    
    for(int k = 0; k < n; k++){
        
        cout << arr[k];
        
    }
    
    
    return 0;
}
