; FUN_00628c50  00628c50
00628c50  PUSH EBP
00628c51  MOV EBP,ESP
00628c53  SUB ESP,0xc
00628c56  MOV dword ptr [EBP + -0x8],ECX
00628c59  MOV EAX,dword ptr [EBP + -0x8]
00628c5c  MOV dword ptr [EAX + 0x68],0xffffffff
00628c63  MOV dword ptr [EBP + -0x4],0x0
00628c6a  JMP 0x00628c75
00628c6c  MOV ECX,dword ptr [EBP + -0x4]
00628c6f  ADD ECX,0x1
00628c72  MOV dword ptr [EBP + -0x4],ECX
00628c75  MOV EDX,dword ptr [EBP + -0x8]
00628c78  MOV EAX,dword ptr [EDX]
00628c7a  MOV ECX,dword ptr [EBP + -0x8]
00628c7d  MOV EDX,dword ptr [EAX + 0xb8]
00628c83  CALL EDX
00628c85  CMP dword ptr [EBP + -0x4],EAX
00628c88  JGE 0x00628cad
00628c8a  MOV EAX,dword ptr [EBP + -0x4]
00628c8d  PUSH EAX
00628c8e  MOV ECX,dword ptr [EBP + -0x8]
00628c91  ADD ECX,0x70
00628c94  CALL 0x0060ca40
00628c99  MOV dword ptr [EBP + -0xc],EAX
00628c9c  PUSH 0x0
00628c9e  MOV ECX,dword ptr [EBP + -0xc]
00628ca1  MOV EDX,dword ptr [ECX]
00628ca3  MOV ECX,dword ptr [EBP + -0xc]
00628ca6  MOV EAX,dword ptr [EDX + 0x8]
00628ca9  CALL EAX
00628cab  JMP 0x00628c6c
00628cad  MOV ECX,dword ptr [EBP + -0x8]
00628cb0  MOV EDX,dword ptr [ECX]
00628cb2  MOV ECX,dword ptr [EBP + -0x8]
00628cb5  MOV EAX,dword ptr [EDX + 0xd0]
00628cbb  CALL EAX
00628cbd  MOV ESP,EBP
00628cbf  POP EBP
00628cc0  RET
