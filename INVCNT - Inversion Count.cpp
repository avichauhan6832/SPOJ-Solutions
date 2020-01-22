#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
const int N=1e6+5;

int merger(int arr[], int temp[], int left, int mid, int right);

int _mergeSort(int arr[], int temp[], int left, int right) {
    int mid, inv_count = 0; 
    if (right > left) { 
        mid = (right + left) / 2; 
  
        inv_count += _mergeSort(arr, temp, left, mid); 
        inv_count += _mergeSort(arr, temp, mid + 1, right); 
        inv_count += merger(arr, temp, left, mid + 1, right); 
    } 
    return inv_count; 
}

int merger(int arr[], int temp[], int left, int mid, int right) {
    int i, j, k; 
    int inv_count = 0; 
  
    i = left; 
    j = mid; 
    k = left; 
    while ((i <= mid - 1) && (j <= right)) { 
        if (arr[i] <= arr[j]) { 
            temp[k++] = arr[i++]; 
        } 
        else { 
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i); 
        } 
    } 
  
    while (i <= mid - 1) 
        temp[k++] = arr[i++]; 
  
    while (j <= right) 
        temp[k++] = arr[j++]; 
  
    for (i = left; i <= right; i++) 
        arr[i] = temp[i]; 
  
    return inv_count; 
    
}

int32_t main()
{
	IOS;
	/*freopen("apache.in","r",stdin);
    freopen("apache.out","w",stdout);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/

    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        int temp[n];
        cout<<_mergeSort(arr, temp, 0, n-1)<<endl;
    }
    
    return 0;
}
