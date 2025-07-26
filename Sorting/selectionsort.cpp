class Solution {
    public:
      // Function to perform selection sort on the given array.
      void selectionSort(vector<int> &arr) {
          // code here
          int n = arr.size();  // Missing semicolon fixed
          for(int i = 0 ; i < n ; i++) {
              int minIndex = i;
              for(int j = i + 1 ; j < n; j++) {
                  if(arr[j] < arr[minIndex]) {
                      minIndex = j;
                  }
              }
           
              swap(arr[i] , arr[minIndex]);  // `j` was incorrectly used; changed to `i`
          }
          
          // Removed `return arr;` since function return type is `void`
      }
  };

  
// void ki jagah vector hota toh return arr krna pdta 