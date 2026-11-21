; FUN_005d6ab0  005d6ab0
005d6ab0  PUSH EBP
005d6ab1  MOV EBP,ESP
005d6ab3  SUB ESP,0x8
005d6ab6  MOV dword ptr [EBP + -0x8],ECX
005d6ab9  MOV ECX,dword ptr [EBP + -0x8]
005d6abc  CALL 0x005d6a50
005d6ac1  MOV dword ptr [EBP + -0x4],EAX
005d6ac4  MOV ECX,dword ptr [0x007947e4]
005d6aca  CALL 0x005da7b0
005d6acf  MOVZX EAX,AL
005d6ad2  TEST EAX,EAX
005d6ad4  JNZ 0x005d6adf
005d6ad6  MOV ECX,dword ptr [EBP + -0x4]
005d6ad9  MOVSX EAX,word ptr [ECX + 0x2]
005d6add  JMP 0x005d6b2e
005d6adf  MOV ECX,dword ptr [EBP + -0x8]
005d6ae2  CALL 0x005d6b40
005d6ae7  MOVZX EDX,AL
005d6aea  TEST EDX,EDX
005d6aec  JZ 0x005d6af7
005d6aee  MOV EAX,dword ptr [EBP + -0x4]
005d6af1  MOVSX EAX,word ptr [EAX + 0x4]
005d6af5  JMP 0x005d6b2e
005d6af7  MOV ECX,dword ptr [EBP + -0x8]
005d6afa  MOV EDX,dword ptr [ECX + 0x4]
005d6afd  PUSH EDX
005d6afe  MOV EAX,[0x007947e4]
005d6b03  MOV EDX,dword ptr [EAX]
005d6b05  MOV ECX,dword ptr [0x007947e4]
005d6b0b  MOV EAX,dword ptr [EDX + 0x2c8]
005d6b11  CALL EAX
005d6b13  MOVZX ECX,AL
005d6b16  TEST ECX,ECX
005d6b18  JZ 0x005d6b23
005d6b1a  MOV EDX,dword ptr [EBP + -0x4]
005d6b1d  MOVSX EAX,word ptr [EDX + 0x6]
005d6b21  JMP 0x005d6b2e
005d6b23  MOV EAX,dword ptr [EBP + -0x4]
005d6b26  MOVSX EAX,word ptr [EAX + 0x8]
005d6b2a  JMP 0x005d6b2e
005d6b2e  MOV ESP,EBP
005d6b30  POP EBP
005d6b31  RET
