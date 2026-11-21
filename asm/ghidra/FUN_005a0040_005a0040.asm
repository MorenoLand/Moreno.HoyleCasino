; FUN_005a0040  005a0040
005a0040  PUSH EBP
005a0041  MOV EBP,ESP
005a0043  PUSH -0x1
005a0045  PUSH 0x6a779b
005a004a  MOV EAX,FS:[0x0]
005a0050  PUSH EAX
005a0051  SUB ESP,0x34
005a0054  MOV EAX,[0x00781870]
005a0059  XOR EAX,EBP
005a005b  PUSH EAX
005a005c  LEA EAX,[EBP + -0xc]
005a005f  MOV FS:[0x0],EAX
005a0065  MOV dword ptr [EBP + -0x30],ECX
005a0068  MOV EAX,dword ptr [EBP + -0x30]
005a006b  MOV dword ptr [EAX],0x6cf08c
005a0071  MOV dword ptr [EBP + -0x4],0x0
005a0078  MOV dword ptr [0x007935cc],0x0
005a0082  MOV ECX,dword ptr [0x007935c0]
005a0088  MOV dword ptr [EBP + -0x14],ECX
005a008b  MOV EDX,dword ptr [EBP + -0x14]
005a008e  MOV dword ptr [EBP + -0x10],EDX
005a0091  CMP dword ptr [EBP + -0x10],0x0
005a0095  JZ 0x005a00aa
005a0097  PUSH 0x1
005a0099  MOV EAX,dword ptr [EBP + -0x10]
005a009c  MOV EDX,dword ptr [EAX]
005a009e  MOV ECX,dword ptr [EBP + -0x10]
005a00a1  MOV EAX,dword ptr [EDX]
005a00a3  CALL EAX
005a00a5  MOV dword ptr [EBP + -0x34],EAX
005a00a8  JMP 0x005a00b1
005a00aa  MOV dword ptr [EBP + -0x34],0x0
005a00b1  MOV dword ptr [0x007935c0],0x0
005a00bb  MOV ECX,dword ptr [0x007935c4]
005a00c1  MOV dword ptr [EBP + -0x1c],ECX
005a00c4  MOV EDX,dword ptr [EBP + -0x1c]
005a00c7  MOV dword ptr [EBP + -0x18],EDX
005a00ca  CMP dword ptr [EBP + -0x18],0x0
005a00ce  JZ 0x005a00e3
005a00d0  PUSH 0x1
005a00d2  MOV EAX,dword ptr [EBP + -0x18]
005a00d5  MOV EDX,dword ptr [EAX]
005a00d7  MOV ECX,dword ptr [EBP + -0x18]
005a00da  MOV EAX,dword ptr [EDX]
005a00dc  CALL EAX
005a00de  MOV dword ptr [EBP + -0x38],EAX
005a00e1  JMP 0x005a00ea
005a00e3  MOV dword ptr [EBP + -0x38],0x0
005a00ea  MOV dword ptr [0x007935c4],0x0
005a00f4  MOV ECX,dword ptr [0x007935c8]
005a00fa  MOV dword ptr [EBP + -0x24],ECX
005a00fd  MOV EDX,dword ptr [EBP + -0x24]
005a0100  MOV dword ptr [EBP + -0x20],EDX
005a0103  CMP dword ptr [EBP + -0x20],0x0
005a0107  JZ 0x005a011c
005a0109  PUSH 0x1
005a010b  MOV EAX,dword ptr [EBP + -0x20]
005a010e  MOV EDX,dword ptr [EAX]
005a0110  MOV ECX,dword ptr [EBP + -0x20]
005a0113  MOV EAX,dword ptr [EDX]
005a0115  CALL EAX
005a0117  MOV dword ptr [EBP + -0x3c],EAX
005a011a  JMP 0x005a0123
005a011c  MOV dword ptr [EBP + -0x3c],0x0
005a0123  MOV dword ptr [0x007935c8],0x0
005a012d  MOV ECX,dword ptr [0x007935d0]
005a0133  MOV dword ptr [EBP + -0x2c],ECX
005a0136  MOV EDX,dword ptr [EBP + -0x2c]
005a0139  MOV dword ptr [EBP + -0x28],EDX
005a013c  CMP dword ptr [EBP + -0x28],0x0
005a0140  JZ 0x005a0155
005a0142  PUSH 0x1
005a0144  MOV EAX,dword ptr [EBP + -0x28]
005a0147  MOV EDX,dword ptr [EAX]
005a0149  MOV ECX,dword ptr [EBP + -0x28]
005a014c  MOV EAX,dword ptr [EDX]
005a014e  CALL EAX
005a0150  MOV dword ptr [EBP + -0x40],EAX
005a0153  JMP 0x005a015c
005a0155  MOV dword ptr [EBP + -0x40],0x0
005a015c  MOV dword ptr [0x007935d0],0x0
005a0166  MOV dword ptr [EBP + -0x4],0xffffffff
005a016d  MOV ECX,dword ptr [EBP + -0x30]
005a0170  CALL 0x005d7bd0
005a0175  MOV ECX,dword ptr [EBP + -0xc]
005a0178  MOV dword ptr FS:[0x0],ECX
005a017f  POP ECX
005a0180  MOV ESP,EBP
005a0182  POP EBP
005a0183  RET
