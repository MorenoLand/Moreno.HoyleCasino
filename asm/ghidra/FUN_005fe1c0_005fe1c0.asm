; FUN_005fe1c0  005fe1c0
005fe1c0  PUSH EBP
005fe1c1  MOV EBP,ESP
005fe1c3  SUB ESP,0xc
005fe1c6  MOV dword ptr [EBP + -0xc],ECX
005fe1c9  CMP dword ptr [EBP + 0x8],0x0
005fe1cd  JNZ 0x005fe1d3
005fe1cf  XOR AL,AL
005fe1d1  JMP 0x005fe234
005fe1d3  MOV dword ptr [EBP + -0x8],0x0
005fe1da  MOV EAX,dword ptr [EBP + 0x10]
005fe1dd  MOV dword ptr [EBP + -0x4],EAX
005fe1e0  MOV ECX,dword ptr [EBP + -0x8]
005fe1e3  SHL ECX,0x4
005fe1e6  MOV EDX,dword ptr [EBP + 0x8]
005fe1e9  CMP dword ptr [EDX + ECX*0x1],-0x1
005fe1ed  JZ 0x005fe232
005fe1ef  MOV AL,byte ptr [EBP + 0x14]
005fe1f2  PUSH EAX
005fe1f3  MOV ECX,dword ptr [EBP + -0x4]
005fe1f6  PUSH ECX
005fe1f7  MOV EDX,dword ptr [EBP + 0xc]
005fe1fa  PUSH EDX
005fe1fb  MOV EAX,dword ptr [EBP + -0x8]
005fe1fe  SHL EAX,0x4
005fe201  ADD EAX,dword ptr [EBP + 0x8]
005fe204  PUSH EAX
005fe205  MOV ECX,dword ptr [EBP + -0xc]
005fe208  CALL 0x005fe290
005fe20d  MOVZX ECX,AL
005fe210  TEST ECX,ECX
005fe212  JNZ 0x005fe218
005fe214  XOR AL,AL
005fe216  JMP 0x005fe234
005fe218  MOV EDX,dword ptr [EBP + -0x8]
005fe21b  SHL EDX,0x4
005fe21e  MOV EAX,dword ptr [EBP + 0x8]
005fe221  MOV ECX,dword ptr [EAX + EDX*0x1]
005fe224  MOV dword ptr [EBP + -0x4],ECX
005fe227  MOV EDX,dword ptr [EBP + -0x8]
005fe22a  ADD EDX,0x1
005fe22d  MOV dword ptr [EBP + -0x8],EDX
005fe230  JMP 0x005fe1e0
005fe232  MOV AL,0x1
005fe234  MOV ESP,EBP
005fe236  POP EBP
005fe237  RET 0x10
