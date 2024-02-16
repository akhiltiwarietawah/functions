// In cpp 
int 2ndLar(vector<int> &arr){
    int largest = arr[0], 2ndlargest = INT_MIN, n = arr.size();

    for(int i = 1; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
            2ndlargest = largest;
        }

        else if (arr[i] != largest && arr[i] > 2ndlargest){
            2ndlargest = arr[i];
        }
    }
    return 2ndlargest;
}


int 2ndSmallest(vector<int> &arr){
    int smallest = arr[0], 2ndsmallest = INT_MAX, n = arr.size();

    for(int i = 1; i<n; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            2ndsmallest = smallest;
        }

        else if (arr[i] != smallest && arr[i] < 2ndsmallest){
            2ndsmallest = arr[i];
        }
    }
    return 2ndsmallest;
}


