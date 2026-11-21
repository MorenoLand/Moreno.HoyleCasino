; FUN_00597ac0  00597ac0
00597ac0  PUSH EBP
00597ac1  MOV EBP,ESP
00597ac3  SUB ESP,0x8
00597ac6  MOV dword ptr [EBP + -0x8],ECX
00597ac9  MOV ECX,dword ptr [EBP + -0x8]
00597acc  CALL 0x005e9e20
00597ad1  MOV EAX,dword ptr [EBP + -0x8]
00597ad4  MOV dword ptr [EAX],0x6cea48
00597ada  MOV ECX,dword ptr [EBP + -0x8]
00597add  MOV dword ptr [ECX + 0x4],0x0
00597ae4  MOV dword ptr [EBP + -0x4],0x0
00597aeb  JMP 0x00597af6
00597aed  MOV EDX,dword ptr [EBP + -0x4]
00597af0  ADD EDX,0x1
00597af3  MOV dword ptr [EBP + -0x4],EDX
00597af6  CMP dword ptr [EBP + -0x4],0xc
00597afa  JGE 0x00597b0c
00597afc  MOV EAX,dword ptr [EBP + -0x4]
00597aff  MOV ECX,dword ptr [EBP + -0x8]
00597b02  MOV dword ptr [ECX + EAX*0x4 + 0x8],0x0
00597b0a  JMP 0x00597aed
00597b0c  MOV EDX,dword ptr [EBP + -0x8]
00597b0f  MOV byte ptr [EDX + 0x12c],0x0
00597b16  MOV EAX,dword ptr [EBP + -0x8]
00597b19  MOV ESP,EBP
00597b1b  POP EBP
00597b1c  RET
