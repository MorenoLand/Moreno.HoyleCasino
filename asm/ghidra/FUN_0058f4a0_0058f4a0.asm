; FUN_0058f4a0  0058f4a0
0058f4a0  PUSH EBP
0058f4a1  MOV EBP,ESP
0058f4a3  SUB ESP,0x10
0058f4a6  MOV dword ptr [EBP + -0x10],ECX
0058f4a9  MOV ECX,dword ptr [EBP + -0x10]
0058f4ac  CALL 0x0058f450
0058f4b1  MOV EAX,dword ptr [EBP + -0x10]
0058f4b4  MOV ECX,dword ptr [EAX + 0x174]
0058f4ba  MOV EDX,dword ptr [ECX + 0x3c08]
0058f4c0  MOV EAX,dword ptr [EBP + -0x10]
0058f4c3  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x154]
0058f4ca  MOV dword ptr [EBP + -0x4],ECX
0058f4cd  MOV dword ptr [EBP + -0x8],0x0
0058f4d4  JMP 0x0058f4df
0058f4d6  MOV EDX,dword ptr [EBP + -0x8]
0058f4d9  ADD EDX,0x1
0058f4dc  MOV dword ptr [EBP + -0x8],EDX
0058f4df  CMP dword ptr [EBP + -0x8],0x14
0058f4e3  JGE 0x0058f526
0058f4e5  MOV EAX,dword ptr [EBP + -0x4]
0058f4e8  IMUL EAX,EAX,0x14
0058f4eb  ADD EAX,dword ptr [EBP + -0x8]
0058f4ee  MOV ECX,dword ptr [0x007947e0]
0058f4f4  MOVSX EDX,byte ptr [ECX + EAX*0x1 + 0x9c]
0058f4fc  MOV dword ptr [EBP + -0xc],EDX
0058f4ff  CMP dword ptr [EBP + -0xc],0x1
0058f503  JL 0x0058f524
0058f505  CMP dword ptr [EBP + -0xc],0x50
0058f509  JG 0x0058f524
0058f50b  MOV EAX,dword ptr [EBP + -0xc]
0058f50e  MOV ECX,dword ptr [EBP + -0x10]
0058f511  MOV EDX,dword ptr [ECX + EAX*0x4]
0058f514  MOV EAX,dword ptr [EBP + -0xc]
0058f517  MOV ECX,dword ptr [EBP + -0x10]
0058f51a  MOV ECX,dword ptr [ECX + EAX*0x4]
0058f51d  MOV EDX,dword ptr [EDX]
0058f51f  MOV EAX,dword ptr [EDX + 0x74]
0058f522  CALL EAX
0058f524  JMP 0x0058f4d6
0058f526  MOV ESP,EBP
0058f528  POP EBP
0058f529  RET
