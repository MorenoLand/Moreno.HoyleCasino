; FUN_0058f8a0  0058f8a0
0058f8a0  PUSH EBP
0058f8a1  MOV EBP,ESP
0058f8a3  SUB ESP,0x8
0058f8a6  MOV dword ptr [EBP + -0x8],ECX
0058f8a9  MOV EAX,dword ptr [EBP + -0x8]
0058f8ac  MOV ECX,dword ptr [EAX + 0x174]
0058f8b2  MOV EDX,dword ptr [ECX + 0x3c08]
0058f8b8  MOV EAX,dword ptr [EBP + -0x8]
0058f8bb  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x154]
0058f8c2  ADD ECX,0x1
0058f8c5  MOV dword ptr [EBP + -0x4],ECX
0058f8c8  CMP dword ptr [EBP + -0x4],0x3e9
0058f8cf  JNZ 0x0058f8d8
0058f8d1  MOV dword ptr [EBP + -0x4],0x1
0058f8d8  MOV EDX,dword ptr [EBP + -0x8]
0058f8db  MOV EAX,dword ptr [EBP + -0x4]
0058f8de  CMP EAX,dword ptr [EDX + 0x14c]
0058f8e4  JL 0x0058f8f4
0058f8e6  MOV ECX,dword ptr [EBP + -0x8]
0058f8e9  MOV EDX,dword ptr [EBP + -0x4]
0058f8ec  CMP EDX,dword ptr [ECX + 0x150]
0058f8f2  JLE 0x0058f91b
0058f8f4  MOV EAX,dword ptr [EBP + -0x4]
0058f8f7  ADD EAX,0x3e8
0058f8fc  MOV ECX,dword ptr [EBP + -0x8]
0058f8ff  CMP EAX,dword ptr [ECX + 0x14c]
0058f905  JL 0x0058f93f
0058f907  MOV EDX,dword ptr [EBP + -0x4]
0058f90a  ADD EDX,0x3e8
0058f910  MOV EAX,dword ptr [EBP + -0x8]
0058f913  CMP EDX,dword ptr [EAX + 0x150]
0058f919  JG 0x0058f93f
0058f91b  MOV ECX,dword ptr [EBP + -0x8]
0058f91e  MOV EDX,dword ptr [ECX + 0x174]
0058f924  MOV EAX,dword ptr [EDX + 0x3c08]
0058f92a  MOV ECX,dword ptr [EBP + -0x8]
0058f92d  MOV EDX,dword ptr [EBP + -0x4]
0058f930  MOV dword ptr [ECX + EAX*0x4 + 0x154],EDX
0058f937  MOV ECX,dword ptr [EBP + -0x8]
0058f93a  CALL 0x0058f730
0058f93f  MOV ESP,EBP
0058f941  POP EBP
0058f942  RET
