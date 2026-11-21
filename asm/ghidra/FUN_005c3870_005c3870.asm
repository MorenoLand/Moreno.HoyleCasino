; FUN_005c3870  005c3870
005c3870  PUSH EBP
005c3871  MOV EBP,ESP
005c3873  SUB ESP,0x6c
005c3876  MOV dword ptr [EBP + -0x6c],ECX
005c3879  MOV EAX,dword ptr [EBP + -0x6c]
005c387c  ADD EAX,0x20
005c387f  MOV dword ptr [EBP + -0x68],EAX
005c3882  LEA ECX,[EBP + -0x9]
005c3885  MOV dword ptr [EBP + -0x8],ECX
005c3888  PUSH 0x0
005c388a  MOV ECX,dword ptr [EBP + -0x68]
005c388d  CALL 0x005bef20
005c3892  MOV EDX,dword ptr [EBP + -0x6c]
005c3895  MOV dword ptr [EDX],0x0
005c389b  MOV EAX,dword ptr [EBP + -0x6c]
005c389e  MOV dword ptr [EAX + 0x4],0x0
005c38a5  MOV ECX,dword ptr [EBP + -0x6c]
005c38a8  FLDZ
005c38aa  FSTP float ptr [ECX + 0x8]
005c38ad  MOV EDX,dword ptr [EBP + -0x6c]
005c38b0  FLDZ
005c38b2  FSTP float ptr [EDX + 0xc]
005c38b5  MOV EAX,dword ptr [EBP + -0x6c]
005c38b8  FLDZ
005c38ba  FSTP float ptr [EAX + 0x10]
005c38bd  MOV ECX,dword ptr [EBP + -0x6c]
005c38c0  FLDZ
005c38c2  FSTP float ptr [ECX + 0x14]
005c38c5  MOV EDX,dword ptr [EBP + -0x6c]
005c38c8  FLDZ
005c38ca  FSTP float ptr [EDX + 0x18]
005c38cd  MOV EAX,dword ptr [EBP + -0x6c]
005c38d0  MOV dword ptr [EAX + 0x1c],0x1
005c38d7  MOV ECX,dword ptr [EBP + -0x6c]
005c38da  MOV dword ptr [ECX + 0x30],0x0
005c38e1  MOV EAX,dword ptr [EBP + -0x6c]
005c38e4  MOV ESP,EBP
005c38e6  POP EBP
005c38e7  RET
