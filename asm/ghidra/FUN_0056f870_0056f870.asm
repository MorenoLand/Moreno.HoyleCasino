; FUN_0056f870  0056f870
0056f870  PUSH EBP
0056f871  MOV EBP,ESP
0056f873  SUB ESP,0x8
0056f876  MOV dword ptr [EBP + -0x8],ECX
0056f879  MOV word ptr [EBP + -0x4],0x0
0056f87f  JMP 0x0056f88d
0056f881  MOV AX,word ptr [EBP + -0x4]
0056f885  ADD AX,0x1
0056f889  MOV word ptr [EBP + -0x4],AX
0056f88d  MOVSX ECX,word ptr [EBP + -0x4]
0056f891  CMP ECX,0x7
0056f894  JGE 0x0056f8c9
0056f896  MOVSX EDX,word ptr [EBP + -0x4]
0056f89a  MOV EAX,dword ptr [EBP + -0x8]
0056f89d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x7c]
0056f8a1  MOVSX EDX,word ptr [EBP + -0x4]
0056f8a5  MOV EAX,dword ptr [EBP + -0x8]
0056f8a8  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x7c]
0056f8ac  MOV EAX,dword ptr [ECX]
0056f8ae  MOV ECX,EDX
0056f8b0  MOV EDX,dword ptr [EAX + 0x70]
0056f8b3  CALL EDX
0056f8b5  MOVSX EAX,word ptr [EBP + -0x4]
0056f8b9  MOV ECX,dword ptr [EBP + -0x8]
0056f8bc  MOV dword ptr [ECX + EAX*0x4 + 0xbc],0xffffffff
0056f8c7  JMP 0x0056f881
0056f8c9  MOV EDX,dword ptr [EBP + -0x8]
0056f8cc  MOV EAX,dword ptr [EDX + 0x6c]
0056f8cf  MOV ECX,dword ptr [EBP + -0x8]
0056f8d2  MOV ECX,dword ptr [ECX + 0x6c]
0056f8d5  MOV EDX,dword ptr [EAX]
0056f8d7  MOV EAX,dword ptr [EDX + 0x70]
0056f8da  CALL EAX
0056f8dc  MOV ESP,EBP
0056f8de  POP EBP
0056f8df  RET
