; FUN_005b71a0  005b71a0
005b71a0  PUSH EBP
005b71a1  MOV EBP,ESP
005b71a3  SUB ESP,0xc
005b71a6  MOV dword ptr [EBP + -0x8],ECX
005b71a9  MOV EAX,dword ptr [EBP + 0x8]
005b71ac  IMUL EAX,EAX,0x118
005b71b2  ADD EAX,dword ptr [EBP + 0xc]
005b71b5  MOV ECX,dword ptr [EBP + -0x8]
005b71b8  MOV DL,byte ptr [EBP + 0x10]
005b71bb  MOV byte ptr [ECX + EAX*0x1 + 0x68],DL
005b71bf  MOV EAX,dword ptr [EBP + 0x10]
005b71c2  MOV dword ptr [EBP + -0xc],EAX
005b71c5  CMP dword ptr [EBP + -0xc],0x6
005b71c9  JA 0x005b71ee
005b71cb  MOV ECX,dword ptr [EBP + -0xc]
005b71ce  MOVZX EDX,byte ptr [ECX + 0x5b7218]
005b71d5  JMP dword ptr [EDX*0x4 + 0x5b720c]
005b71dc  MOV dword ptr [EBP + -0x4],0x1
005b71e3  JMP 0x005b71f5
005b71e5  MOV dword ptr [EBP + -0x4],0x2
005b71ec  JMP 0x005b71f5
005b71ee  MOV dword ptr [EBP + -0x4],0x0
005b71f5  MOV EAX,dword ptr [EBP + -0x4]
005b71f8  PUSH EAX
005b71f9  MOV ECX,dword ptr [EBP + 0x8]
005b71fc  PUSH ECX
005b71fd  MOV ECX,dword ptr [EBP + -0x8]
005b7200  CALL 0x005b73a0
005b7205  MOV ESP,EBP
005b7207  POP EBP
005b7208  RET 0xc
