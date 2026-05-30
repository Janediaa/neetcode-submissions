class Solution:

    def encode(self, strs: List[str]) -> str:
        result = "";
        final = ""
        for i in strs:
            result += i + '1'
        for c in range(len(result)-1):
            final += result[c]

        return final

    def decode(self, s: str) -> List[str]:
        output = s.split('1')
        return output
