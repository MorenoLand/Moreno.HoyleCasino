; FUN_005bf080  005bf080
005bf080  PUSH EBP
005bf081  MOV EBP,ESP
005bf083  PUSH ECX
005bf084  MOV dword ptr [EBP + -0x4],ECX
005bf087  MOV EAX,dword ptr [EBP + 0xc]
005bf08a  PUSH EAX
005bf08b  MOV ECX,dword ptr [EBP + -0x4]
005bf08e  CALL 0x006010a0
005bf093  MOV ECX,dword ptr [EBP + -0x4]
005bf096  MOV dword ptr [ECX],0x6d1cd4
005bf09c  MOV EDX,dword ptr [EBP + 0x8]
005bf09f  NEG EDX
005bf0a1  MOV EAX,dword ptr [EBP + -0x4]
005bf0a4  MOV dword ptr [EAX + 0x20],EDX
005bf0a7  MOV EAX,dword ptr [EBP + -0x4]
005bf0aa  MOV ESP,EBP
005bf0ac  POP EBP
005bf0ad  RET 0x8
