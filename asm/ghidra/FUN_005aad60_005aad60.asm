; FUN_005aad60  005aad60
005aad60  PUSH EBP
005aad61  MOV EBP,ESP
005aad63  SUB ESP,0x8
005aad66  MOV dword ptr [EBP + -0x4],ECX
005aad69  MOV EAX,[0x007935f8]
005aad6e  MOV ECX,dword ptr [EAX + 0x3c]
005aad71  CALL 0x005eb240
005aad76  TEST EAX,EAX
005aad78  JL 0x005aade0
005aad7a  MOV ECX,dword ptr [0x007935f8]
005aad80  MOV ECX,dword ptr [ECX + 0x40]
005aad83  CALL 0x005eb240
005aad88  TEST EAX,EAX
005aad8a  JL 0x005aade0
005aad8c  MOV EDX,dword ptr [0x007935f8]
005aad92  MOV ECX,dword ptr [EDX + 0x44]
005aad95  CALL 0x005eb240
005aad9a  TEST EAX,EAX
005aad9c  JL 0x005aade0
005aad9e  MOV ECX,dword ptr [0x0162ee84]
005aada4  CALL 0x00637630
005aada9  MOVZX EAX,AL
005aadac  TEST EAX,EAX
005aadae  JZ 0x005aade0
005aadb0  MOVZX ECX,byte ptr [0x00795f94]
005aadb7  TEST ECX,ECX
005aadb9  JNZ 0x005aade0
005aadbb  MOV EDX,dword ptr [EBP + -0x4]
005aadbe  MOVZX EAX,byte ptr [EDX + 0x24]
005aadc2  TEST EAX,EAX
005aadc4  JNZ 0x005aade0
005aadc6  MOV ECX,dword ptr [0x00793604]
005aadcc  MOVZX EDX,byte ptr [ECX + 0x5c0]
005aadd3  TEST EDX,EDX
005aadd5  JNZ 0x005aade0
005aadd7  MOV dword ptr [EBP + -0x8],0x1
005aadde  JMP 0x005aade7
005aade0  MOV dword ptr [EBP + -0x8],0x0
005aade7  MOV AL,byte ptr [EBP + -0x8]
005aadea  MOV ESP,EBP
005aadec  POP EBP
005aaded  RET
