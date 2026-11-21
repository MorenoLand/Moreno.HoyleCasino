; FUN_00617b30  00617b30
00617b30  PUSH EBP
00617b31  MOV EBP,ESP
00617b33  SUB ESP,0x8
00617b36  LEA EAX,[EBP + -0x8]
00617b39  MOV dword ptr [EBP + -0x4],EAX
00617b3c  MOV ECX,dword ptr [EBP + -0x4]
00617b3f  MOV DL,byte ptr [EBP + 0x8]
00617b42  MOV byte ptr [ECX + 0x2],DL
00617b45  MOV EAX,dword ptr [EBP + -0x4]
00617b48  MOV CL,byte ptr [EBP + 0x9]
00617b4b  MOV byte ptr [EAX + 0x1],CL
00617b4e  MOV EDX,dword ptr [EBP + -0x4]
00617b51  MOV AL,byte ptr [EBP + 0xa]
00617b54  MOV byte ptr [EDX],AL
00617b56  MOV ECX,dword ptr [EBP + -0x4]
00617b59  MOV DL,byte ptr [EBP + 0xb]
00617b5c  MOV byte ptr [ECX + 0x3],DL
00617b5f  MOV EAX,dword ptr [EBP + -0x8]
00617b62  MOV ESP,EBP
00617b64  POP EBP
00617b65  RET
