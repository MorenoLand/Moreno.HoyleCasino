; FID_conflict:`vector_deleting_destructor'  004a1da0
004a1da0  PUSH EBP
004a1da1  MOV EBP,ESP
004a1da3  PUSH ECX
004a1da4  MOV dword ptr [EBP + -0x4],ECX
004a1da7  MOV EAX,dword ptr [EBP + 0x8]
004a1daa  AND EAX,0x2
004a1dad  JZ 0x004a1de5
004a1daf  PUSH 0x464210
004a1db4  MOV ECX,dword ptr [EBP + -0x4]
004a1db7  MOV EDX,dword ptr [ECX + -0x4]
004a1dba  PUSH EDX
004a1dbb  PUSH 0x1
004a1dbd  MOV EAX,dword ptr [EBP + -0x4]
004a1dc0  PUSH EAX
004a1dc1  CALL 0x00686e57
004a1dc6  MOV ECX,dword ptr [EBP + 0x8]
004a1dc9  AND ECX,0x1
004a1dcc  JZ 0x004a1ddd
004a1dce  MOV EDX,dword ptr [EBP + -0x4]
004a1dd1  SUB EDX,0x4
004a1dd4  PUSH EDX
004a1dd5  CALL 0x00686cae
004a1dda  ADD ESP,0x4
004a1ddd  MOV EAX,dword ptr [EBP + -0x4]
004a1de0  SUB EAX,0x4
004a1de3  JMP 0x004a1e04
004a1de5  MOV ECX,dword ptr [EBP + -0x4]
004a1de8  CALL 0x00464210
004a1ded  MOV EAX,dword ptr [EBP + 0x8]
004a1df0  AND EAX,0x1
004a1df3  JZ 0x004a1e01
004a1df5  MOV ECX,dword ptr [EBP + -0x4]
004a1df8  PUSH ECX
004a1df9  CALL 0x00686cae
004a1dfe  ADD ESP,0x4
004a1e01  MOV EAX,dword ptr [EBP + -0x4]
004a1e04  MOV ESP,EBP
004a1e06  POP EBP
004a1e07  RET 0x4
