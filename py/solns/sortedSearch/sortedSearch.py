class Solution:
    @staticmethod
    def naive(sorted_list,less_than):
        if len(sorted_list) == 0 or sorted_list[0] >= less_than:
            return 0
        if sorted_list[-1] < less_than:
            return len(sorted_list)

        arr = sorted_list
        def lt_array(low, high, arr):
            mid = low + (high-low+1) //2 
            if arr[mid] >= less_than and arr[mid-1] < less_than:
                return mid
            if arr[mid] > less_than:
                return lt_array(low,mid,arr)
            else:
                return lt_array(mid, high, arr)
        
        return lt_array(0,len(sorted_list)-1, arr)

