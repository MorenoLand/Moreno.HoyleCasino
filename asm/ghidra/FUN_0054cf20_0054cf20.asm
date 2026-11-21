; FUN_0054cf20  0054cf20
0054cf20  PUSH EBP
0054cf21  MOV EBP,ESP
0054cf23  SUB ESP,0xc
0054cf26  MOV dword ptr [EBP + -0xc],ECX
0054cf29  MOV dword ptr [EBP + -0x8],0x0
0054cf30  MOV dword ptr [EBP + -0x4],0x0
0054cf37  JMP 0x0054cf42
0054cf39  MOV EAX,dword ptr [EBP + -0x4]
0054cf3c  ADD EAX,0x1
0054cf3f  MOV dword ptr [EBP + -0x4],EAX
0054cf42  MOV ECX,dword ptr [EBP + -0xc]
0054cf45  CALL 0x0054c540
0054cf4a  CMP dword ptr [EBP + -0x4],EAX
0054cf4d  JGE 0x0054cf73
0054cf4f  MOV ECX,dword ptr [EBP + -0x4]
0054cf52  MOV EDX,dword ptr [EBP + -0xc]
0054cf55  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
0054cf5a  PUSH EAX
0054cf5b  CALL 0x00641280
0054cf60  ADD ESP,0x4
0054cf63  CMP EAX,dword ptr [EBP + 0x8]
0054cf66  JNZ 0x0054cf71
0054cf68  MOV ECX,dword ptr [EBP + -0x8]
0054cf6b  ADD ECX,0x1
0054cf6e  MOV dword ptr [EBP + -0x8],ECX
0054cf71  JMP 0x0054cf39
0054cf73  MOV EAX,dword ptr [EBP + -0x8]
0054cf76  MOV ESP,EBP
0054cf78  POP EBP
0054cf79  RET 0x4
