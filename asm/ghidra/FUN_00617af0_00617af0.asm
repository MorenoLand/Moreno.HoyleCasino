; FUN_00617af0  00617af0
00617af0  PUSH EBP
00617af1  MOV EBP,ESP
00617af3  SUB ESP,0x8
00617af6  LEA EAX,[EBP + -0x8]
00617af9  MOV dword ptr [EBP + -0x4],EAX
00617afc  MOV ECX,dword ptr [EBP + -0x4]
00617aff  MOV DL,byte ptr [EBP + 0x8]
00617b02  MOV byte ptr [ECX + 0x2],DL
00617b05  MOV EAX,dword ptr [EBP + -0x4]
00617b08  MOV CL,byte ptr [EBP + 0x9]
00617b0b  MOV byte ptr [EAX + 0x1],CL
00617b0e  MOV EDX,dword ptr [EBP + -0x4]
00617b11  MOV AL,byte ptr [EBP + 0xa]
00617b14  MOV byte ptr [EDX],AL
00617b16  MOV ECX,dword ptr [EBP + -0x4]
00617b19  MOV byte ptr [ECX + 0x3],0xff
00617b1d  MOV EAX,dword ptr [EBP + -0x8]
00617b20  MOV ESP,EBP
00617b22  POP EBP
00617b23  RET
