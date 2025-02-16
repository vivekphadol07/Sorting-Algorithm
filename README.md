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

- **Time Complexity :** Best, Average, Worst: O(n^2)             

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

- **Time Complexity :** Best, Average, Worst: O(n^2)    

## 3. Selection Sort :
-  **Idea :** Pick the smallest from unsorted and put in the beginning.
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

- **Time Complexity :** Best, Average, Worst: O(n^2)              

 ## 4. Counting Sort :
  -  **Idea :** Use a frequency count of elements from min to max.
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
        
- **Time Complexity :** Best, Average, Worst: O(n + k)      

## 5. Merge Sort :
-  **Idea :** Merge Sort is a divide and conquer algorithm that works as follows:      
          1) **Divide:** Split the array into two halves recursively until each subarray contains only one element.      
          2) **Conquer:** Merge the sorted subarrays back together by comparing elements and placing them in order.      
          3) **Combine:** Continue merging until the entire array is sorted.      
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

- **Time Complexity :** Best, Average, Worst: O(n log n)
       
## 6. Quick Sort :
-  **Idea :** Quick Sort is a divide and conquer algorithm that works as follows:
             1) **Partition:** Choose a pivot element and rearrange the array so that elements less than the pivot are on the left and greater than the pivot are                               on the right.
             2) **Recursively Sort:** Apply Quick Sort on the left and right subarrays.
             3) **Recursively Sort:** Apply Quick Sort on the left and right subarrays.
- **Pseudo Code :**

                               QUICK_SORT(A, low, high):          
                                  if low < high:    
                                      pivotIndex = PARTITION(A, low, high)    
                                      QUICK_SORT(A, low, pivotIndex - 1)   // Sort left part    
                                      QUICK_SORT(A, pivotIndex + 1, high)  // Sort right part    
                                    
                              PARTITION(A, low, high):    
                                  pivot = A[high]  // Choose last element as pivot    
                                  i = low - 1      
                                  
                                  for j = low to high - 1:    
                                      if A[j] ≤ pivot:    
                                          i = i + 1    
                                          Swap A[i] and A[j]    
                                  
                                  Swap A[i + 1] and A[high]  // Place pivot at correct position    
                                  return i + 1  // New pivot index
          
- **Time Complexity :** Best, Average, Worst: O(n log n)      

## 7. Heap Sort :
-  **Idea :** Heap Sort is a comparison-based sorting algorithm that uses a binary heap data structure. It works in two main steps:    
             1) **Build a Max Heap:** Convert the unsorted array into a max heap (a complete binary tree where the root is the largest element).      
             2) **Sort by Extracting Maximum:** Repeatedly swap the root (largest element) with the last element, then heapify the reduced heap until the array is sorted.        
- **Pseudo Code :**

                            HEAP_SORT(A):    
                            BUILD_MAX_HEAP(A)  
                            for i = size(A) - 1 to 1:  
                                Swap A[0] with A[i]   // Move max element to end
                                HEAPIFY(A, 0, i)      // Restore heap property
                        
                            BUILD_MAX_HEAP(A):
                                for i = (size(A) / 2) - 1 down to 0:
                                    HEAPIFY(A, i, size(A))
                            
                            HEAPIFY(A, i, n):
                                largest = i  
                                left = 2 * i + 1  
                                right = 2 * i + 2  
                            
                                if left < n and A[left] > A[largest]:
                                    largest = left
                                if right < n and A[right] > A[largest]:
                                    largest = right
                                if largest ≠ i:
                                    Swap A[i] and A[largest]
                                    HEAPIFY(A, largest, n)  // Recursively heapify affected subtree
        
  - **Time Complexity :** Best, Average, Worst: O(n log n)      

