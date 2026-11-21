; FUN_004182a0  004182a0
004182a0  PUSH EBP
004182a1  MOV EBP,ESP
004182a3  SUB ESP,0x8
004182a6  MOV dword ptr [EBP + -0x8],ECX
004182a9  MOV ECX,dword ptr [EBP + -0x8]
004182ac  CALL 0x005e9e20
004182b1  MOV EAX,dword ptr [EBP + -0x8]
004182b4  MOV dword ptr [EAX],0x6b4af8
004182ba  MOV ECX,dword ptr [EBP + -0x8]
004182bd  MOV dword ptr [ECX + 0x464],0x0
004182c7  MOV dword ptr [EBP + -0x4],0x0
004182ce  JMP 0x004182d9
004182d0  MOV EDX,dword ptr [EBP + -0x4]
004182d3  ADD EDX,0x1
004182d6  MOV dword ptr [EBP + -0x4],EDX
004182d9  CMP dword ptr [EBP + -0x4],0x4
004182dd  JGE 0x004182f2
004182df  MOV EAX,dword ptr [EBP + -0x4]
004182e2  MOV ECX,dword ptr [EBP + -0x8]
004182e5  MOV dword ptr [ECX + EAX*0x4 + 0x468],0x0
004182f0  JMP 0x004182d0
004182f2  MOV EDX,dword ptr [EBP + -0x8]
004182f5  MOV dword ptr [EDX + 0x4ec],0xffffffff
004182ff  MOV EAX,dword ptr [EBP + -0x8]
00418302  MOV dword ptr [EAX + 0x4f0],0xffffffff
0041830c  MOV EAX,dword ptr [EBP + -0x8]
0041830f  MOV ESP,EBP
00418311  POP EBP
00418312  RET
