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

  ##
