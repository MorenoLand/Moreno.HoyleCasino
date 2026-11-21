; FUN_005a9ab0  005a9ab0
005a9ab0  PUSH EBP
005a9ab1  MOV EBP,ESP
005a9ab3  SUB ESP,0x8
005a9ab6  MOV dword ptr [EBP + -0x8],ECX
005a9ab9  MOV EAX,dword ptr [EBP + 0xc]
005a9abc  PUSH EAX
005a9abd  MOV ECX,dword ptr [EBP + 0x8]
005a9ac0  PUSH ECX
005a9ac1  MOV ECX,dword ptr [EBP + -0x8]
005a9ac4  CALL 0x005a9b10
005a9ac9  MOV dword ptr [EBP + -0x4],EAX
005a9acc  PUSH 0x2
005a9ace  CALL 0x0062fbf0
005a9ad3  ADD ESP,0x4
005a9ad6  CMP EAX,0x1
005a9ad9  JNZ 0x005a9aef
005a9adb  PUSH 0x3
005a9add  CALL 0x0062fbf0
005a9ae2  ADD ESP,0x4
005a9ae5  MOV EDX,dword ptr [EBP + -0x4]
005a9ae8  SUB EDX,EAX
005a9aea  MOV dword ptr [EBP + -0x4],EDX
005a9aed  JMP 0x005a9aff
005a9aef  PUSH 0x3
005a9af1  CALL 0x0062fbf0
005a9af6  ADD ESP,0x4
005a9af9  ADD EAX,dword ptr [EBP + -0x4]
005a9afc  MOV dword ptr [EBP + -0x4],EAX
005a9aff  MOV EAX,dword ptr [EBP + -0x4]
005a9b02  MOV ESP,EBP
005a9b04  POP EBP
005a9b05  RET 0x8
