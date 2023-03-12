// Tail Call Elimination

quickSort(arr[], low, high){
    if(low < high){
        pivot = partition(arr, low, high);
        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

// will be updating soon...