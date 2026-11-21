; CVSToolsListBox  00519ae0
00519ae0  PUSH EBP
00519ae1  MOV EBP,ESP
00519ae3  PUSH ECX
00519ae4  MOV dword ptr [EBP + -0x4],ECX
00519ae7  MOV ECX,dword ptr [EBP + -0x4]
00519aea  CALL 0x00601a80
00519aef  MOV EAX,dword ptr [EBP + -0x4]
00519af2  MOV dword ptr [EAX],0x6c143c
00519af8  MOV ECX,dword ptr [EBP + -0x4]
00519afb  MOV EDX,dword ptr [EBP + 0x8]
00519afe  MOV dword ptr [ECX + 0x1e0],EDX
00519b04  MOV EAX,dword ptr [EBP + -0x4]
00519b07  MOV ESP,EBP
00519b09  POP EBP
00519b0a  RET 0x4
