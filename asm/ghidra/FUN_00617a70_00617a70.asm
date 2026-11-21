; FUN_00617a70  00617a70
00617a70  PUSH EBP
00617a71  MOV EBP,ESP
00617a73  SUB ESP,0x8
00617a76  LEA EAX,[EBP + 0x8]
00617a79  MOV dword ptr [EBP + -0x4],EAX
00617a7c  MOV ECX,dword ptr [EBP + -0x4]
00617a7f  MOV DL,byte ptr [ECX + 0x2]
00617a82  MOV byte ptr [EBP + -0x8],DL
00617a85  MOV EAX,dword ptr [EBP + -0x4]
00617a88  MOV CL,byte ptr [EAX + 0x1]
00617a8b  MOV byte ptr [EBP + -0x7],CL
00617a8e  MOV EDX,dword ptr [EBP + -0x4]
00617a91  MOV AL,byte ptr [EDX]
00617a93  MOV byte ptr [EBP + -0x6],AL
00617a96  MOV ECX,dword ptr [EBP + -0x4]
00617a99  MOV DL,byte ptr [ECX + 0x3]
00617a9c  MOV byte ptr [EBP + -0x5],DL
00617a9f  MOV EAX,dword ptr [EBP + -0x8]
00617aa2  MOV ESP,EBP
00617aa4  POP EBP
00617aa5  RET
