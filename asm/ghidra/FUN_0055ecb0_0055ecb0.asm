; FUN_0055ecb0  0055ecb0
0055ecb0  PUSH EBP
0055ecb1  MOV EBP,ESP
0055ecb3  PUSH ECX
0055ecb4  MOV dword ptr [EBP + -0x4],ECX
0055ecb7  MOVSX EAX,byte ptr [EBP + 0x8]
0055ecbb  TEST EAX,EAX
0055ecbd  JNZ 0x0055ecca
0055ecbf  MOV ECX,dword ptr [EBP + -0x4]
0055ecc2  MOV DL,byte ptr [EBP + 0x8]
0055ecc5  MOV byte ptr [ECX + 0x19],DL
0055ecc8  JMP 0x0055ecde
0055ecca  MOV EAX,dword ptr [EBP + -0x4]
0055eccd  MOVSX ECX,byte ptr [EAX + 0x19]
0055ecd1  TEST ECX,ECX
0055ecd3  JNZ 0x0055ecde
0055ecd5  MOV EDX,dword ptr [EBP + -0x4]
0055ecd8  MOV AL,byte ptr [EBP + 0x8]
0055ecdb  MOV byte ptr [EDX + 0x19],AL
0055ecde  MOV ESP,EBP
0055ece0  POP EBP
0055ece1  RET 0x4
