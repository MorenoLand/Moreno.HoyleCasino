; FUN_0056eb20  0056eb20
0056eb20  PUSH EBP
0056eb21  MOV EBP,ESP
0056eb23  SUB ESP,0x18
0056eb26  MOV dword ptr [EBP + -0x18],ECX
0056eb29  MOV word ptr [EBP + -0x10],0xffff
0056eb2f  FLDZ
0056eb31  FSTP double ptr [EBP + -0x8]
0056eb34  PUSH 0xf4240
0056eb39  CALL 0x0062fbf0
0056eb3e  ADD ESP,0x4
0056eb41  MOV dword ptr [EBP + -0x14],EAX
0056eb44  MOV word ptr [EBP + -0xc],0x0
0056eb4a  JMP 0x0056eb58
0056eb4c  MOV AX,word ptr [EBP + -0xc]
0056eb50  ADD AX,0x1
0056eb54  MOV word ptr [EBP + -0xc],AX
0056eb58  MOVSX ECX,word ptr [EBP + -0xc]
0056eb5c  CMP ECX,0xa
0056eb5f  JGE 0x0056eb91
0056eb61  MOVSX EDX,word ptr [EBP + -0xc]
0056eb65  FLD double ptr [0x006ca358]
0056eb6b  FMUL double ptr [EDX*0x8 + 0x748928]
0056eb72  FADD double ptr [EBP + -0x8]
0056eb75  FSTP double ptr [EBP + -0x8]
0056eb78  FILD dword ptr [EBP + -0x14]
0056eb7b  FCOMP double ptr [EBP + -0x8]
0056eb7e  FNSTSW AX
0056eb80  TEST AH,0x5
0056eb83  JP 0x0056eb8f
0056eb85  MOV AX,word ptr [EBP + -0xc]
0056eb89  MOV word ptr [EBP + -0x10],AX
0056eb8d  JMP 0x0056eb91
0056eb8f  JMP 0x0056eb4c
0056eb91  MOVSX ECX,word ptr [EBP + -0x10]
0056eb95  CMP ECX,-0x1
0056eb98  JNZ 0x0056eba4
0056eb9a  MOV ECX,dword ptr [EBP + -0x18]
0056eb9d  CALL 0x0056ee90
0056eba2  JMP 0x0056ebb1
0056eba4  MOVSX EDX,word ptr [EBP + -0x10]
0056eba8  PUSH EDX
0056eba9  MOV ECX,dword ptr [EBP + -0x18]
0056ebac  CALL 0x0056f040
0056ebb1  MOV ESP,EBP
0056ebb3  POP EBP
0056ebb4  RET
