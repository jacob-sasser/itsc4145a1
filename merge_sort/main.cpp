#include <stdio.h>
#include <time.h>
#include <vector>
#include <chrono>
#include <iostream>

void merge(std::vector<int>& arr, int left, int mid, int right){
    int n1= mid-left+1;
    int n2=right-mid;
    std::vector<int> L(arr.begin() + left, arr.begin() + left + n1);
    std::vector<int> R(arr.begin() + mid + 1, arr.begin() + mid + 1 + n2);
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<int>& arr,int left, int right){
    if(left<right){
    int mid=left+(right-left)/2;
    mergeSort(arr,left,mid);    
    mergeSort(arr,mid+1,right);
    merge(arr,left,mid,right);
}
}

int main(int argc, char* argv[]){
  size_t size=std::stoul(argv[1]);
  int sizes[9]={10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
    for(int j=0;j<10;j++){
      size=sizes[j]; 
    std::vector<int> arr(size);
    srand(time(0));
   
    for(int i =0;i<size;i++){
        arr[i]=rand()%100;
    }
    
    std::cout<<"Array size: "<<size<<"\n";
    
    auto time1=std::chrono::high_resolution_clock::now();
    mergeSort(arr,0,arr.size()-1);
    auto time2=std::chrono::high_resolution_clock::now();
    auto diff=std::chrono::duration_cast<std::chrono::microseconds>(time2-time1);
    std::cout<<"Time taken:"<< (diff.count()) <<"\n";

    }
    return 0;


}


