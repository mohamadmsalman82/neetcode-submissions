class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        l = 0
        r =0
        biggestLength = 0

        count = {}

        while r < len(s):
            count[s[r]] = count.get(s[r], 0) + 1
            r += 1
            windowLength = r-l
            if windowLength - max(count.values()) > k:
                count[s[l]] -= 1
                l += 1
            biggestLength = max(biggestLength, r-l)
        return biggestLength




"""
        basically my approach to this questions would be the following:

        we use a sliding window approach.

        we set up 2 pointers each initially on the first letter and also initialize a hash map that counts the occurance of an indivisual letter.

        we start with the first value and count the occurance and store it in the hash map with the key being the character:

        we then calculate length of window - number of most occuring char.

        and check if that value is less than or equal to K. if yes we shift the right pointer on to the next character in the string. if no we more the left pointer and repeat the same occurance, while also keeping track of what sub count of char replacements was the largest.

"""
