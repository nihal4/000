#include <stdio.h>


void bouble_sort(int * arr, int size_arr){
    for(int i = 0; i<size_arr-1; i++){
        for(int j = 0; j< size_arr-i-1; j++){
            if(arr[j]> arr[j+1]){
                int box = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = box;
            }
        }
    }

    //return arr;
}


int binary_search(int * arr, int size_arr, int find){
    int high = size_arr-1;
    int low = 0;

    while(low <= high){
        int mid = (high + low) /2;
        if(arr[mid] == find){
            return mid;
        }
        if(arr[mid] > find){
            high = mid -1;
        }else{
            low = mid + 1;
        }
    }

    return -1;
}

int main(){
    int arr[] = {11,6,8,3,9,1,0};

    int arr_size = sizeof(arr)/sizeof(arr[0]);   

    bouble_sort(arr, arr_size);

    for(int i =0; i<arr_size; i++){
        printf("%d ", arr[i]);
    }

    int resul = binary_search(arr, arr_size, 8);
    printf("\n %d", resul);
}