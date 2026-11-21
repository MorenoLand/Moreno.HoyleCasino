; FUN_0042a160  0042a160
0042a160  PUSH EBP
0042a161  MOV EBP,ESP
0042a163  SUB ESP,0xc
0042a166  MOV dword ptr [EBP + -0xc],ECX
0042a169  MOV EAX,dword ptr [EBP + -0xc]
0042a16c  MOV ECX,dword ptr [EAX + 0x158]
0042a172  MOV EDX,dword ptr [EBP + -0xc]
0042a175  MOV EAX,dword ptr [EDX + 0x158]
0042a17b  MOV EDX,dword ptr [ECX]
0042a17d  MOV ECX,EAX
0042a17f  MOV EAX,dword ptr [EDX + 0x74]
0042a182  CALL EAX
0042a184  MOV dword ptr [EBP + -0x4],0x0
0042a18b  JMP 0x0042a196
0042a18d  MOV ECX,dword ptr [EBP + -0x4]
0042a190  ADD ECX,0x1
0042a193  MOV dword ptr [EBP + -0x4],ECX
0042a196  CMP dword ptr [EBP + -0x4],0x2
0042a19a  JGE 0x0042a1fc
0042a19c  MOV EDX,dword ptr [EBP + -0x4]
0042a19f  MOV EAX,[0x007906d4]
0042a1a4  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xacc]
0042a1ab  MOV dword ptr [EBP + -0x8],ECX
0042a1ae  MOV EDX,dword ptr [EBP + -0x8]
0042a1b1  SUB EDX,0x1
0042a1b4  PUSH EDX
0042a1b5  MOV EAX,dword ptr [EBP + -0x4]
0042a1b8  MOV ECX,dword ptr [EBP + -0xc]
0042a1bb  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x150]
0042a1c2  MOV EAX,dword ptr [EBP + -0x4]
0042a1c5  MOV ECX,dword ptr [EBP + -0xc]
0042a1c8  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x150]
0042a1cf  MOV EDX,dword ptr [EDX]
0042a1d1  MOV EAX,dword ptr [EDX + 0xb0]
0042a1d7  CALL EAX
0042a1d9  MOV ECX,dword ptr [EBP + -0x4]
0042a1dc  MOV EDX,dword ptr [EBP + -0xc]
0042a1df  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x150]
0042a1e6  MOV ECX,dword ptr [EBP + -0x4]
0042a1e9  MOV EDX,dword ptr [EBP + -0xc]
0042a1ec  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x150]
0042a1f3  MOV EAX,dword ptr [EAX]
0042a1f5  MOV EDX,dword ptr [EAX + 0x74]
0042a1f8  CALL EDX
0042a1fa  JMP 0x0042a18d
0042a1fc  MOV ESP,EBP
0042a1fe  POP EBP
0042a1ff  RET
