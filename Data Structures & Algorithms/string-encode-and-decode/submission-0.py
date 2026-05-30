class Solution:

    def encode(self, strs: List[str]) -> str:
        result = "";
        for i in strs:
            result += i + " "
        return result.rstrip();

    def decode(self, s: str) -> List[str]:
        if s == "":
            output = [""]
            return output
        output = s.split()
        return output
