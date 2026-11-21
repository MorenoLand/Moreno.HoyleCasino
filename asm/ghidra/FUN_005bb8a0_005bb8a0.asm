; FUN_005bb8a0  005bb8a0
005bb8a0  PUSH EBP
005bb8a1  MOV EBP,ESP
005bb8a3  PUSH ECX
005bb8a4  MOV dword ptr [EBP + -0x4],ECX
005bb8a7  MOV EAX,dword ptr [EBP + -0x4]
005bb8aa  MOV dword ptr [EAX],0x6d1be0
005bb8b0  MOV ECX,dword ptr [EBP + -0x4]
005bb8b3  MOV dword ptr [ECX],0x6d1bec
005bb8b9  MOV ECX,dword ptr [EBP + -0x4]
005bb8bc  ADD ECX,0xc
005bb8bf  CALL dword ptr [0x006b20f4]
005bb8c5  MOV ECX,dword ptr [EBP + -0x4]
005bb8c8  CALL dword ptr [0x006b2278]
005bb8ce  MOV EDX,dword ptr [EBP + 0x8]
005bb8d1  AND EDX,0x1
005bb8d4  JZ 0x005bb8e2
005bb8d6  MOV EAX,dword ptr [EBP + -0x4]
005bb8d9  PUSH EAX
005bb8da  CALL 0x00686cae
005bb8df  ADD ESP,0x4
005bb8e2  MOV EAX,dword ptr [EBP + -0x4]
005bb8e5  MOV ESP,EBP
005bb8e7  POP EBP
005bb8e8  RET 0x4
