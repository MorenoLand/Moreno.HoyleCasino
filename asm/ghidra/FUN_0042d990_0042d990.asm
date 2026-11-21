; FUN_0042d990  0042d990
0042d990  PUSH EBP
0042d991  MOV EBP,ESP
0042d993  SUB ESP,0x1c
0042d996  MOV dword ptr [EBP + -0x18],ECX
0042d999  MOV dword ptr [EBP + -0x8],0xfc4
0042d9a0  MOV dword ptr [EBP + -0x4],0xfc6
0042d9a7  MOV EAX,dword ptr [EBP + -0x18]
0042d9aa  CMP dword ptr [EAX + 0x20],0x0
0042d9ae  JNZ 0x0042d9d0
0042d9b0  XOR ECX,ECX
0042d9b2  SHL ECX,0x2
0042d9b5  MOV EDX,dword ptr [0x007906d4]
0042d9bb  MOV EAX,dword ptr [EDX + ECX*0x1 + 0xacc]
0042d9c2  MOV dword ptr [EBP + -0x10],EAX
0042d9c5  MOV ECX,dword ptr [EBP + -0x10]
0042d9c8  SUB ECX,0x1
0042d9cb  MOV dword ptr [EBP + -0x1c],ECX
0042d9ce  JMP 0x0042d9f0
0042d9d0  MOV EDX,0x1
0042d9d5  SHL EDX,0x2
0042d9d8  MOV EAX,[0x007906d4]
0042d9dd  MOV ECX,dword ptr [EAX + EDX*0x1 + 0xacc]
0042d9e4  MOV dword ptr [EBP + -0x14],ECX
0042d9e7  MOV EDX,dword ptr [EBP + -0x14]
0042d9ea  SUB EDX,0x1
0042d9ed  MOV dword ptr [EBP + -0x1c],EDX
0042d9f0  MOV EAX,dword ptr [EBP + -0x1c]
0042d9f3  MOV dword ptr [EBP + -0xc],EAX
0042d9f6  MOV ECX,dword ptr [EBP + -0x18]
0042d9f9  MOV byte ptr [ECX + 0x18],0x0
0042d9fd  MOV EDX,dword ptr [EBP + -0x18]
0042da00  MOV EAX,dword ptr [EDX + 0x20]
0042da03  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x8]
0042da07  PUSH ECX
0042da08  MOV EDX,dword ptr [EBP + -0x18]
0042da0b  MOV EAX,dword ptr [EDX + 0x20]
0042da0e  MOV ECX,dword ptr [0x007906dc]
0042da14  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x148]
0042da1b  CALL 0x005eaf00
0042da20  MOV EDX,dword ptr [EBP + -0xc]
0042da23  PUSH EDX
0042da24  MOV EAX,dword ptr [EBP + -0x18]
0042da27  MOV ECX,dword ptr [EAX + 0x20]
0042da2a  MOV EDX,dword ptr [0x007906dc]
0042da30  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x148]
0042da37  MOV ECX,dword ptr [EBP + -0x18]
0042da3a  MOV EDX,dword ptr [ECX + 0x20]
0042da3d  MOV ECX,dword ptr [0x007906dc]
0042da43  MOV ECX,dword ptr [ECX + EDX*0x4 + 0x148]
0042da4a  MOV EDX,dword ptr [EAX]
0042da4c  MOV EAX,dword ptr [EDX + 0xb0]
0042da52  CALL EAX
0042da54  MOV ECX,dword ptr [EBP + -0x18]
0042da57  CMP dword ptr [ECX + 0x8],0x0
0042da5b  JZ 0x0042da72
0042da5d  PUSH 0x0
0042da5f  MOV EDX,dword ptr [EBP + -0x18]
0042da62  MOV EAX,dword ptr [EDX + 0x8]
0042da65  MOV ECX,dword ptr [EBP + -0x18]
0042da68  MOV ECX,dword ptr [ECX + 0x8]
0042da6b  MOV EDX,dword ptr [EAX]
0042da6d  MOV EAX,dword ptr [EDX + 0x1c]
0042da70  CALL EAX
0042da72  PUSH 0x0
0042da74  MOV ECX,dword ptr [EBP + -0x18]
0042da77  MOV ECX,dword ptr [ECX + 0x4]
0042da7a  CALL 0x005f5d50
0042da7f  MOV ESP,EBP
0042da81  POP EBP
0042da82  RET
