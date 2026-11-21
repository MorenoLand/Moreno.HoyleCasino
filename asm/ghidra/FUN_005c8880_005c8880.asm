; FUN_005c8880  005c8880
005c8880  PUSH EBP
005c8881  MOV EBP,ESP
005c8883  PUSH ECX
005c8884  MOV dword ptr [EBP + -0x4],ECX
005c8887  CMP dword ptr [EBP + 0x8],0x0
005c888b  JNZ 0x005c8891
005c888d  XOR AL,AL
005c888f  JMP 0x005c88d8
005c8891  MOV EAX,dword ptr [EBP + 0x8]
005c8894  MOV dword ptr [EAX],0x1
005c889a  MOV ECX,dword ptr [EBP + 0x8]
005c889d  MOV dword ptr [ECX + 0x4],0x1
005c88a4  MOV EDX,dword ptr [EBP + 0x8]
005c88a7  MOV dword ptr [EDX + 0x8],0x1
005c88ae  MOV EAX,dword ptr [EBP + 0x8]
005c88b1  MOV dword ptr [EAX + 0xc],0x1
005c88b8  MOV ECX,dword ptr [EBP + 0x8]
005c88bb  MOV dword ptr [ECX + 0x10],0x1
005c88c2  MOV EDX,dword ptr [EBP + 0x8]
005c88c5  MOV dword ptr [EDX + 0x14],0x0
005c88cc  MOV EAX,dword ptr [EBP + 0x8]
005c88cf  MOV dword ptr [EAX + 0x18],0x0
005c88d6  MOV AL,0x1
005c88d8  MOV ESP,EBP
005c88da  POP EBP
005c88db  RET 0x8
