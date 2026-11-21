; FUN_005c1a80  005c1a80
005c1a80  PUSH EBP
005c1a81  MOV EBP,ESP
005c1a83  SUB ESP,0xc
005c1a86  MOV dword ptr [EBP + -0xc],ECX
005c1a89  MOV EAX,[0x007947e0]
005c1a8e  MOV ECX,dword ptr [EAX + 0x4f14]
005c1a94  MOV dword ptr [EBP + -0x4],ECX
005c1a97  MOV EDX,dword ptr [EBP + -0x4]
005c1a9a  PUSH EDX
005c1a9b  CALL 0x005bf170
005c1aa0  ADD ESP,0x4
005c1aa3  MOV ECX,dword ptr [EBP + -0xc]
005c1aa6  MOV dword ptr [ECX + 0x10],EAX
005c1aa9  MOV EDX,dword ptr [EBP + -0xc]
005c1aac  CMP dword ptr [EDX + 0x10],0x0
005c1ab0  JNZ 0x005c1ab4
005c1ab2  JMP 0x005c1b09
005c1ab4  MOV EAX,dword ptr [EBP + -0xc]
005c1ab7  MOV EDX,dword ptr [EAX]
005c1ab9  MOV ECX,dword ptr [EBP + -0xc]
005c1abc  MOV EAX,dword ptr [EDX + 0x18]
005c1abf  CALL EAX
005c1ac1  MOV ECX,dword ptr [EBP + -0xc]
005c1ac4  PUSH ECX
005c1ac5  MOV EDX,dword ptr [EBP + -0xc]
005c1ac8  MOV ECX,dword ptr [EDX + 0x10]
005c1acb  CALL 0x005bf260
005c1ad0  MOV EAX,dword ptr [EBP + -0xc]
005c1ad3  MOV ECX,dword ptr [EAX + 0x4]
005c1ad6  PUSH ECX
005c1ad7  MOV EDX,dword ptr [EBP + -0xc]
005c1ada  MOV ECX,dword ptr [EDX + 0x10]
005c1add  CALL 0x005bf280
005c1ae2  MOV EAX,[0x007947e0]
005c1ae7  MOV ECX,dword ptr [EAX + 0x4f14]
005c1aed  MOV dword ptr [EBP + -0x8],ECX
005c1af0  MOV EDX,dword ptr [EBP + -0x8]
005c1af3  PUSH EDX
005c1af4  MOV EAX,dword ptr [EBP + -0xc]
005c1af7  MOV ECX,dword ptr [EAX + 0x10]
005c1afa  MOV EDX,dword ptr [EBP + -0xc]
005c1afd  MOV EAX,dword ptr [EDX + 0x10]
005c1b00  MOV EDX,dword ptr [ECX]
005c1b02  MOV ECX,EAX
005c1b04  MOV EAX,dword ptr [EDX + 0x4]
005c1b07  CALL EAX
005c1b09  MOV ESP,EBP
005c1b0b  POP EBP
005c1b0c  RET
