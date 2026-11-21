; FUN_00528ca0  00528ca0
00528ca0  PUSH EBP
00528ca1  MOV EBP,ESP
00528ca3  SUB ESP,0x8
00528ca6  PUSH ESI
00528ca7  MOV dword ptr [EBP + -0x8],ECX
00528caa  MOVZX EAX,byte ptr [EBP + 0x8]
00528cae  TEST EAX,EAX
00528cb0  JZ 0x00528cf7
00528cb2  MOV dword ptr [EBP + -0x4],0x19
00528cb9  JMP 0x00528cc4
00528cbb  MOV ECX,dword ptr [EBP + -0x4]
00528cbe  SUB ECX,0x1
00528cc1  MOV dword ptr [EBP + -0x4],ECX
00528cc4  CMP dword ptr [EBP + -0x4],0x0
00528cc8  JLE 0x00528ce6
00528cca  MOV EDX,dword ptr [EBP + -0x4]
00528ccd  MOV EAX,dword ptr [EBP + -0x8]
00528cd0  MOV ECX,dword ptr [EBP + -0x4]
00528cd3  MOV ESI,dword ptr [EBP + -0x8]
00528cd6  MOV ECX,dword ptr [ESI + ECX*0x4 + 0xd40]
00528cdd  MOV dword ptr [EAX + EDX*0x4 + 0xd44],ECX
00528ce4  JMP 0x00528cbb
00528ce6  MOV ECX,dword ptr [EBP + -0x8]
00528ce9  CALL 0x00528bd0
00528cee  MOV EDX,dword ptr [EBP + -0x8]
00528cf1  MOV dword ptr [EDX + 0xd44],EAX
00528cf7  POP ESI
00528cf8  MOV ESP,EBP
00528cfa  POP EBP
00528cfb  RET 0x4
