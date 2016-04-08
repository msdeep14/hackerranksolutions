#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct s
{
	int num ;
	char st[10];
	int half;
};

void merge(vector<s>& arr, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    /* create temp arrays */
    vector<s> L, R;
    L.resize(n1);
    R.resize(n2);
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i].num <= R[j].num)
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(vector<s>& arr, int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}


//bool acompare(s lhs, s rhs) { return lhs.num < rhs.num; }
int main()
{
	vector<s> arr;

	int n;
	cin>>n;
	arr.resize(n+1);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i].num>>arr[i].st;
		if(i<n/2)
			arr[i].half=1;
		else
			arr[i].half=0;
	}


   mergeSort(arr,0,n-1);

	//sort(arr,arr+n,acompare);
	for(int i=0;i<n;i++)
	{
	    //cout<<arr[i].num;
		if(arr[i].half==1)
			cout<<"- ";
		else
			cout<<arr[i].st<<" ";
	}


	return 0;
}
