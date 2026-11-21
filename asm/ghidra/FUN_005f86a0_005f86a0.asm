; FUN_005f86a0  005f86a0
005f86a0  PUSH EBP
005f86a1  MOV EBP,ESP
005f86a3  SUB ESP,0x8
005f86a6  MOV dword ptr [EBP + -0x4],ECX
005f86a9  MOV ECX,dword ptr [EBP + -0x4]
005f86ac  CALL 0x005f8910
005f86b1  MOVZX EAX,AL
005f86b4  TEST EAX,EAX
005f86b6  JZ 0x005f8705
005f86b8  MOV ECX,dword ptr [EBP + 0x8]
005f86bb  MOV EDX,dword ptr [EBP + -0x4]
005f86be  MOV EAX,dword ptr [ECX + 0x8]
005f86c1  CMP EAX,dword ptr [EDX + 0x108]
005f86c7  JL 0x005f8705
005f86c9  MOV ECX,dword ptr [EBP + 0x8]
005f86cc  MOV EDX,dword ptr [EBP + -0x4]
005f86cf  MOV EAX,dword ptr [ECX + 0x8]
005f86d2  CMP EAX,dword ptr [EDX + 0x110]
005f86d8  JG 0x005f8705
005f86da  MOV ECX,dword ptr [EBP + 0x8]
005f86dd  MOV EDX,dword ptr [EBP + -0x4]
005f86e0  MOV EAX,dword ptr [ECX + 0xc]
005f86e3  CMP EAX,dword ptr [EDX + 0x104]
005f86e9  JL 0x005f8705
005f86eb  MOV ECX,dword ptr [EBP + 0x8]
005f86ee  MOV EDX,dword ptr [EBP + -0x4]
005f86f1  MOV EAX,dword ptr [ECX + 0xc]
005f86f4  CMP EAX,dword ptr [EDX + 0x10c]
005f86fa  JG 0x005f8705
005f86fc  MOV dword ptr [EBP + -0x8],0x1
005f8703  JMP 0x005f870c
005f8705  MOV dword ptr [EBP + -0x8],0x0
005f870c  MOV AL,byte ptr [EBP + -0x8]
005f870f  MOV ESP,EBP
005f8711  POP EBP
005f8712  RET 0x4
