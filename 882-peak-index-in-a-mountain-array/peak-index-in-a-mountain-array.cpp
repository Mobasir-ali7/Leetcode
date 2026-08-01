class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
 
 int start = 0;
 int end = arr.size()-1;
 int mid;
    
    while(start<=end){
   
   mid = end + (start - end)/2;

   //peak Element;
   if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
    return mid;
   }
    //Right side move
    else if(arr[mid]>arr[mid-1]){
     start = mid+1;
    }

    //Left side
    else{
     end = mid - 1;
    }

   
   }
    
       return -1;  
    }
};