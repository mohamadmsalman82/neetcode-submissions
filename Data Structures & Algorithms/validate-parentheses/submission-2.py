class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for i in range(len(s)):
            if stack and (s[i] == ")" and stack[-1] == "(" or s[i] == "]" and stack[-1] == "[" or s[i] == "}" and stack[-1] == "{" ):
                stack.pop()
            else:
                stack.append(s[i])
        return not stack

            
        