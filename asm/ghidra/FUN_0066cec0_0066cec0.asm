; FUN_0066cec0  0066cec0
0066cec0  PUSH EBP
0066cec1  MOV EBP,ESP
0066cec3  PUSH -0x1
0066cec5  PUSH 0x6acefb
0066ceca  MOV EAX,FS:[0x0]
0066ced0  PUSH EAX
0066ced1  SUB ESP,0x28
0066ced4  MOV EAX,[0x00781870]
0066ced9  XOR EAX,EBP
0066cedb  PUSH EAX
0066cedc  LEA EAX,[EBP + -0xc]
0066cedf  MOV FS:[0x0],EAX
0066cee5  MOV dword ptr [EBP + -0x28],ECX
0066cee8  MOV ECX,dword ptr [EBP + -0x28]
0066ceeb  CALL 0x005eaaf0
0066cef0  MOV dword ptr [EBP + -0x4],0x0
0066cef7  MOV EAX,dword ptr [EBP + -0x28]
0066cefa  MOV dword ptr [EAX],0x6e0c24
0066cf00  PUSH 0x184
0066cf05  CALL 0x00686d82
0066cf0a  ADD ESP,0x4
0066cf0d  MOV dword ptr [EBP + -0x14],EAX
0066cf10  MOV byte ptr [EBP + -0x4],0x1
0066cf14  CMP dword ptr [EBP + -0x14],0x0
0066cf18  JZ 0x0066cf27
0066cf1a  MOV ECX,dword ptr [EBP + -0x14]
0066cf1d  CALL 0x005f5bf0
0066cf22  MOV dword ptr [EBP + -0x2c],EAX
0066cf25  JMP 0x0066cf2e
0066cf27  MOV dword ptr [EBP + -0x2c],0x0
0066cf2e  MOV ECX,dword ptr [EBP + -0x2c]
0066cf31  MOV dword ptr [EBP + -0x10],ECX
0066cf34  MOV byte ptr [EBP + -0x4],0x0
0066cf38  MOV EDX,dword ptr [EBP + -0x28]
0066cf3b  MOV EAX,dword ptr [EBP + -0x10]
0066cf3e  MOV dword ptr [EDX + 0x178],EAX
0066cf44  PUSH -0x1
0066cf46  PUSH 0x1f4
0066cf4b  PUSH 0x0
0066cf4d  PUSH 0x0
0066cf4f  PUSH 0x10cccd
0066cf54  MOV ECX,dword ptr [EBP + -0x28]
0066cf57  MOV ECX,dword ptr [ECX + 0x178]
0066cf5d  CALL 0x005eae80
0066cf62  MOV EDX,dword ptr [EBP + -0x28]
0066cf65  MOV EAX,dword ptr [EDX + 0x178]
0066cf6b  MOV ECX,dword ptr [EBP + -0x28]
0066cf6e  MOV ECX,dword ptr [ECX + 0x178]
0066cf74  MOV EDX,dword ptr [EAX]
0066cf76  MOV EAX,dword ptr [EDX + 0x74]
0066cf79  CALL EAX
0066cf7b  MOV ECX,dword ptr [EBP + -0x28]
0066cf7e  MOV EDX,dword ptr [ECX + 0x178]
0066cf84  MOV dword ptr [EDX + 0x178],0x4b
0066cf8e  PUSH 0x20
0066cf90  CALL 0x00686d82
0066cf95  ADD ESP,0x4
0066cf98  MOV dword ptr [EBP + -0x1c],EAX
0066cf9b  MOV byte ptr [EBP + -0x4],0x2
0066cf9f  CMP dword ptr [EBP + -0x1c],0x0
0066cfa3  JZ 0x0066cfc4
0066cfa5  MOV EAX,dword ptr [EBP + -0x28]
0066cfa8  MOV ECX,dword ptr [EAX + 0x178]
0066cfae  CALL 0x005eb240
0066cfb3  SUB EAX,0x1
0066cfb6  PUSH EAX
0066cfb7  MOV ECX,dword ptr [EBP + -0x1c]
0066cfba  CALL 0x0066d170
0066cfbf  MOV dword ptr [EBP + -0x30],EAX
0066cfc2  JMP 0x0066cfcb
0066cfc4  MOV dword ptr [EBP + -0x30],0x0
0066cfcb  MOV ECX,dword ptr [EBP + -0x30]
0066cfce  MOV dword ptr [EBP + -0x18],ECX
0066cfd1  MOV byte ptr [EBP + -0x4],0x0
0066cfd5  MOV EDX,dword ptr [EBP + -0x18]
0066cfd8  PUSH EDX
0066cfd9  MOV EAX,dword ptr [EBP + -0x28]
0066cfdc  MOV ECX,dword ptr [EAX + 0x178]
0066cfe2  CALL 0x005f5d50
0066cfe7  PUSH 0x1dc
0066cfec  CALL 0x00686d82
0066cff1  ADD ESP,0x4
0066cff4  MOV dword ptr [EBP + -0x24],EAX
0066cff7  MOV byte ptr [EBP + -0x4],0x3
0066cffb  CMP dword ptr [EBP + -0x24],0x0
0066cfff  JZ 0x0066d00e
0066d001  MOV ECX,dword ptr [EBP + -0x24]
0066d004  CALL 0x0066cdf0
0066d009  MOV dword ptr [EBP + -0x34],EAX
0066d00c  JMP 0x0066d015
0066d00e  MOV dword ptr [EBP + -0x34],0x0
0066d015  MOV ECX,dword ptr [EBP + -0x34]
0066d018  MOV dword ptr [EBP + -0x20],ECX
0066d01b  MOV byte ptr [EBP + -0x4],0x0
0066d01f  MOV EDX,dword ptr [EBP + -0x28]
0066d022  MOV EAX,dword ptr [EBP + -0x20]
0066d025  MOV dword ptr [EDX + 0x17c],EAX
0066d02b  PUSH -0x1
0066d02d  PUSH 0x1f5
0066d032  PUSH 0x0
0066d034  PUSH 0x0
0066d036  PUSH 0x10ccce
0066d03b  MOV ECX,dword ptr [EBP + -0x28]
0066d03e  MOV ECX,dword ptr [ECX + 0x17c]
0066d044  CALL 0x005eae80
0066d049  MOV EDX,dword ptr [EBP + -0x28]
0066d04c  MOV EAX,dword ptr [EDX + 0x17c]
0066d052  MOV ECX,dword ptr [EBP + -0x28]
0066d055  MOV ECX,dword ptr [ECX + 0x17c]
0066d05b  MOV EDX,dword ptr [EAX]
0066d05d  MOV EAX,dword ptr [EDX + 0x74]
0066d060  CALL EAX
0066d062  MOV dword ptr [EBP + -0x4],0xffffffff
0066d069  MOV EAX,dword ptr [EBP + -0x28]
0066d06c  MOV ECX,dword ptr [EBP + -0xc]
0066d06f  MOV dword ptr FS:[0x0],ECX
0066d076  POP ECX
0066d077  MOV ESP,EBP
0066d079  POP EBP
0066d07a  RET
