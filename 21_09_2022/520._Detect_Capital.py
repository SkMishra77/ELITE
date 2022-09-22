class Solution:
    def detectCapitalUse(self, word: str) -> bool:
        if(word.islower()):
            return True
        if(word.isupper()):
            return True
        else:
            if(word[0].isupper() and word[1:].islower()):
                return True
        
        return False