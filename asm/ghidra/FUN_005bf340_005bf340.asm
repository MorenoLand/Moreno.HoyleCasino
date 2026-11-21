; FUN_005bf340  005bf340
005bf340  PUSH EBP
005bf341  MOV EBP,ESP
005bf343  PUSH -0x1
005bf345  PUSH 0x6a82ce
005bf34a  MOV EAX,FS:[0x0]
005bf350  PUSH EAX
005bf351  SUB ESP,0x6c
005bf354  MOV EAX,[0x00781870]
005bf359  XOR EAX,EBP
005bf35b  PUSH EAX
005bf35c  LEA EAX,[EBP + -0xc]
005bf35f  MOV FS:[0x0],EAX
005bf365  MOV dword ptr [EBP + -0x78],ECX
005bf368  MOV ECX,dword ptr [EBP + -0x78]
005bf36b  CALL 0x005bf210
005bf370  MOV dword ptr [EBP + -0x4],0x0
005bf377  MOV EAX,dword ptr [EBP + -0x78]
005bf37a  MOV dword ptr [EAX],0x6d1d04
005bf380  MOV ECX,dword ptr [EBP + -0x78]
005bf383  ADD ECX,0x1c
005bf386  MOV dword ptr [EBP + -0x74],ECX
005bf389  LEA EDX,[EBP + -0x15]
005bf38c  MOV dword ptr [EBP + -0x14],EDX
005bf38f  PUSH 0x0
005bf391  MOV ECX,dword ptr [EBP + -0x74]
005bf394  CALL 0x005c0870
005bf399  MOV EAX,dword ptr [EBP + -0x78]
005bf39c  MOV dword ptr [EAX + 0x14],0x0
005bf3a3  MOV ECX,dword ptr [EBP + -0x78]
005bf3a6  MOV dword ptr [ECX + 0x18],0x0
005bf3ad  MOV dword ptr [EBP + -0x4],0xffffffff
005bf3b4  MOV EAX,dword ptr [EBP + -0x78]
005bf3b7  MOV ECX,dword ptr [EBP + -0xc]
005bf3ba  MOV dword ptr FS:[0x0],ECX
005bf3c1  POP ECX
005bf3c2  MOV ESP,EBP
005bf3c4  POP EBP
005bf3c5  RET
