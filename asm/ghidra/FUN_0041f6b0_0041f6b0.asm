; FUN_0041f6b0  0041f6b0
0041f6b0  PUSH EBP
0041f6b1  MOV EBP,ESP
0041f6b3  SUB ESP,0x8
0041f6b6  MOV dword ptr [EBP + -0x4],ECX
0041f6b9  CMP dword ptr [EBP + 0x8],0x4
0041f6bd  JNZ 0x0041f6c1
0041f6bf  JMP 0x0041f70e
0041f6c1  MOV EAX,dword ptr [EBP + 0xc]
0041f6c4  MOV ECX,dword ptr [EBP + -0x4]
0041f6c7  CMP dword ptr [ECX + EAX*0x4 + 0x18],0x0
0041f6cc  JZ 0x0041f70e
0041f6ce  PUSH 0x0
0041f6d0  MOV EDX,dword ptr [EBP + 0x8]
0041f6d3  PUSH EDX
0041f6d4  MOV EAX,dword ptr [EBP + 0xc]
0041f6d7  MOV ECX,dword ptr [EBP + -0x4]
0041f6da  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x18]
0041f6de  MOV EAX,dword ptr [EBP + 0xc]
0041f6e1  MOV ECX,dword ptr [EBP + -0x4]
0041f6e4  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x18]
0041f6e8  MOV EDX,dword ptr [EDX]
0041f6ea  MOV EAX,dword ptr [EDX + 0xb8]
0041f6f0  CALL EAX
0041f6f2  MOV ECX,dword ptr [EBP + 0x8]
0041f6f5  PUSH ECX
0041f6f6  CALL 0x005dcb00
0041f6fb  ADD ESP,0x4
0041f6fe  MOV dword ptr [EBP + -0x8],EAX
0041f701  MOV EDX,dword ptr [EBP + -0x8]
0041f704  MOV EAX,dword ptr [EDX]
0041f706  MOV ECX,dword ptr [EBP + -0x8]
0041f709  MOV EDX,dword ptr [EAX + 0x14]
0041f70c  CALL EDX
0041f70e  MOV ESP,EBP
0041f710  POP EBP
0041f711  RET 0x8
