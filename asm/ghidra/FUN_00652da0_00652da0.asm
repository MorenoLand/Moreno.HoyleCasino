; FUN_00652da0  00652da0
00652da0  PUSH EBP
00652da1  MOV EBP,ESP
00652da3  SUB ESP,0xc
00652da6  MOV dword ptr [EBP + -0xc],ECX
00652da9  MOV dword ptr [EBP + -0x4],0x0
00652db0  MOV dword ptr [EBP + -0x8],0x0
00652db7  JMP 0x00652dc2
00652db9  MOV EAX,dword ptr [EBP + -0x8]
00652dbc  ADD EAX,0x1
00652dbf  MOV dword ptr [EBP + -0x8],EAX
00652dc2  MOV ECX,dword ptr [EBP + -0x8]
00652dc5  IMUL ECX,ECX,0x14
00652dc8  MOV EDX,dword ptr [EBP + -0xc]
00652dcb  MOV EAX,dword ptr [EDX + 0x80]
00652dd1  CMP dword ptr [ECX + EAX*0x1],0x0
00652dd5  JZ 0x00652e11
00652dd7  MOV ECX,dword ptr [EBP + -0x8]
00652dda  IMUL ECX,ECX,0x14
00652ddd  MOV EDX,dword ptr [EBP + -0xc]
00652de0  MOV EAX,dword ptr [EDX + 0x80]
00652de6  MOV ECX,dword ptr [ECX + EAX*0x1]
00652de9  CMP ECX,dword ptr [EBP + 0x8]
00652dec  JNZ 0x00652e0f
00652dee  MOV EDX,dword ptr [EBP + -0x8]
00652df1  ADD EDX,0x1
00652df4  IMUL EDX,EDX,0x14
00652df7  MOV EAX,dword ptr [EBP + -0xc]
00652dfa  MOV ECX,dword ptr [EAX + 0x80]
00652e00  CMP dword ptr [EDX + ECX*0x1],0x0
00652e04  JZ 0x00652e0f
00652e06  MOV EDX,dword ptr [EBP + -0x4]
00652e09  ADD EDX,0x1
00652e0c  MOV dword ptr [EBP + -0x4],EDX
00652e0f  JMP 0x00652db9
00652e11  MOV EAX,dword ptr [EBP + -0x4]
00652e14  MOV ESP,EBP
00652e16  POP EBP
00652e17  RET 0x4
