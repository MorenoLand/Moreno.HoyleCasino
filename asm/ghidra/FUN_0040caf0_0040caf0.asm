; FUN_0040caf0  0040caf0
0040caf0  PUSH EBP
0040caf1  MOV EBP,ESP
0040caf3  SUB ESP,0x20
0040caf6  MOV dword ptr [EBP + -0x18],ECX
0040caf9  MOV dword ptr [EBP + -0x4],0xffffffff
0040cb00  MOV dword ptr [EBP + -0x8],0x0
0040cb07  MOV byte ptr [EBP + -0xa],0x0
0040cb0b  MOV ECX,dword ptr [0x00790324]
0040cb11  CALL 0x00419dd0
0040cb16  XOR ECX,ECX
0040cb18  CMP EAX,-0x1
0040cb1b  SETNZ CL
0040cb1e  MOV byte ptr [EBP + -0x9],CL
0040cb21  MOVZX EDX,byte ptr [EBP + -0x9]
0040cb25  TEST EDX,EDX
0040cb27  JZ 0x0040cbe2
0040cb2d  MOV ECX,dword ptr [0x00790324]
0040cb33  CALL 0x00419dd0
0040cb38  MOV dword ptr [EBP + -0x4],EAX
0040cb3b  CMP dword ptr [EBP + -0x4],0x0
0040cb3f  JL 0x0040cb50
0040cb41  CMP dword ptr [EBP + -0x4],0x3
0040cb45  JG 0x0040cb50
0040cb47  MOV dword ptr [EBP + -0x1c],0x1
0040cb4e  JMP 0x0040cb57
0040cb50  MOV dword ptr [EBP + -0x1c],0x0
0040cb57  MOV AL,byte ptr [EBP + -0x1c]
0040cb5a  MOV byte ptr [EBP + -0xa],AL
0040cb5d  MOVZX ECX,byte ptr [EBP + -0xa]
0040cb61  TEST ECX,ECX
0040cb63  JZ 0x0040cbe2
0040cb65  MOV EDX,dword ptr [EBP + -0x4]
0040cb68  PUSH EDX
0040cb69  CALL 0x005dcb00
0040cb6e  ADD ESP,0x4
0040cb71  MOV dword ptr [EBP + -0x8],EAX
0040cb74  CMP dword ptr [EBP + -0x8],0x0
0040cb78  JZ 0x0040cbe2
0040cb7a  MOV ECX,dword ptr [EBP + -0x8]
0040cb7d  CALL 0x0063aac0
0040cb82  MOV EAX,dword ptr [EAX]
0040cb84  MOV dword ptr [EBP + -0x10],EAX
0040cb87  CMP dword ptr [EBP + -0x10],0x2
0040cb8b  JZ 0x0040cba9
0040cb8d  MOV ECX,dword ptr [EBP + -0x8]
0040cb90  CALL 0x0063aac0
0040cb95  MOV ECX,dword ptr [EAX]
0040cb97  MOV dword ptr [EBP + -0x14],ECX
0040cb9a  CMP dword ptr [EBP + -0x14],0x3
0040cb9e  JZ 0x0040cba9
0040cba0  MOV dword ptr [EBP + -0x20],0x0
0040cba7  JMP 0x0040cbb0
0040cba9  MOV dword ptr [EBP + -0x20],0x1
0040cbb0  MOVZX EDX,byte ptr [EBP + -0x20]
0040cbb4  TEST EDX,EDX
0040cbb6  JZ 0x0040cbe2
0040cbb8  MOV EAX,dword ptr [EBP + -0x4]
0040cbbb  PUSH EAX
0040cbbc  MOV ECX,dword ptr [0x00790324]
0040cbc2  CALL 0x0041a080
0040cbc7  MOVZX ECX,AL
0040cbca  TEST ECX,ECX
0040cbcc  JZ 0x0040cbe2
0040cbce  PUSH 0x1
0040cbd0  PUSH 0x30d7ef
0040cbd5  MOV ECX,dword ptr [0x0162ee80]
0040cbdb  CALL 0x005f2b20
0040cbe0  JMP 0x0040cbf2
0040cbe2  PUSH 0x30d7ef
0040cbe7  MOV ECX,dword ptr [0x0162ee80]
0040cbed  CALL 0x005f2ba0
0040cbf2  MOV ESP,EBP
0040cbf4  POP EBP
0040cbf5  RET
