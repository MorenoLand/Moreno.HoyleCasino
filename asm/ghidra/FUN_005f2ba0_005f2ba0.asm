; FUN_005f2ba0  005f2ba0
005f2ba0  PUSH EBP
005f2ba1  MOV EBP,ESP
005f2ba3  SUB ESP,0xc
005f2ba6  MOV dword ptr [EBP + -0xc],ECX
005f2ba9  MOV dword ptr [EBP + -0x4],0x0
005f2bb0  JMP 0x005f2bbb
005f2bb2  MOV EAX,dword ptr [EBP + -0x4]
005f2bb5  ADD EAX,0x1
005f2bb8  MOV dword ptr [EBP + -0x4],EAX
005f2bbb  MOV ECX,dword ptr [EBP + -0x4]
005f2bbe  PUSH ECX
005f2bbf  MOV EDX,dword ptr [EBP + 0x8]
005f2bc2  PUSH EDX
005f2bc3  MOV ECX,dword ptr [EBP + -0xc]
005f2bc6  CALL 0x005f2a60
005f2bcb  TEST EAX,EAX
005f2bcd  JZ 0x005f2bf4
005f2bcf  MOV EAX,dword ptr [EBP + -0x4]
005f2bd2  PUSH EAX
005f2bd3  MOV ECX,dword ptr [EBP + 0x8]
005f2bd6  PUSH ECX
005f2bd7  MOV ECX,dword ptr [EBP + -0xc]
005f2bda  CALL 0x005f2a60
005f2bdf  MOV dword ptr [EBP + -0x8],EAX
005f2be2  MOV EDX,dword ptr [EBP + -0x8]
005f2be5  MOV EAX,dword ptr [EDX]
005f2be7  MOV ECX,dword ptr [EBP + -0x8]
005f2bea  MOV EDX,dword ptr [EAX + 0xd0]
005f2bf0  CALL EDX
005f2bf2  JMP 0x005f2bb2
005f2bf4  MOV ESP,EBP
005f2bf6  POP EBP
005f2bf7  RET 0x4
