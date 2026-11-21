; FUN_0062afa0  0062afa0
0062afa0  PUSH EBP
0062afa1  MOV EBP,ESP
0062afa3  PUSH -0x1
0062afa5  PUSH 0x6ab718
0062afaa  MOV EAX,FS:[0x0]
0062afb0  PUSH EAX
0062afb1  SUB ESP,0x10
0062afb4  MOV EAX,[0x00781870]
0062afb9  XOR EAX,EBP
0062afbb  PUSH EAX
0062afbc  LEA EAX,[EBP + -0xc]
0062afbf  MOV FS:[0x0],EAX
0062afc5  MOV dword ptr [EBP + -0x1c],ECX
0062afc8  MOV EAX,dword ptr [EBP + -0x1c]
0062afcb  MOV dword ptr [EAX],0x6d970c
0062afd1  MOV dword ptr [EBP + -0x4],0x0
0062afd8  MOV ECX,dword ptr [EBP + -0x1c]
0062afdb  CMP dword ptr [ECX + 0xc],0x0
0062afdf  JZ 0x0062aff1
0062afe1  MOV EDX,dword ptr [EBP + -0x1c]
0062afe4  MOV EAX,dword ptr [EDX + 0xc]
0062afe7  PUSH EAX
0062afe8  CALL dword ptr [0x006b2258]
0062afee  ADD ESP,0x4
0062aff1  MOV ECX,dword ptr [EBP + -0x1c]
0062aff4  CMP dword ptr [ECX + 0x10],0x0
0062aff8  JZ 0x0062b00f
0062affa  MOV EDX,dword ptr [EBP + -0x1c]
0062affd  MOV EAX,dword ptr [EDX + 0x10]
0062b000  MOV dword ptr [EBP + -0x14],EAX
0062b003  MOV ECX,dword ptr [EBP + -0x14]
0062b006  PUSH ECX
0062b007  CALL 0x00686cae
0062b00c  ADD ESP,0x4
0062b00f  MOV EDX,dword ptr [EBP + -0x1c]
0062b012  CMP dword ptr [EDX + 0x14],0x0
0062b016  JZ 0x0062b033
0062b018  MOV EAX,dword ptr [EBP + -0x1c]
0062b01b  MOV ECX,dword ptr [EAX + 0x14]
0062b01e  MOV dword ptr [EBP + -0x10],ECX
0062b021  MOV EDX,dword ptr [EBP + -0x10]
0062b024  MOV dword ptr [EBP + -0x18],EDX
0062b027  MOV EAX,dword ptr [EBP + -0x18]
0062b02a  PUSH EAX
0062b02b  CALL 0x00686cae
0062b030  ADD ESP,0x4
0062b033  MOV dword ptr [EBP + -0x4],0xffffffff
0062b03a  MOV ECX,dword ptr [EBP + -0x1c]
0062b03d  CALL 0x0062aef0
0062b042  MOV ECX,dword ptr [EBP + -0xc]
0062b045  MOV dword ptr FS:[0x0],ECX
0062b04c  POP ECX
0062b04d  MOV ESP,EBP
0062b04f  POP EBP
0062b050  RET
