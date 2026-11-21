; FUN_005bbf70  005bbf70
005bbf70  PUSH EBP
005bbf71  MOV EBP,ESP
005bbf73  PUSH -0x1
005bbf75  PUSH 0x6a8080
005bbf7a  MOV EAX,FS:[0x0]
005bbf80  PUSH EAX
005bbf81  PUSH ECX
005bbf82  SUB ESP,0x80
005bbf88  PUSH EBX
005bbf89  PUSH ESI
005bbf8a  PUSH EDI
005bbf8b  MOV EAX,[0x00781870]
005bbf90  XOR EAX,EBP
005bbf92  PUSH EAX
005bbf93  LEA EAX,[EBP + -0xc]
005bbf96  MOV FS:[0x0],EAX
005bbf9c  MOV dword ptr [EBP + -0x10],ESP
005bbf9f  MOV EAX,dword ptr [EBP + 0x8]
005bbfa2  MOV dword ptr [EBP + -0x14],EAX
005bbfa5  MOV dword ptr [EBP + -0x4],0x0
005bbfac  JMP 0x005bbfc0
005bbfae  MOV ECX,dword ptr [EBP + 0xc]
005bbfb1  SUB ECX,0x1
005bbfb4  MOV dword ptr [EBP + 0xc],ECX
005bbfb7  MOV EDX,dword ptr [EBP + 0x8]
005bbfba  ADD EDX,0x10
005bbfbd  MOV dword ptr [EBP + 0x8],EDX
005bbfc0  CMP dword ptr [EBP + 0xc],0x0
005bbfc4  JBE 0x005bbfd8
005bbfc6  MOV EAX,dword ptr [EBP + 0x10]
005bbfc9  PUSH EAX
005bbfca  MOV ECX,dword ptr [EBP + 0x8]
005bbfcd  PUSH ECX
005bbfce  CALL 0x005bc520
005bbfd3  ADD ESP,0x8
005bbfd6  JMP 0x005bbfae
005bbfd8  JMP 0x005bc020
