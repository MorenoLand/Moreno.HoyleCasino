; FUN_00584fc0  00584fc0
00584fc0  PUSH EBP
00584fc1  MOV EBP,ESP
00584fc3  PUSH ECX
00584fc4  MOV dword ptr [EBP + -0x4],ECX
00584fc7  MOV ECX,dword ptr [EBP + -0x4]
00584fca  CALL 0x005f62b0
00584fcf  MOV EAX,dword ptr [EBP + -0x4]
00584fd2  MOV ECX,dword ptr [EAX + 0x5c]
00584fd5  MOV EDX,dword ptr [EBP + -0x4]
00584fd8  MOV EAX,dword ptr [EDX + 0x5c]
00584fdb  MOV EDX,dword ptr [ECX]
00584fdd  MOV ECX,EAX
00584fdf  MOV EAX,dword ptr [EDX + 0x70]
00584fe2  CALL EAX
00584fe4  MOV ECX,dword ptr [EBP + -0x4]
00584fe7  MOV EDX,dword ptr [ECX + 0x60]
00584fea  MOV EAX,dword ptr [EBP + -0x4]
00584fed  MOV ECX,dword ptr [EAX + 0x60]
00584ff0  MOV EDX,dword ptr [EDX]
00584ff2  MOV EAX,dword ptr [EDX + 0x70]
00584ff5  CALL EAX
00584ff7  MOV ECX,dword ptr [EBP + -0x4]
00584ffa  MOV EDX,dword ptr [ECX + 0x64]
00584ffd  MOV EAX,dword ptr [EBP + -0x4]
00585000  MOV ECX,dword ptr [EAX + 0x64]
00585003  MOV EDX,dword ptr [EDX]
00585005  MOV EAX,dword ptr [EDX + 0x70]
00585008  CALL EAX
0058500a  MOV ESP,EBP
0058500c  POP EBP
0058500d  RET
