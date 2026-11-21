; FUN_005b5260  005b5260
005b5260  PUSH EBP
005b5261  MOV EBP,ESP
005b5263  SUB ESP,0x10
005b5266  MOV dword ptr [EBP + -0x10],ECX
005b5269  CMP dword ptr [EBP + 0xc],-0x1
005b526d  JNZ 0x005b527e
005b526f  MOV EAX,dword ptr [EBP + 0x8]
005b5272  PUSH EAX
005b5273  MOV ECX,dword ptr [EBP + -0x10]
005b5276  CALL 0x005b4e50
005b527b  MOV dword ptr [EBP + 0xc],EAX
005b527e  MOV dword ptr [EBP + -0x8],0x0
005b5285  MOV ECX,dword ptr [EBP + 0xc]
005b5288  PUSH ECX
005b5289  MOV EDX,dword ptr [EBP + 0x8]
005b528c  PUSH EDX
005b528d  MOV ECX,dword ptr [EBP + -0x10]
005b5290  CALL 0x005b5830
005b5295  MOV dword ptr [EBP + -0x4],EAX
005b5298  MOV dword ptr [EBP + -0xc],0x0
005b529f  JMP 0x005b52aa
005b52a1  MOV EAX,dword ptr [EBP + -0xc]
005b52a4  ADD EAX,0x1
005b52a7  MOV dword ptr [EBP + -0xc],EAX
005b52aa  MOV ECX,dword ptr [EBP + -0xc]
005b52ad  CMP ECX,dword ptr [EBP + -0x4]
005b52b0  JGE 0x005b52ce
005b52b2  MOV EDX,dword ptr [EBP + -0xc]
005b52b5  PUSH EDX
005b52b6  MOV EAX,dword ptr [EBP + 0xc]
005b52b9  PUSH EAX
005b52ba  MOV ECX,dword ptr [EBP + 0x8]
005b52bd  PUSH ECX
005b52be  MOV ECX,dword ptr [EBP + -0x10]
005b52c1  CALL 0x005b5f60
005b52c6  ADD EAX,dword ptr [EBP + -0x8]
005b52c9  MOV dword ptr [EBP + -0x8],EAX
005b52cc  JMP 0x005b52a1
005b52ce  MOV EAX,dword ptr [EBP + -0x8]
005b52d1  MOV ESP,EBP
005b52d3  POP EBP
005b52d4  RET 0x8
