; FUN_005ffd60  005ffd60
005ffd60  PUSH EBP
005ffd61  MOV EBP,ESP
005ffd63  PUSH ECX
005ffd64  MOV dword ptr [EBP + -0x4],ECX
005ffd67  PUSH 0x0
005ffd69  MOV EAX,dword ptr [EBP + -0x4]
005ffd6c  MOV ECX,dword ptr [EAX + 0x4]
005ffd6f  CALL 0x005f89f0
005ffd74  MOV ECX,dword ptr [EBP + 0x8]
005ffd77  PUSH ECX
005ffd78  MOV EDX,dword ptr [EBP + -0x4]
005ffd7b  MOV EAX,dword ptr [EDX]
005ffd7d  MOV ECX,dword ptr [EBP + -0x4]
005ffd80  MOV EDX,dword ptr [EAX + 0x84]
005ffd86  CALL EDX
005ffd88  MOVZX EAX,AL
005ffd8b  TEST EAX,EAX
005ffd8d  JZ 0x005ffdc3
005ffd8f  PUSH 0x3
005ffd91  MOV ECX,dword ptr [EBP + -0x4]
005ffd94  MOV EDX,dword ptr [ECX]
005ffd96  MOV ECX,dword ptr [EBP + -0x4]
005ffd99  MOV EAX,dword ptr [EDX + 0xd8]
005ffd9f  CALL EAX
005ffda1  MOV ECX,dword ptr [EBP + -0x4]
005ffda4  MOV EDX,dword ptr [ECX]
005ffda6  MOV ECX,dword ptr [EBP + -0x4]
005ffda9  MOV EAX,dword ptr [EDX + 0xf0]
005ffdaf  CALL EAX
005ffdb1  MOV ECX,dword ptr [EBP + -0x4]
005ffdb4  MOV EDX,dword ptr [ECX]
005ffdb6  MOV ECX,dword ptr [EBP + -0x4]
005ffdb9  MOV EAX,dword ptr [EDX + 0xc0]
005ffdbf  CALL EAX
005ffdc1  JMP 0x005ffdd5
005ffdc3  PUSH 0x0
005ffdc5  MOV ECX,dword ptr [EBP + -0x4]
005ffdc8  MOV EDX,dword ptr [ECX]
005ffdca  MOV ECX,dword ptr [EBP + -0x4]
005ffdcd  MOV EAX,dword ptr [EDX + 0xd8]
005ffdd3  CALL EAX
005ffdd5  MOV ECX,dword ptr [EBP + 0x8]
005ffdd8  PUSH ECX
005ffdd9  MOV ECX,dword ptr [EBP + -0x4]
005ffddc  CALL 0x005f4f50
005ffde1  MOV EDX,dword ptr [EBP + 0x8]
005ffde4  MOV byte ptr [EDX + 0x4],0x1
005ffde8  MOV ESP,EBP
005ffdea  POP EBP
005ffdeb  RET 0x4
