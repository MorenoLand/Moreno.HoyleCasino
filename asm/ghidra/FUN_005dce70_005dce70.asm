; FUN_005dce70  005dce70
005dce70  PUSH EBP
005dce71  MOV EBP,ESP
005dce73  PUSH -0x1
005dce75  PUSH 0x6a952c
005dce7a  MOV EAX,FS:[0x0]
005dce80  PUSH EAX
005dce81  SUB ESP,0x10
005dce84  MOV EAX,[0x00781870]
005dce89  XOR EAX,EBP
005dce8b  PUSH EAX
005dce8c  LEA EAX,[EBP + -0xc]
005dce8f  MOV FS:[0x0],EAX
005dce95  MOV dword ptr [EBP + -0x18],ECX
005dce98  MOV EAX,dword ptr [EBP + -0x18]
005dce9b  MOV dword ptr [EAX],0x6d4704
005dcea1  MOV dword ptr [EBP + -0x4],0x0
005dcea8  CMP dword ptr [0x0079506c],0x0
005dceaf  JZ 0x005dcefd
005dceb1  MOV ECX,dword ptr [0x0079506c]
005dceb7  MOV dword ptr [EBP + -0x14],ECX
005dceba  MOV EDX,dword ptr [EBP + -0x14]
005dcebd  MOV dword ptr [EBP + -0x10],EDX
005dcec0  CMP dword ptr [EBP + -0x10],0x0
005dcec4  JZ 0x005dceec
005dcec6  MOV ECX,dword ptr [EBP + -0x10]
005dcec9  CALL 0x005e7470
005dcece  MOV EAX,0x1
005dced3  AND EAX,0x1
005dced6  JZ 0x005dcee4
005dced8  MOV ECX,dword ptr [EBP + -0x10]
005dcedb  PUSH ECX
005dcedc  CALL 0x00686cae
005dcee1  ADD ESP,0x4
005dcee4  MOV EDX,dword ptr [EBP + -0x10]
005dcee7  MOV dword ptr [EBP + -0x1c],EDX
005dceea  JMP 0x005dcef3
005dceec  MOV dword ptr [EBP + -0x1c],0x0
005dcef3  MOV dword ptr [0x0079506c],0x0
005dcefd  MOV dword ptr [EBP + -0x4],0xffffffff
005dcf04  MOV ECX,dword ptr [EBP + -0x18]
005dcf07  CALL 0x00631800
005dcf0c  MOV ECX,dword ptr [EBP + -0xc]
005dcf0f  MOV dword ptr FS:[0x0],ECX
005dcf16  POP ECX
005dcf17  MOV ESP,EBP
005dcf19  POP EBP
005dcf1a  RET
