// different sorting algos

#include<bits/stdc++.h>
using namespace std;

void print_array(int *arr, int n){
    for(int i = 0 ; i < n; i++){
        cout << arr[i] << " ";
    }
    cout<<"\n";
}

void selection(int *arr, int l, int r){
    if(l < r){
        for(int i = l; i < r; i++){
            int max = 0;
            for(int j = l; j < r-i; j++){
                if(arr[j] > arr[max]){
                    max = j;
                }
            }
            int t = arr[r-i-1];
            arr[r-i-1] = arr[max];
            arr[max] = t;
        }
    }
    // O(n^2) and W(n^2)
}

void bubble(int *arr, int l, int r){
    if(l < r){
        for(int i = l; i < r-1; i++){
            bool flag = false;
            for(int j = l; j < r-i-1; j++){
                if(arr[j]>arr[j+1]){
                    int t = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = t;
                    flag = true;
                }
            }
            if(!flag){
                break; // sorted already.
            }
        }
    }
    // O(n^2) and W(n)
}

void insertion(int *arr, int l, int r){
    if(r - l > 1){
        for (int i = l+1; i < r; i++){
            int pos = i;
            while(pos > l && arr[pos] < arr[pos-1]){
                int t = arr[pos];
                arr[pos] = arr[pos - 1];
                arr[pos - 1] = t;
                pos--;
            }
        }
    }
    //O(n^2) and W(n)
}

void mergesort(int *arr, int l, int r){
    if(r > l + 1){  // r == l+1 is base case.
        int mid = (l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid,r);

        int n1 = mid - l;
        int n2 = r - mid;

        int L[n1];
        int R[n2];

        for(int i = 0; i < n1; i++){
            L[i] = arr[l+i];
        }
        for(int i = 0; i < n2; i++){
            R[i] = arr[mid+i];
        }

        int i= 0,j=0,k=l;
        while (i<n1 && j<n2){
            if(L[i]>R[j]){
                arr[k] = R[j];
                j++;
            }
            else{
                arr[k] = L[i];
                i++;
            }
            k++;
        }
        while (i<n1)
        {
            arr[k] = L[i];
            i++;
            k++;
        }
        while (j<n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    // O(n*logn) and 0(n*logn)
}

void quick(int *arr, int l, int r){
    if(r > l+1){
        // partition
        int y = l+1;
        for(int i = l+1 ; i < r; i++){
            if(arr[i] <= arr[l]){
                int t = arr[i];
                arr[i] = arr[y];
                arr[y] = t;
                y++;
            }
        }
        int t = arr[y-1];
        arr[y-1] = arr[l];
        arr[l] = t;

        quick(arr,l,y);
        quick(arr,y+1,r);
    }
}

void heapify(int *arr, int l, int r, int i){
    // assuming that r > l + 1 and i is some value in b/w r and l
    int largest = i;
    int left = 2*(i-l)+l+1;
    int right = 2*(i-l)+l+2;

    if(left < r && arr[left] > arr[largest]){
        largest = left;
    }
    if(right < r && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != i){
        int t = arr[largest];
        arr[largest] = arr[i];
        arr[i] = t;

        heapify(arr,l,r,largest);
    }
    // This program has a O(logn) time complexity. 
    // Since it just adjuts the array
    // to satisfy max heap property. So, bounded by logn, i.e. height of tree.
}
void heapsort(int *arr, int l, int r){
    if(r-l>1){
        // for building heap from bottom up. O(n) time
        for(int i = (l+r)/2 - 1; i >= l; i--){
            heapify(arr,l,r,i);
        }

        for(int i = r-1; i > l; i--){
            int t = arr[l];
            arr[l] = arr[i];
            arr[i] = t;

            heapify(arr,l,i,l);
        }
    }
}


int main(void){
    int n;
    cout<<"Enter no.of elements: ";
    cin >> n;
    int arr[n];
    cout<<"Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //bubble sort:
    int *ar = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        *(ar+i) = *(arr+i);
    }
    cout<<"Selection Sorted:-\n";
    selection(ar,0,n);
    print_array(ar,n);
    free(ar);

    // Bubble Sort
    ar = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        *(ar+i) = *(arr+i);
    }
    cout<<"\nBubble Sorted:-\n";
    bubble(ar,0,n);
    print_array(ar,n);
    free(ar);

    // Insertion Sort
    ar = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        *(ar+i) = *(arr+i);
    }
    cout<<"\nInserion Sorted:-\n";
    insertion(ar,0,n);
    print_array(ar,n);
    free(ar);

    // Merge Sort
    ar = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        *(ar+i) = *(arr+i);
    }
    cout<<"\nMerge Sorted:-\n";
    mergesort(ar,0,n);
    print_array(ar,n);
    free(ar);

    // Quick Sort
    ar = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        *(ar+i) = *(arr+i);
    }
    cout<<"\nQuick Sorted:-\n";
    quick(ar,0,n);
    print_array(ar,n);
    free(ar);

    // Heap Sort
    ar = (int*)malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        *(ar+i) = *(arr+i);
    }
    cout<<"\nHeap Sorted:-\n";
    heapsort(ar,0,n);
    print_array(ar,n);
    free(ar);




}