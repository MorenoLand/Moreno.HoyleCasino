; FUN_005decd0  005decd0
005decd0  PUSH EBP
005decd1  MOV EBP,ESP
005decd3  SUB ESP,0x8
005decd6  MOV dword ptr [EBP + -0x4],ECX
005decd9  MOV EAX,dword ptr [EBP + 0x8]
005decdc  MOV dword ptr [EBP + -0x8],EAX
005decdf  CMP dword ptr [EBP + -0x8],0x13
005dece3  JZ 0x005decf3
005dece5  CMP dword ptr [EBP + -0x8],0x14
005dece9  JZ 0x005decfa
005deceb  CMP dword ptr [EBP + -0x8],0x15
005decef  JZ 0x005ded01
005decf1  JMP 0x005ded08
005decf3  MOV EAX,0xe
005decf8  JMP 0x005ded0b
005decfa  MOV EAX,0xe
005decff  JMP 0x005ded0b
005ded01  MOV EAX,0xe
005ded06  JMP 0x005ded0b
005ded08  MOV EAX,dword ptr [EBP + 0x8]
005ded0b  MOV ESP,EBP
005ded0d  POP EBP
005ded0e  RET 0x4
