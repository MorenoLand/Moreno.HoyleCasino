; FUN_00571cb0  00571cb0
00571cb0  PUSH EBP
00571cb1  MOV EBP,ESP
00571cb3  SUB ESP,0x14
00571cb6  MOV dword ptr [EBP + -0x14],ECX
00571cb9  MOV dword ptr [EBP + -0x8],0xffffffff
00571cc0  MOV byte ptr [EBP + -0x9],0x1
00571cc4  MOV dword ptr [EBP + -0x4],0x0
00571ccb  JMP 0x00571cd6
00571ccd  MOV EAX,dword ptr [EBP + -0x4]
00571cd0  ADD EAX,0x1
00571cd3  MOV dword ptr [EBP + -0x4],EAX
00571cd6  CMP dword ptr [EBP + -0x4],0x3
00571cda  JGE 0x00571d20
00571cdc  MOV ECX,dword ptr [EBP + -0x4]
00571cdf  MOV dword ptr [EBP + -0x10],ECX
00571ce2  JMP 0x00571ced
00571ce4  MOV EDX,dword ptr [EBP + -0x10]
00571ce7  ADD EDX,0x1
00571cea  MOV dword ptr [EBP + -0x10],EDX
00571ced  CMP dword ptr [EBP + -0x10],0x4
00571cf1  JGE 0x00571d1e
00571cf3  MOV EAX,dword ptr [EBP + -0x10]
00571cf6  MOV ECX,dword ptr [EBP + -0x14]
00571cf9  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x8]
00571cfd  PUSH EDX
00571cfe  MOV EAX,dword ptr [EBP + -0x4]
00571d01  MOV ECX,dword ptr [EBP + -0x14]
00571d04  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x8]
00571d08  PUSH EDX
00571d09  MOV ECX,dword ptr [EBP + -0x14]
00571d0c  CALL 0x00571c80
00571d11  MOVZX EAX,AL
00571d14  TEST EAX,EAX
00571d16  JNZ 0x00571d1c
00571d18  MOV byte ptr [EBP + -0x9],0x0
00571d1c  JMP 0x00571ce4
00571d1e  JMP 0x00571ccd
00571d20  MOV AL,byte ptr [EBP + -0x9]
00571d23  MOV ESP,EBP
00571d25  POP EBP
00571d26  RET
