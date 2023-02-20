
begin insertionSort(arr)

    assume first element as sorted
    for j = 2 to arr.length
        key = arr[j]
        
        #To insert A[j] into the 
        #sorted sequence arr[1...j-1]
        i = j - 1
        while i > 0 and arr[i] > key
            arr[i+1] = arr[i]
            i = i - 1
            
        arr[i+1] = key
        
end insertion Sort
