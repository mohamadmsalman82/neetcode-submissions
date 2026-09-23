class MedianFinder:

    def __init__(self):
        """
        small = maxheap holding smaller half of numbers
        python only has min heap so we store the negative version of the numbers to fake a max heap
        
        large = min-heap holding the larger half of the numbers

        the goal is that the heaps stay about the same size +- 1
        """

        self.small, self.large = [],[] #basically like initializing an array

    def addNum(self, num: int) -> None:
        """
        step 1 always push the new number into the small first
        the way we do this is we multiply by -1 so the largest value sits on the top
        """

        heapq.heappush(self.small, -1 * num)

        """
        step 2 is that we keep the correct order.
        i.e. every value in the small heap must be less than every value in the large heap
        if the top of small (its max) is bigger than the top of large (its min)
        we move smalls top over to large
        """

        if (self.small and self.large and -1*self.small[0] > self.large[0]):

            val = -1 * heapq.heappop(self.small) # pop the max of the small and undo the negative
            heapq.heappush(self.large, val) #push it into the large as a normal value

        """
        step 3:
        keep the sizes balanced and the difference in length of the two heaps max 1
        if the small has too many we move the max of small to the large.

        and if the large has too many we move its min to the small
        """

        #small has to man move to large

        if len(self.small) > len(self.large) + 1:
            val = -1 * heapq.heappop(self.small)
            heapq.heappush(self.large,val)

        #large has too many move to small

        if len(self.large) > len(self.small) + 1:
            val = heapq.heappop(self.large)
            heapq.heappush(self.small, -1* val)

    def findMedian(self) -> float:
        if len(self.small) > len(self.large):
            return -1*self.small[0]
        if len(self.large) > len(self.small):
            return self.large[0]
        return (-1*self.small[0] + self.large[0]) /2
        
        