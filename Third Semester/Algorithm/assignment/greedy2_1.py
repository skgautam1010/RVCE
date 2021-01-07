# Python3 program to find the maximum profit
# job sequence from a given array of jobs
# with deadlines and profits

import time
import sys


class DisjointSet:
    def __init__(self, n):
        self.parent = [i for i in range(n + 1)]
    def find(self, s):
        # Make the parent of nodes in the path from
        # u --> parent[u] point to parent[u]
        if s == self.parent[s]:
            return s
        self.parent[s] = self.find(self.parent[s])
        return self.parent[s]

    # Make us as parent of v
    def merge(self, u, v):

        # Update the greatest available
        # free slot to u
        self.parent[v] = u

def cmp(a):
    return a['profit']
def findmaxdeadline(arr, n):
    """
    :param arr: Job array
    :param n: length of array
    :return: maximum deadline from the set of jobs
    """
    ans = - sys.maxsize - 1
    for i in range(n):
        ans = max(ans, arr[i]['deadline'])
    return ans
def printjobscheduling(arr, n):

    # Sort jobs in descending order on
    # basis of their profit
    arr = sorted(arr, key = cmp, reverse = True)
    """
    Find the maximum deadline among all jobs and
    create a disjoint set data structure with
    max_deadline disjoint sets initially
    """
    max_deadline = findmaxdeadline(arr, n)
    ds = DisjointSet(max_deadline)
    for i in range(n):

        # find maximum available free slot for
        # this job (corresponding to its deadline)
        available_slot = ds.find(arr[i]['deadline'])
        if available_slot > 0:
            # This slot is taken by this job 'i'
            # so we need to update the greatest free slot.
            # Note: In merge, we make first parameter
            # as parent of second parameter.
            # So future queries for available_slot will
            # return maximum available slot in set of
            # "available_slot - 1"
            ds.merge(ds.find(available_slot - 1),
                             available_slot)
            print(arr[i]['id'])

# Driver Code
if __name__ == "__main__":

    arr = [{'id': 'a', 'deadline': 5, 'profit': 200},
           {'id': 'b', 'deadline': 3, 'profit': 180},
           {'id': 'c', 'deadline': 3, 'profit': 190},
           {'id': 'd', 'deadline': 2, 'profit': 300},
           {'id': 'e', 'deadline': 4, 'profit': 120},
	   {'id': 'f', 'deadline': 2, 'profit': 100}]

    n = len(arr)
    print("Following jobs need to be executed for maximum profit:")
    start=time.time()
    printjobscheduling(arr, n)
    end=time.time()
    print("Time taken is ",round(end-start,4))
