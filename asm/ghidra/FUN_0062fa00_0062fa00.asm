; FUN_0062fa00  0062fa00
0062fa00  PUSH EBP
0062fa01  MOV EBP,ESP
0062fa03  SUB ESP,0x20
0062fa06  MOV dword ptr [EBP + -0x20],ECX
0062fa09  MOV EAX,dword ptr [EBP + -0x20]
0062fa0c  MOV ECX,dword ptr [EBP + -0x20]
0062fa0f  MOV EDX,dword ptr [EAX + 0x8]
0062fa12  CMP EDX,dword ptr [ECX + 0xc]
0062fa15  JNZ 0x0062fa40
0062fa17  MOV EAX,dword ptr [EBP + -0x20]
0062fa1a  CMP dword ptr [EAX + 0xc],0x0
0062fa1e  JNZ 0x0062fa2a
0062fa20  MOV ECX,dword ptr [EBP + -0x20]
0062fa23  MOV dword ptr [ECX + 0xc],0x1
0062fa2a  MOV EDX,dword ptr [EBP + -0x20]
0062fa2d  MOV EAX,dword ptr [EDX + 0xc]
0062fa30  SHL EAX,0x1
0062fa32  MOV ECX,dword ptr [EBP + -0x20]
0062fa35  MOV dword ptr [ECX + 0xc],EAX
0062fa38  MOV ECX,dword ptr [EBP + -0x20]
0062fa3b  CALL 0x0062faa0
0062fa40  MOV EDX,dword ptr [EBP + -0x20]
0062fa43  MOV EAX,dword ptr [EDX + 0x8]
0062fa46  MOV ECX,dword ptr [EBP + -0x20]
0062fa49  MOV EDX,dword ptr [ECX + 0x10]
0062fa4c  MOV ECX,dword ptr [EBP + 0x8]
0062fa4f  MOV dword ptr [EDX + EAX*0x8],ECX
0062fa52  MOV ECX,dword ptr [EBP + 0xc]
0062fa55  MOV dword ptr [EDX + EAX*0x8 + 0x4],ECX
0062fa59  MOV EDX,dword ptr [EBP + -0x20]
0062fa5c  MOV EAX,dword ptr [EDX + 0x8]
0062fa5f  ADD EAX,0x1
0062fa62  MOV ECX,dword ptr [EBP + -0x20]
0062fa65  MOV dword ptr [ECX + 0x8],EAX
0062fa68  MOV ESP,EBP
0062fa6a  POP EBP
0062fa6b  RET 0x8
