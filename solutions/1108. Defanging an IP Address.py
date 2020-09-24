class Solution:
    def defangIPaddr(self, address: str) -> str:
        addlist=list(address.strip().split("."))
        return str(addlist[0]+"[.]"+addlist[1]+"[.]"+addlist[2]+"[.]"+addlist[3])
        
