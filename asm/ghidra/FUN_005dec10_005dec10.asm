; FUN_005dec10  005dec10
005dec10  PUSH EBP
005dec11  MOV EBP,ESP
005dec13  PUSH -0x1
005dec15  PUSH 0x6a95e9
005dec1a  MOV EAX,FS:[0x0]
005dec20  PUSH EAX
005dec21  SUB ESP,0x10
005dec24  MOV EAX,[0x00781870]
005dec29  XOR EAX,EBP
005dec2b  PUSH EAX
005dec2c  LEA EAX,[EBP + -0xc]
005dec2f  MOV FS:[0x0],EAX
005dec35  MOV dword ptr [EBP + -0x18],ECX
005dec38  PUSH 0x4f4
005dec3d  CALL 0x00686d82
005dec42  ADD ESP,0x4
005dec45  MOV dword ptr [EBP + -0x14],EAX
005dec48  MOV dword ptr [EBP + -0x4],0x0
005dec4f  CMP dword ptr [EBP + -0x14],0x0
005dec53  JZ 0x005dec62
005dec55  MOV ECX,dword ptr [EBP + -0x14]
005dec58  CALL 0x005d4cf0
005dec5d  MOV dword ptr [EBP + -0x1c],EAX
005dec60  JMP 0x005dec69
005dec62  MOV dword ptr [EBP + -0x1c],0x0
005dec69  MOV EAX,dword ptr [EBP + -0x1c]
005dec6c  MOV dword ptr [EBP + -0x10],EAX
005dec6f  MOV dword ptr [EBP + -0x4],0xffffffff
005dec76  MOV EAX,dword ptr [EBP + -0x10]
005dec79  MOV ECX,dword ptr [EBP + -0xc]
005dec7c  MOV dword ptr FS:[0x0],ECX
005dec83  POP ECX
005dec84  MOV ESP,EBP
005dec86  POP EBP
005dec87  RET
