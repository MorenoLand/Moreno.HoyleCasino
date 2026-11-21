; FUN_005df320  005df320
005df320  PUSH EBP
005df321  MOV EBP,ESP
005df323  SUB ESP,0x8
005df326  MOV dword ptr [EBP + -0x4],ECX
005df329  MOV EAX,dword ptr [EBP + 0x8]
005df32c  MOV dword ptr [EBP + -0x8],EAX
005df32f  MOV ECX,dword ptr [EBP + -0x8]
005df332  SUB ECX,0x30d400
005df338  MOV dword ptr [EBP + -0x8],ECX
005df33b  CMP dword ptr [EBP + -0x8],0x4
005df33f  JA 0x005df371
005df341  MOV EDX,dword ptr [EBP + -0x8]
005df344  JMP dword ptr [EDX*0x4 + 0x5df37c]
005df371  XOR EAX,EAX
005df373  MOV ESP,EBP
005df375  POP EBP
005df376  RET 0x4
