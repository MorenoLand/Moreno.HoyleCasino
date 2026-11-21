; FUN_005d0a20  005d0a20
005d0a20  PUSH EBP
005d0a21  MOV EBP,ESP
005d0a23  SUB ESP,0x10
005d0a26  MOV dword ptr [EBP + -0x10],ECX
005d0a29  MOV dword ptr [EBP + -0x4],0x0
005d0a30  CMP dword ptr [EBP + 0x8],0xf423f
005d0a37  JLE 0x005d0a6a
005d0a39  MOV EAX,dword ptr [EBP + 0x8]
005d0a3c  SUB EAX,0xf423f
005d0a41  MOV dword ptr [EBP + -0x4],EAX
005d0a44  MOV ECX,dword ptr [EBP + -0x4]
005d0a47  PUSH ECX
005d0a48  LEA EDX,[EBP + -0xc]
005d0a4b  PUSH EDX
005d0a4c  MOV ECX,dword ptr [EBP + -0x10]
005d0a4f  CALL 0x005d0c30
005d0a54  MOV ECX,dword ptr [EAX + 0x4]
005d0a57  PUSH ECX
005d0a58  MOV EDX,dword ptr [EAX]
005d0a5a  PUSH EDX
005d0a5b  MOV ECX,dword ptr [EBP + -0x10]
005d0a5e  CALL 0x005d1420
005d0a63  MOV dword ptr [EBP + 0x8],0xf423f
005d0a6a  MOV EAX,dword ptr [EBP + -0x10]
005d0a6d  MOV ECX,dword ptr [EBP + 0x8]
005d0a70  MOV dword ptr [EAX + 0x4],ECX
005d0a73  MOV ESP,EBP
005d0a75  POP EBP
005d0a76  RET 0x4
