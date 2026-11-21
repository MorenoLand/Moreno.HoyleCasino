; FUN_005eac00  005eac00
005eac00  PUSH EBP
005eac01  MOV EBP,ESP
005eac03  PUSH -0x1
005eac05  PUSH 0x6a9c2b
005eac0a  MOV EAX,FS:[0x0]
005eac10  PUSH EAX
005eac11  PUSH ECX
005eac12  MOV EAX,[0x00781870]
005eac17  XOR EAX,EBP
005eac19  PUSH EAX
005eac1a  LEA EAX,[EBP + -0xc]
005eac1d  MOV FS:[0x0],EAX
005eac23  MOV dword ptr [EBP + -0x10],ECX
005eac26  MOV EAX,dword ptr [EBP + -0x10]
005eac29  MOV dword ptr [EAX],0x6d6214
005eac2f  MOV dword ptr [EBP + -0x4],0x0
005eac36  MOV ECX,dword ptr [EBP + -0x10]
005eac39  CALL 0x005eac80
005eac3e  MOV ECX,dword ptr [EBP + -0x10]
005eac41  CMP dword ptr [ECX + 0x174],0x0
005eac48  JZ 0x005eac5f
005eac4a  MOV EDX,dword ptr [EBP + -0x10]
005eac4d  MOV EAX,dword ptr [EDX + 0x174]
005eac53  PUSH EAX
005eac54  MOV ECX,dword ptr [EBP + -0x10]
005eac57  MOV ECX,dword ptr [ECX + 0x48]
005eac5a  CALL 0x006041d0
005eac5f  MOV dword ptr [EBP + -0x4],0xffffffff
005eac66  MOV ECX,dword ptr [EBP + -0x10]
005eac69  CALL 0x005f4ad0
005eac6e  MOV ECX,dword ptr [EBP + -0xc]
005eac71  MOV dword ptr FS:[0x0],ECX
005eac78  POP ECX
005eac79  MOV ESP,EBP
005eac7b  POP EBP
005eac7c  RET
