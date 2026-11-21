; FUN_00480ea0  00480ea0
00480ea0  PUSH EBP
00480ea1  MOV EBP,ESP
00480ea3  SUB ESP,0x8
00480ea6  MOV dword ptr [EBP + -0x4],ECX
00480ea9  MOV EAX,dword ptr [EBP + -0x4]
00480eac  CMP dword ptr [EAX + 0x100],0xe
00480eb3  JZ 0x00480eca
00480eb5  MOV ECX,dword ptr [EBP + -0x4]
00480eb8  CMP dword ptr [ECX + 0x100],0x2a
00480ebf  JZ 0x00480eca
00480ec1  MOV dword ptr [EBP + -0x8],0x0
00480ec8  JMP 0x00480ed1
00480eca  MOV dword ptr [EBP + -0x8],0x1
00480ed1  MOV AL,byte ptr [EBP + -0x8]
00480ed4  MOV ESP,EBP
00480ed6  POP EBP
00480ed7  RET
