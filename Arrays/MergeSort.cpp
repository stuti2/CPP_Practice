#include <bits/stdc++.h>
using namespace std;
#define f(i, a, b)                for (int i=a; i<b; i++)
#define fp(i, a, b)               for (long long int i=a; i>=b; i--)
#define TC(t)                     while (t--)
#define input(arr1,n1)            f(i,0,n1) {cin>>arr1[i];}
#define FASTIO                    ios_base::sync_with_stdio(false);cin.tie(NULL)

void readFile() {
    #ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
    #endif
}

void mergeArray(int arr[], int l, int mid, int r) {
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1],b[n2];
    f(i,0,n1){
        a[i]=arr[l+i];
    }
    f(i,0,n2){
        b[i]=arr[mid+1+i];
    }

    int i=0,j=0,k=l;
    while(i<n1 && j<n2) {
        if(a[i]<b[i]) {
            arr[k]=a[i];
            k++;
            i++;
        }
        else {
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1) {
        arr[k]=a[i];
        k++;
        i++;
    }
    while(j<n2) {
        arr[k]=b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r) {
    int mid;
    while(l<r){
        mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        mergeArray(arr,l,mid,r);
        l++;
    }
}

int main() {
    readFile();
    FASTIO;
    int n;
    cin>>n;
    int a[n];
    input(a,n);
    mergeSort(a,0,n-1);
    f(i,0,n)
        cout<<a[i]<<" ";
    return 0;
}