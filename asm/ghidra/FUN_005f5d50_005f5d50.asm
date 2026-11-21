; FUN_005f5d50  005f5d50
005f5d50  PUSH EBP
005f5d51  MOV EBP,ESP
005f5d53  SUB ESP,0x14
005f5d56  MOV dword ptr [EBP + -0x10],ECX
005f5d59  MOV EAX,dword ptr [EBP + -0x10]
005f5d5c  CMP dword ptr [EAX + 0x180],0x0
005f5d63  JZ 0x005f5daa
005f5d65  MOV ECX,dword ptr [EBP + -0x10]
005f5d68  MOV EDX,dword ptr [ECX + 0x180]
005f5d6e  MOV dword ptr [EBP + -0x4],EDX
005f5d71  MOV EAX,dword ptr [EBP + -0x10]
005f5d74  MOV dword ptr [EAX + 0x180],0x0
005f5d7e  MOV ECX,dword ptr [EBP + -0x4]
005f5d81  MOV dword ptr [EBP + -0xc],ECX
005f5d84  MOV EDX,dword ptr [EBP + -0xc]
005f5d87  MOV dword ptr [EBP + -0x8],EDX
005f5d8a  CMP dword ptr [EBP + -0x8],0x0
005f5d8e  JZ 0x005f5da3
005f5d90  PUSH 0x1
005f5d92  MOV EAX,dword ptr [EBP + -0x8]
005f5d95  MOV EDX,dword ptr [EAX]
005f5d97  MOV ECX,dword ptr [EBP + -0x8]
005f5d9a  MOV EAX,dword ptr [EDX]
005f5d9c  CALL EAX
005f5d9e  MOV dword ptr [EBP + -0x14],EAX
005f5da1  JMP 0x005f5daa
005f5da3  MOV dword ptr [EBP + -0x14],0x0
005f5daa  MOV ECX,dword ptr [EBP + -0x10]
005f5dad  MOV EDX,dword ptr [EBP + 0x8]
005f5db0  MOV dword ptr [ECX + 0x180],EDX
005f5db6  MOV EAX,dword ptr [EBP + -0x10]
005f5db9  CMP dword ptr [EAX + 0x180],0x0
005f5dc0  JZ 0x005f5de1
005f5dc2  PUSH 0x0
005f5dc4  MOV ECX,dword ptr [EBP + -0x10]
005f5dc7  PUSH ECX
005f5dc8  MOV EDX,dword ptr [EBP + -0x10]
005f5dcb  MOV EAX,dword ptr [EDX + 0x180]
005f5dd1  MOV ECX,dword ptr [EBP + -0x10]
005f5dd4  MOV ECX,dword ptr [ECX + 0x180]
005f5dda  MOV EDX,dword ptr [EAX]
005f5ddc  MOV EAX,dword ptr [EDX + 0x4]
005f5ddf  CALL EAX
005f5de1  MOV ESP,EBP
005f5de3  POP EBP
005f5de4  RET 0x4
