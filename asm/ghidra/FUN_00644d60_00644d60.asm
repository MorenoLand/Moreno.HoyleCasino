; FUN_00644d60  00644d60
00644d60  PUSH EBP
00644d61  MOV EBP,ESP
00644d63  SUB ESP,0x8
00644d66  MOV dword ptr [EBP + -0x8],ECX
00644d69  MOV dword ptr [EBP + -0x4],0x0
00644d70  JMP 0x00644d7b
00644d72  MOV EAX,dword ptr [EBP + -0x4]
00644d75  ADD EAX,0x1
00644d78  MOV dword ptr [EBP + -0x4],EAX
00644d7b  CMP dword ptr [EBP + -0x4],0x400
00644d82  JGE 0x00644de8
00644d84  MOV ECX,dword ptr [EBP + -0x4]
00644d87  MOV EDX,dword ptr [EBP + -0x8]
00644d8a  CMP dword ptr [EDX + ECX*0x4 + 0x194],0x0
00644d92  JZ 0x00644db5
00644d94  MOV EAX,dword ptr [EBP + -0x4]
00644d97  MOV ECX,dword ptr [EBP + -0x8]
00644d9a  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x194]
00644da1  MOV EAX,dword ptr [EBP + -0x4]
00644da4  MOV ECX,dword ptr [EBP + -0x8]
00644da7  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x194]
00644dae  MOV EDX,dword ptr [EDX]
00644db0  MOV EAX,dword ptr [EDX + 0x70]
00644db3  CALL EAX
00644db5  MOV ECX,dword ptr [EBP + -0x4]
00644db8  MOV EDX,dword ptr [EBP + -0x8]
00644dbb  CMP dword ptr [EDX + ECX*0x4 + 0x1194],0x0
00644dc3  JZ 0x00644de6
00644dc5  MOV EAX,dword ptr [EBP + -0x4]
00644dc8  MOV ECX,dword ptr [EBP + -0x8]
00644dcb  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x1194]
00644dd2  MOV EAX,dword ptr [EBP + -0x4]
00644dd5  MOV ECX,dword ptr [EBP + -0x8]
00644dd8  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1194]
00644ddf  MOV EDX,dword ptr [EDX]
00644de1  MOV EAX,dword ptr [EDX + 0x70]
00644de4  CALL EAX
00644de6  JMP 0x00644d72
00644de8  MOV ECX,dword ptr [EBP + -0x8]
00644deb  CALL 0x005eb5a0
00644df0  MOV ESP,EBP
00644df2  POP EBP
00644df3  RET
