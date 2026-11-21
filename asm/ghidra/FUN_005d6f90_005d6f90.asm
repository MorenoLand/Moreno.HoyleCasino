; FUN_005d6f90  005d6f90
005d6f90  PUSH EBP
005d6f91  MOV EBP,ESP
005d6f93  SUB ESP,0x2c
005d6f96  MOV dword ptr [EBP + -0x2c],ECX
005d6f99  MOV dword ptr [EBP + -0x20],0x1388
005d6fa0  MOV dword ptr [EBP + -0x1c],0x2710
005d6fa7  MOV dword ptr [EBP + -0x18],0xc350
005d6fae  MOV dword ptr [EBP + -0x14],0x186a0
005d6fb5  MOV dword ptr [EBP + -0x10],0xf4240
005d6fbc  MOV dword ptr [EBP + -0xc],0x5f5e100
005d6fc3  MOV dword ptr [EBP + -0x8],0x3b9aca00
005d6fca  MOV ECX,dword ptr [EBP + -0x2c]
005d6fcd  CALL 0x005d52e0
005d6fd2  MOV dword ptr [EBP + -0x4],EAX
005d6fd5  MOV ECX,dword ptr [EBP + -0x2c]
005d6fd8  CALL 0x005d52e0
005d6fdd  MOV AL,byte ptr [EAX + 0x2a]
005d6fe0  MOV byte ptr [EBP + -0x25],AL
005d6fe3  MOVSX ECX,byte ptr [EBP + -0x25]
005d6fe7  ADD ECX,0x1
005d6fea  MOV dword ptr [EBP + -0x24],ECX
005d6fed  MOV ECX,dword ptr [EBP + -0x2c]
005d6ff0  CALL 0x005d6c60
005d6ff5  MOVZX EDX,AL
005d6ff8  TEST EDX,EDX
005d6ffa  JZ 0x005d7029
005d6ffc  MOV ECX,dword ptr [EBP + -0x2c]
005d6fff  CALL 0x005d52e0
005d7004  MOV AL,byte ptr [EAX + 0x29]
005d7007  MOV byte ptr [EBP + -0x26],AL
005d700a  MOVZX ECX,byte ptr [EBP + -0x26]
005d700e  TEST ECX,ECX
005d7010  JNZ 0x005d7029
005d7012  MOV ECX,dword ptr [EBP + -0x2c]
005d7015  CALL 0x005d52e0
005d701a  MOV DL,byte ptr [EAX + 0x2a]
005d701d  MOV byte ptr [EBP + -0x27],DL
005d7020  MOVSX EAX,byte ptr [EBP + -0x27]
005d7024  CMP EAX,0x7
005d7027  JNZ 0x005d702d
005d7029  XOR AL,AL
005d702b  JMP 0x005d707d
005d702d  MOV ECX,dword ptr [EBP + -0x2c]
005d7030  CALL 0x005d5a50
005d7035  MOV ECX,dword ptr [EBP + -0x24]
005d7038  CMP EAX,dword ptr [EBP + ECX*0x4 + -0x20]
005d703c  JL 0x005d7057
005d703e  CMP dword ptr [EBP + -0x24],0x7
005d7042  JG 0x005d7057
005d7044  MOV EDX,dword ptr [EBP + -0x24]
005d7047  ADD EDX,0x1
005d704a  MOV dword ptr [EBP + -0x24],EDX
005d704d  CMP dword ptr [EBP + -0x24],0x7
005d7051  JNZ 0x005d7055
005d7053  JMP 0x005d7057
005d7055  JMP 0x005d702d
005d7057  CMP dword ptr [EBP + -0x24],0x7
005d705b  JLE 0x005d7064
005d705d  MOV dword ptr [EBP + -0x24],0x7
005d7064  MOV EAX,dword ptr [EBP + -0x24]
005d7067  SUB EAX,0x1
005d706a  PUSH EAX
005d706b  MOV ECX,dword ptr [EBP + -0x2c]
005d706e  CALL 0x005d7090
005d7073  MOV ECX,dword ptr [EBP + -0x2c]
005d7076  CALL 0x0063b0a0
005d707b  MOV AL,0x1
005d707d  MOV ESP,EBP
005d707f  POP EBP
005d7080  RET
