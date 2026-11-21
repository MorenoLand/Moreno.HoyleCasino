; FUN_005f2b20  005f2b20
005f2b20  PUSH EBP
005f2b21  MOV EBP,ESP
005f2b23  SUB ESP,0xc
005f2b26  MOV dword ptr [EBP + -0xc],ECX
005f2b29  MOV dword ptr [EBP + -0x4],0x0
005f2b30  JMP 0x005f2b3b
005f2b32  MOV EAX,dword ptr [EBP + -0x4]
005f2b35  ADD EAX,0x1
005f2b38  MOV dword ptr [EBP + -0x4],EAX
005f2b3b  MOV ECX,dword ptr [EBP + -0x4]
005f2b3e  PUSH ECX
005f2b3f  MOV EDX,dword ptr [EBP + 0x8]
005f2b42  PUSH EDX
005f2b43  MOV ECX,dword ptr [EBP + -0xc]
005f2b46  CALL 0x005f2a60
005f2b4b  TEST EAX,EAX
005f2b4d  JZ 0x005f2b8e
005f2b4f  MOV EAX,dword ptr [EBP + -0x4]
005f2b52  PUSH EAX
005f2b53  MOV ECX,dword ptr [EBP + 0x8]
005f2b56  PUSH ECX
005f2b57  MOV ECX,dword ptr [EBP + -0xc]
005f2b5a  CALL 0x005f2a60
005f2b5f  MOV dword ptr [EBP + -0x8],EAX
005f2b62  MOVZX EDX,byte ptr [EBP + 0xc]
005f2b66  TEST EDX,EDX
005f2b68  JZ 0x005f2b7c
005f2b6a  MOV EAX,dword ptr [EBP + -0x8]
005f2b6d  MOV EDX,dword ptr [EAX]
005f2b6f  MOV ECX,dword ptr [EBP + -0x8]
005f2b72  MOV EAX,dword ptr [EDX + 0xcc]
005f2b78  CALL EAX
005f2b7a  JMP 0x005f2b8c
005f2b7c  MOV ECX,dword ptr [EBP + -0x8]
005f2b7f  MOV EDX,dword ptr [ECX]
005f2b81  MOV ECX,dword ptr [EBP + -0x8]
005f2b84  MOV EAX,dword ptr [EDX + 0xd0]
005f2b8a  CALL EAX
005f2b8c  JMP 0x005f2b32
005f2b8e  MOV ESP,EBP
005f2b90  POP EBP
005f2b91  RET 0x8
