; FUN_0047cc00  0047cc00
0047cc00  PUSH EBP
0047cc01  MOV EBP,ESP
0047cc03  SUB ESP,0x14
0047cc06  MOV dword ptr [EBP + -0x14],ECX
0047cc09  MOV dword ptr [EBP + -0x4],0x0
0047cc10  MOV dword ptr [EBP + -0xc],0x0
0047cc17  JMP 0x0047cc22
0047cc19  MOV EAX,dword ptr [EBP + -0xc]
0047cc1c  ADD EAX,0x1
0047cc1f  MOV dword ptr [EBP + -0xc],EAX
0047cc22  CMP dword ptr [EBP + -0xc],0x7
0047cc26  JGE 0x0047cc37
0047cc28  MOV ECX,dword ptr [EBP + -0xc]
0047cc2b  MOV EDX,dword ptr [EBP + 0x8]
0047cc2e  MOV dword ptr [EDX + ECX*0x4],0xffffffff
0047cc35  JMP 0x0047cc19
0047cc37  MOV dword ptr [EBP + -0xc],0x0
0047cc3e  JMP 0x0047cc49
0047cc40  MOV EAX,dword ptr [EBP + -0xc]
0047cc43  ADD EAX,0x1
0047cc46  MOV dword ptr [EBP + -0xc],EAX
0047cc49  CMP dword ptr [EBP + -0xc],0x7
0047cc4d  JGE 0x0047cc9f
0047cc4f  MOV ECX,dword ptr [EBP + -0xc]
0047cc52  PUSH ECX
0047cc53  MOV ECX,dword ptr [EBP + -0x14]
0047cc56  CALL 0x0047e390
0047cc5b  MOV dword ptr [EBP + -0x8],EAX
0047cc5e  MOV ECX,dword ptr [EBP + -0x8]
0047cc61  CALL 0x004c61b0
0047cc66  MOVZX EDX,AL
0047cc69  TEST EDX,EDX
0047cc6b  JNZ 0x0047cc9d
0047cc6d  MOV EAX,dword ptr [EBP + -0x8]
0047cc70  MOV ECX,dword ptr [EAX + 0x4]
0047cc73  PUSH ECX
0047cc74  CALL 0x005dcb00
0047cc79  ADD ESP,0x4
0047cc7c  MOV dword ptr [EBP + -0x10],EAX
0047cc7f  MOV EDX,dword ptr [EBP + -0x10]
0047cc82  CMP dword ptr [EDX + 0xc],-0x1
0047cc86  JNZ 0x0047cc9d
0047cc88  MOV EAX,dword ptr [EBP + -0x4]
0047cc8b  MOV ECX,dword ptr [EBP + 0x8]
0047cc8e  MOV EDX,dword ptr [EBP + -0xc]
0047cc91  MOV dword ptr [ECX + EAX*0x4],EDX
0047cc94  MOV EAX,dword ptr [EBP + -0x4]
0047cc97  ADD EAX,0x1
0047cc9a  MOV dword ptr [EBP + -0x4],EAX
0047cc9d  JMP 0x0047cc40
0047cc9f  MOV EAX,dword ptr [EBP + -0x4]
0047cca2  MOV ESP,EBP
0047cca4  POP EBP
0047cca5  RET 0x4
