; FUN_00617ab0  00617ab0
00617ab0  PUSH EBP
00617ab1  MOV EBP,ESP
00617ab3  SUB ESP,0x8
00617ab6  LEA EAX,[EBP + -0x8]
00617ab9  MOV dword ptr [EBP + -0x4],EAX
00617abc  MOV ECX,dword ptr [EBP + -0x4]
00617abf  MOV DL,byte ptr [EBP + 0x8]
00617ac2  MOV byte ptr [ECX + 0x2],DL
00617ac5  MOV EAX,dword ptr [EBP + -0x4]
00617ac8  MOV CL,byte ptr [EBP + 0xc]
00617acb  MOV byte ptr [EAX + 0x1],CL
00617ace  MOV EDX,dword ptr [EBP + -0x4]
00617ad1  MOV AL,byte ptr [EBP + 0x10]
00617ad4  MOV byte ptr [EDX],AL
00617ad6  MOV ECX,dword ptr [EBP + -0x4]
00617ad9  MOV byte ptr [ECX + 0x3],0xff
00617add  MOV EAX,dword ptr [EBP + -0x8]
00617ae0  MOV ESP,EBP
00617ae2  POP EBP
00617ae3  RET
