; FUN_00548b20  00548b20
00548b20  PUSH EBP
00548b21  MOV EBP,ESP
00548b23  SUB ESP,0x8
00548b26  MOV dword ptr [EBP + -0x8],ECX
00548b29  MOV EAX,dword ptr [EBP + -0x8]
00548b2c  MOV dword ptr [EAX + 0x20],0x1
00548b33  MOV ECX,dword ptr [EBP + -0x8]
00548b36  MOV byte ptr [ECX + 0x24],0x0
00548b3a  MOV EDX,dword ptr [EBP + -0x8]
00548b3d  MOV byte ptr [EDX + 0x26],0x0
00548b41  MOV EAX,dword ptr [EBP + -0x8]
00548b44  MOV byte ptr [EAX + 0x25],0x0
00548b48  MOV ECX,dword ptr [EBP + -0x8]
00548b4b  MOV byte ptr [ECX + 0x4c],0x0
00548b4f  MOV EDX,dword ptr [EBP + -0x8]
00548b52  MOV byte ptr [EDX + 0x4d],0x0
00548b56  MOV dword ptr [EBP + -0x4],0x0
00548b5d  JMP 0x00548b68
00548b5f  MOV EAX,dword ptr [EBP + -0x4]
00548b62  ADD EAX,0x1
00548b65  MOV dword ptr [EBP + -0x4],EAX
00548b68  CMP dword ptr [EBP + -0x4],0x3
00548b6c  JGE 0x00548b7e
00548b6e  MOV ECX,dword ptr [EBP + -0x4]
00548b71  MOV EDX,dword ptr [EBP + -0x8]
00548b74  MOV dword ptr [EDX + ECX*0x4 + 0x50],0x0
00548b7c  JMP 0x00548b5f
00548b7e  MOV ESP,EBP
00548b80  POP EBP
00548b81  RET
