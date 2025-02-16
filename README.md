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


    
           
