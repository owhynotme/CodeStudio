from array import *


def firstocuurance(arr, n, key):
    start = 0
    end = n-1
    mid = int(start+(end-start)/2)
    ans = -1
    # print(mid)

    while(start <= end):
        if(arr[mid] == int(key)):
            ans = mid
            end = mid-1
        elif(int(key) > arr[mid]):
            start = mid+1
        else:
            end = mid-1
        mid = int(start+(end-start)/2)
    return ans


def lastoccurance(arr, n, key):
    start=0
    end=n-1
    mid=int(start+(end-start)/2)
    ans=-1

    while(start<=end):
        if(arr[mid]==int(key)):
            ans=mid
            start=mid+1
        elif (int(key)> arr[mid]):
            start=mid+1
        else:
            end=mid-1
        mid=int(start+(end-start)/2)
    return ans


arr = array("i", [19, 23, 49, 49, 49, 88])
n = len(arr)
print("First Occurance")
print(firstocuurance(arr, n, 49))
print("Last Occurance")
print(lastoccurance(arr, n, 49))
