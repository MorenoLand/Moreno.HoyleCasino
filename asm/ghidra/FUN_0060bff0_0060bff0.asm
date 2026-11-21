; FUN_0060bff0  0060bff0
0060bff0  PUSH EBP
0060bff1  MOV EBP,ESP
0060bff3  PUSH -0x1
0060bff5  PUSH 0x6aad32
0060bffa  MOV EAX,FS:[0x0]
0060c000  PUSH EAX
0060c001  SUB ESP,0x10
0060c004  MOV EAX,[0x00781870]
0060c009  XOR EAX,EBP
0060c00b  PUSH EAX
0060c00c  LEA EAX,[EBP + -0xc]
0060c00f  MOV FS:[0x0],EAX
0060c015  MOV dword ptr [EBP + -0x18],ECX
0060c018  MOV ECX,dword ptr [EBP + -0x18]
0060c01b  CALL 0x005ef3e0
0060c020  MOV EAX,dword ptr [EBP + -0x18]
0060c023  CMP dword ptr [EAX + 0x1e4],0x0
0060c02a  JNZ 0x0060c076
0060c02c  PUSH 0x184
0060c031  CALL 0x00686d82
0060c036  ADD ESP,0x4
0060c039  MOV dword ptr [EBP + -0x14],EAX
0060c03c  MOV dword ptr [EBP + -0x4],0x0
0060c043  CMP dword ptr [EBP + -0x14],0x0
0060c047  JZ 0x0060c056
0060c049  MOV ECX,dword ptr [EBP + -0x14]
0060c04c  CALL 0x005f5bf0
0060c051  MOV dword ptr [EBP + -0x1c],EAX
0060c054  JMP 0x0060c05d
0060c056  MOV dword ptr [EBP + -0x1c],0x0
0060c05d  MOV ECX,dword ptr [EBP + -0x1c]
0060c060  MOV dword ptr [EBP + -0x10],ECX
0060c063  MOV dword ptr [EBP + -0x4],0xffffffff
0060c06a  MOV EDX,dword ptr [EBP + -0x18]
0060c06d  MOV EAX,dword ptr [EBP + -0x10]
0060c070  MOV dword ptr [EDX + 0x1e4],EAX
0060c076  MOV ECX,dword ptr [EBP + -0x18]
0060c079  MOV EDX,dword ptr [ECX + 0x1e4]
0060c07f  MOV EAX,dword ptr [EBP + -0x18]
0060c082  MOV ECX,dword ptr [EAX + 0x4]
0060c085  MOV dword ptr [EDX + 0x4],ECX
0060c088  MOV EDX,dword ptr [EBP + -0x18]
0060c08b  MOV EAX,dword ptr [EDX + 0x1e4]
0060c091  MOV ECX,dword ptr [EBP + -0x18]
0060c094  MOV ECX,dword ptr [ECX + 0x1e4]
0060c09a  MOV EDX,dword ptr [EAX]
0060c09c  MOV EAX,dword ptr [EDX + 0x40]
0060c09f  CALL EAX
0060c0a1  MOV ECX,dword ptr [EBP + -0x18]
0060c0a4  MOV EDX,dword ptr [ECX + 0x1e4]
0060c0aa  MOV EAX,dword ptr [EBP + -0x18]
0060c0ad  MOV ECX,dword ptr [EAX + 0x1e4]
0060c0b3  MOV EDX,dword ptr [EDX]
0060c0b5  MOV EAX,dword ptr [EDX + 0x74]
0060c0b8  CALL EAX
0060c0ba  MOV ECX,dword ptr [EBP + -0xc]
0060c0bd  MOV dword ptr FS:[0x0],ECX
0060c0c4  POP ECX
0060c0c5  MOV ESP,EBP
0060c0c7  POP EBP
0060c0c8  RET
