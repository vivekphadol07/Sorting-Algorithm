# Sorting Algorithm  
## 1. Bubble Sort :
- **Idea :** Large element  come to end by swapping with adjacent.  
- **Pseudo Code :**
                              
                        for(int i = 0 ; i < n ; i++){      
                            for(int j = 0 ; j < n ; j++){        
                                if(arr[j] > arr[j+1]){          
                                    swap(arr[j] , arr[j+1]);      
                                }        
                            }        
                        }        

  ## 2. Insertion Sort :
  - **Idea :** Pick an element from unsorted part and place it correctly in sortd part .
  - **Pseudo Code :**
           
                       for(int i = 0 ; i < n ; i++){  
                            int curr = arr[i] ;  
                            prev = i-1;  
                            while( prev >= 0 && prev > curr){    
                                  swap(arr[prev] , arr[prev+]);    
                                  prev--;        
                            }    
                       }

  ## 3. Selection Sort :
  -**Idea :** Pick the smallest from unsorted and put in the beginning.
  - **Pseudo Code :**
           
                       for(int i = 0 ; i < n ; i++){  
                            mididx = i;     
                            for(int i = 0 ; i < n-1; i++){    
                                  if(arr[j] < arr[minidx]){
                                      minidx = j;
                                  }
                                 swap(arr[i], arr[minidx]);        
                            }    
                       }

 ## 4. Counting Sort :
  -**Idea :** Use a frequency count of elements from min to max.
  - **Pseudo Code :**

                      for (int num : arr){         
                          count[num]++;
                      }        
                                                      
                      for (int i = 1; i <= k; i++){                
                          count[i] += count[i - 1];
                      }             

                      for (int i = arr.size() - 1; i >= 0; i--) {    
                          output[count[arr[i]] - 1] = arr[i];    
                          count[arr[i]]--;    
                      }


## 4. Merge Sort :
  -**Idea :** Merge Sort is a divide and conquer algorithm that works as follows:      
        -Divide: Split the array into two halves recursively until each subarray contains only one element.      
        -Conquer: Merge the sorted subarrays back together by comparing elements and placing them in order.      
        -Combine: Continue merging until the entire array is sorted.      
  - **Pseudo Code :**
            
                    MERGE_SORT(A, left, right):    
                    if left < right:    
                        mid = (left + right) / 2    
                        MERGE_SORT(A, left, mid)   // Sort left half  
                        MERGE_SORT(A, mid+1, right) // Sort right half  
                        MERGE(A, left, mid, right)  // Merge both halves  
                        
                    MERGE(A, left, mid, right):    
                        Create temp arrays L[] = A[left...mid] and R[] = A[mid+1...right]    
                        i = 0, j = 0, k = left    
                            
                        while i < size(L) and j < size(R):    
                            if L[i] ≤ R[j]:    
                                A[k] = L[i]    
                                i = i + 1
                            else:    
                                A[k] = R[j]    
                                j = j + 1    
                            k = k + 1    
                                  
                        Copy remaining elements of L[] (if any) to A    
                        Copy remaining elements of R[] (if any) to A    

           
