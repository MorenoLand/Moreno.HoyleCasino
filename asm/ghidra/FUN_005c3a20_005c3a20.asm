; FUN_005c3a20  005c3a20
005c3a20  PUSH EBP
005c3a21  MOV EBP,ESP
005c3a23  SUB ESP,0x14c
005c3a29  MOV dword ptr [EBP + 0xfffffeb8],ECX
005c3a2f  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005c3a35  MOV ECX,dword ptr [EBP + 0x8]
005c3a38  MOV EDX,dword ptr [ECX]
005c3a3a  MOV dword ptr [EAX],EDX
005c3a3c  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005c3a42  MOV ECX,dword ptr [EBP + 0x8]
005c3a45  MOV EDX,dword ptr [ECX + 0x4]
005c3a48  MOV dword ptr [EAX + 0x4],EDX
005c3a4b  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005c3a51  MOV ECX,dword ptr [EBP + 0x8]
005c3a54  FLD float ptr [ECX + 0x8]
005c3a57  FSTP float ptr [EAX + 0x8]
005c3a5a  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005c3a60  MOV EAX,dword ptr [EBP + 0x8]
005c3a63  FLD float ptr [EAX + 0xc]
005c3a66  FSTP float ptr [EDX + 0xc]
005c3a69  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005c3a6f  MOV EDX,dword ptr [EBP + 0x8]
005c3a72  FLD float ptr [EDX + 0x10]
005c3a75  FSTP float ptr [ECX + 0x10]
005c3a78  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005c3a7e  MOV ECX,dword ptr [EBP + 0x8]
005c3a81  FLD float ptr [ECX + 0x14]
005c3a84  FSTP float ptr [EAX + 0x14]
005c3a87  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005c3a8d  MOV EAX,dword ptr [EBP + 0x8]
005c3a90  FLD float ptr [EAX + 0x18]
005c3a93  FSTP float ptr [EDX + 0x18]
005c3a96  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005c3a9c  CMP dword ptr [ECX + 0x30],0x0
005c3aa0  JZ 0x005c3ada
005c3aa2  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005c3aa8  MOV EAX,dword ptr [EDX + 0x30]
005c3aab  MOV dword ptr [EBP + -0x8],EAX
005c3aae  MOV ECX,dword ptr [EBP + -0x8]
005c3ab1  MOV dword ptr [EBP + -0x4],ECX
005c3ab4  CMP dword ptr [EBP + -0x4],0x0
005c3ab8  JZ 0x005c3ad0
005c3aba  PUSH 0x1
005c3abc  MOV EDX,dword ptr [EBP + -0x4]
005c3abf  MOV EAX,dword ptr [EDX]
005c3ac1  MOV ECX,dword ptr [EBP + -0x4]
005c3ac4  MOV EDX,dword ptr [EAX]
005c3ac6  CALL EDX
005c3ac8  MOV dword ptr [EBP + 0xfffffeb4],EAX
005c3ace  JMP 0x005c3ada
005c3ad0  MOV dword ptr [EBP + 0xfffffeb4],0x0
005c3ada  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005c3ae0  MOV ECX,dword ptr [EBP + 0x8]
005c3ae3  MOV EDX,dword ptr [ECX + 0x30]
005c3ae6  MOV dword ptr [EAX + 0x30],EDX
005c3ae9  MOV EAX,dword ptr [EBP + 0x8]
005c3aec  ADD EAX,0x20
005c3aef  PUSH EAX
005c3af0  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005c3af6  ADD ECX,0x20
005c3af9  CALL 0x005c63d0
005c3afe  MOV ESP,EBP
005c3b00  POP EBP
005c3b01  RET 0x4
