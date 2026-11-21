; FUN_0062ce00  0062ce00
0062ce00  PUSH EBP
0062ce01  MOV EBP,ESP
0062ce03  PUSH ECX
0062ce04  MOV EAX,dword ptr [EBP + 0x8]
0062ce07  MOVZX ECX,word ptr [EAX]
0062ce0a  SHL ECX,0x8
0062ce0d  MOV EDX,dword ptr [EBP + 0x8]
0062ce10  MOVZX EAX,word ptr [EDX]
0062ce13  SAR EAX,0x8
0062ce16  OR ECX,EAX
0062ce18  MOV EDX,dword ptr [EBP + 0x8]
0062ce1b  MOV word ptr [EDX],CX
0062ce1e  MOV EAX,dword ptr [EBP + 0x8]
0062ce21  ADD EAX,0x2
0062ce24  MOV dword ptr [EBP + -0x4],EAX
0062ce27  MOV ECX,dword ptr [EBP + -0x4]
0062ce2a  MOVZX EDX,word ptr [ECX]
0062ce2d  SHL EDX,0x8
0062ce30  MOV EAX,dword ptr [EBP + -0x4]
0062ce33  MOVZX ECX,word ptr [EAX]
0062ce36  SAR ECX,0x8
0062ce39  OR EDX,ECX
0062ce3b  MOV EAX,dword ptr [EBP + -0x4]
0062ce3e  MOV word ptr [EAX],DX
0062ce41  MOV ECX,dword ptr [EBP + 0x8]
0062ce44  MOV EDX,dword ptr [ECX]
0062ce46  SHL EDX,0x10
0062ce49  MOV EAX,dword ptr [EBP + 0x8]
0062ce4c  MOV ECX,dword ptr [EAX]
0062ce4e  SHR ECX,0x10
0062ce51  OR EDX,ECX
0062ce53  MOV EAX,dword ptr [EBP + 0x8]
0062ce56  MOV dword ptr [EAX],EDX
0062ce58  MOV ESP,EBP
0062ce5a  POP EBP
0062ce5b  RET
