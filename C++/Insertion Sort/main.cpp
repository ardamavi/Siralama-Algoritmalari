  
// Arda Mavi - ardamavi.com

// iostream ve vector kütüphanelerini dahil etmeyi unutmayınız !

using namespace std;


int main() {
    
    cout << "Kaç Sayı Girilecek: ";
    int n;
    cin >> n;
    
    // arr[0][] => Sırasız
    // arr[1][] => Sıralı
    vector<int> unsorted;
    vector<int> sorted;
    
    // Sayılar Alınır ve Sırasız array ine atanır.
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        unsorted.push_back(tmp);
    }
    
    int tmp = unsorted[0];
    unsorted.erase(unsorted.begin());
    sorted.push_back(tmp);
    
    
    for (int j = 0; j < unsorted.size(); j++) {
        
        int number = unsorted[j];
        sorted.push_back(number);
        
        for(int g = sorted.size() - 2; g >= 0; g--)
        {
            if (g == 0)
            {
                sorted[g + 1] = sorted[g];
                sorted[g] = number;
                break;
            }
            if (sorted[g] > number) {
                
                sorted[g + 1] = sorted[g];
                
            } else {
                sorted[g + 1] = number;
                break;
            }
        }
    }
    
    for(int i = 0; i < sorted.size(); i++){
        cout << " | " << sorted[i] << " | ";
    }
    
    return 0;
}
