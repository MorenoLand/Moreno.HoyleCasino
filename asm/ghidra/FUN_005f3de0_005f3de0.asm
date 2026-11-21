; FUN_005f3de0  005f3de0
005f3de0  PUSH EBP
005f3de1  MOV EBP,ESP
005f3de3  SUB ESP,0x10
005f3de6  MOV dword ptr [EBP + -0xc],ECX
005f3de9  MOV EAX,dword ptr [EBP + -0xc]
005f3dec  CMP dword ptr [EAX + 0x28],0x0
005f3df0  JZ 0x005f3e21
005f3df2  MOV ECX,dword ptr [EBP + -0xc]
005f3df5  MOV EDX,dword ptr [ECX + 0x28]
005f3df8  MOV dword ptr [EBP + -0x8],EDX
005f3dfb  MOV EAX,dword ptr [EBP + -0x8]
005f3dfe  MOV dword ptr [EBP + -0x4],EAX
005f3e01  CMP dword ptr [EBP + -0x4],0x0
005f3e05  JZ 0x005f3e1a
005f3e07  PUSH 0x1
005f3e09  MOV ECX,dword ptr [EBP + -0x4]
005f3e0c  MOV EDX,dword ptr [ECX]
005f3e0e  MOV ECX,dword ptr [EBP + -0x4]
005f3e11  MOV EAX,dword ptr [EDX]
005f3e13  CALL EAX
005f3e15  MOV dword ptr [EBP + -0x10],EAX
005f3e18  JMP 0x005f3e21
005f3e1a  MOV dword ptr [EBP + -0x10],0x0
005f3e21  MOV ECX,dword ptr [EBP + -0xc]
005f3e24  MOV EDX,dword ptr [EBP + 0x8]
005f3e27  MOV dword ptr [ECX + 0x28],EDX
005f3e2a  MOV EAX,dword ptr [EBP + -0xc]
005f3e2d  CMP dword ptr [EAX + 0x28],0x0
005f3e31  JZ 0x005f3e42
005f3e33  MOV ECX,dword ptr [EBP + -0xc]
005f3e36  PUSH ECX
005f3e37  MOV EDX,dword ptr [EBP + -0xc]
005f3e3a  MOV ECX,dword ptr [EDX + 0x28]
005f3e3d  CALL 0x005fc220
005f3e42  MOV ESP,EBP
005f3e44  POP EBP
005f3e45  RET 0x4
