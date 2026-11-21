; FUN_0062ef70  0062ef70
0062ef70  PUSH EBP
0062ef71  MOV EBP,ESP
0062ef73  SUB ESP,0x8
0062ef76  MOV dword ptr [EBP + -0x4],ECX
0062ef79  CMP dword ptr [EBP + 0x8],0x20
0062ef7d  JZ 0x0062efa3
0062ef7f  CMP dword ptr [EBP + 0x8],0x9
0062ef83  JZ 0x0062efa3
0062ef85  MOV EAX,dword ptr [EBP + 0x8]
0062ef88  PUSH EAX
0062ef89  MOV ECX,dword ptr [EBP + -0x4]
0062ef8c  MOV EDX,dword ptr [ECX]
0062ef8e  MOV ECX,dword ptr [EBP + -0x4]
0062ef91  MOV EAX,dword ptr [EDX + 0x1c]
0062ef94  CALL EAX
0062ef96  MOVZX ECX,AL
0062ef99  TEST ECX,ECX
0062ef9b  JNZ 0x0062efa3
0062ef9d  MOV byte ptr [EBP + -0x5],0x0
0062efa1  JMP 0x0062efa7
0062efa3  MOV byte ptr [EBP + -0x5],0x1
0062efa7  MOV AL,byte ptr [EBP + -0x5]
0062efaa  MOV ESP,EBP
0062efac  POP EBP
0062efad  RET 0x4
