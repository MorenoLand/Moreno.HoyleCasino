; FUN_0041a390  0041a390
0041a390  PUSH EBP
0041a391  MOV EBP,ESP
0041a393  SUB ESP,0x28
0041a396  MOV dword ptr [EBP + -0x28],ECX
0041a399  MOV dword ptr [EBP + -0x14],0x3
0041a3a0  MOV dword ptr [EBP + -0x10],0x1
0041a3a7  MOV dword ptr [EBP + -0xc],0x0
0041a3ae  MOV dword ptr [EBP + -0x8],0x2
0041a3b5  MOV dword ptr [EBP + -0x18],0x4
0041a3bc  PUSH 0x4
0041a3be  MOV ECX,dword ptr [EBP + -0x28]
0041a3c1  CALL 0x00419610
0041a3c6  MOV dword ptr [EBP + -0x1c],EAX
0041a3c9  MOV dword ptr [EBP + -0x4],0x0
0041a3d0  JMP 0x0041a3db
0041a3d2  MOV EAX,dword ptr [EBP + -0x4]
0041a3d5  ADD EAX,0x1
0041a3d8  MOV dword ptr [EBP + -0x4],EAX
0041a3db  CMP dword ptr [EBP + -0x4],0x4
0041a3df  JGE 0x0041a429
0041a3e1  MOV ECX,dword ptr [EBP + -0x4]
0041a3e4  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x14]
0041a3e8  PUSH EDX
0041a3e9  MOV ECX,dword ptr [EBP + -0x28]
0041a3ec  CALL 0x00419610
0041a3f1  CMP dword ptr [EBP + -0x1c],EAX
0041a3f4  JNZ 0x0041a427
0041a3f6  MOV EAX,dword ptr [EBP + -0x4]
0041a3f9  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x14]
0041a3fd  PUSH ECX
0041a3fe  CALL 0x005dcb00
0041a403  ADD ESP,0x4
0041a406  MOV dword ptr [EBP + -0x20],EAX
0041a409  MOV EDX,dword ptr [EBP + -0x20]
0041a40c  MOV AL,byte ptr [EDX + 0x4a0]
0041a412  MOV byte ptr [EBP + -0x21],AL
0041a415  MOVZX ECX,byte ptr [EBP + -0x21]
0041a419  TEST ECX,ECX
0041a41b  JZ 0x0041a427
0041a41d  MOV EDX,dword ptr [EBP + -0x4]
0041a420  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x14]
0041a424  MOV dword ptr [EBP + -0x18],EAX
0041a427  JMP 0x0041a3d2
0041a429  MOV EAX,dword ptr [EBP + -0x18]
0041a42c  MOV ESP,EBP
0041a42e  POP EBP
0041a42f  RET
