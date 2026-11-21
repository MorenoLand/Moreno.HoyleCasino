; FUN_00617a30  00617a30
00617a30  PUSH EBP
00617a31  MOV EBP,ESP
00617a33  SUB ESP,0x8
00617a36  LEA EAX,[EBP + 0xc]
00617a39  MOV dword ptr [EBP + -0x4],EAX
00617a3c  MOV ECX,dword ptr [EBP + -0x4]
00617a3f  MOV DL,byte ptr [ECX + 0x2]
00617a42  MOV byte ptr [EBP + -0x8],DL
00617a45  MOV EAX,dword ptr [EBP + -0x4]
00617a48  MOV CL,byte ptr [EAX + 0x1]
00617a4b  MOV byte ptr [EBP + -0x7],CL
00617a4e  MOV EDX,dword ptr [EBP + -0x4]
00617a51  MOV AL,byte ptr [EDX]
00617a53  MOV byte ptr [EBP + -0x6],AL
00617a56  MOV ECX,dword ptr [EBP + 0x8]
00617a59  MOV DX,word ptr [EBP + -0x8]
00617a5d  MOV word ptr [ECX],DX
00617a60  MOV AL,byte ptr [EBP + -0x6]
00617a63  MOV byte ptr [ECX + 0x2],AL
00617a66  MOV EAX,dword ptr [EBP + 0x8]
00617a69  MOV ESP,EBP
00617a6b  POP EBP
00617a6c  RET
