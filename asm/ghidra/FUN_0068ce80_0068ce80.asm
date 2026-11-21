; FUN_0068ce80  0068ce80
0068ce80  PUSH EBP
0068ce81  MOV EBP,ESP
0068ce83  SUB ESP,0x58
0068ce86  MOV dword ptr [EBP + -0x58],ECX
0068ce89  MOV EAX,dword ptr [EBP + -0x58]
0068ce8c  MOV ECX,dword ptr [EAX + 0x4]
0068ce8f  MOV dword ptr [EBP + -0x24],ECX
0068ce92  MOV EDX,dword ptr [EBP + -0x24]
0068ce95  MOV EAX,dword ptr [EDX]
0068ce97  MOV dword ptr [EBP + -0x28],EAX
0068ce9a  MOV dword ptr [EBP + -0x8],0x0
0068cea1  MOV ECX,dword ptr [EBP + -0x28]
0068cea4  MOV dword ptr [EBP + -0x4],ECX
0068cea7  CMP dword ptr [EBP + -0x58],0x0
0068ceab  JNZ 0x0068ceb3
0068cead  CALL dword ptr [0x006b2274]
0068ceb3  MOV EDX,dword ptr [EBP + -0x58]
0068ceb6  MOV dword ptr [EBP + -0x8],EDX
0068ceb9  CMP dword ptr [EBP + 0xc],0x0
0068cebd  JZ 0x0068cec7
0068cebf  MOV EAX,dword ptr [EBP + 0xc]
0068cec2  CMP EAX,dword ptr [EBP + -0x8]
0068cec5  JZ 0x0068cecd
0068cec7  CALL dword ptr [0x006b2274]
0068cecd  MOV ECX,dword ptr [EBP + 0x10]
0068ced0  XOR EDX,EDX
0068ced2  CMP ECX,dword ptr [EBP + -0x4]
0068ced5  SETZ DL
0068ced8  MOVZX EAX,DL
0068cedb  TEST EAX,EAX
0068cedd  JZ 0x0068cf77
0068cee3  MOV ECX,dword ptr [EBP + -0x58]
0068cee6  MOV EDX,dword ptr [ECX + 0x4]
0068cee9  MOV dword ptr [EBP + -0x2c],EDX
0068ceec  MOV dword ptr [EBP + -0x10],0x0
0068cef3  MOV EAX,dword ptr [EBP + -0x2c]
0068cef6  MOV dword ptr [EBP + -0xc],EAX
0068cef9  CMP dword ptr [EBP + -0x58],0x0
0068cefd  JNZ 0x0068cf05
0068ceff  CALL dword ptr [0x006b2274]
0068cf05  MOV ECX,dword ptr [EBP + -0x58]
0068cf08  MOV dword ptr [EBP + -0x10],ECX
0068cf0b  CMP dword ptr [EBP + 0x14],0x0
0068cf0f  JZ 0x0068cf19
0068cf11  MOV EDX,dword ptr [EBP + 0x14]
0068cf14  CMP EDX,dword ptr [EBP + -0x10]
0068cf17  JZ 0x0068cf1f
0068cf19  CALL dword ptr [0x006b2274]
0068cf1f  MOV EAX,dword ptr [EBP + 0x18]
0068cf22  XOR ECX,ECX
0068cf24  CMP EAX,dword ptr [EBP + -0xc]
0068cf27  SETZ CL
0068cf2a  MOVZX EDX,CL
0068cf2d  TEST EDX,EDX
0068cf2f  JZ 0x0068cf77
0068cf31  MOV ECX,dword ptr [EBP + -0x58]
0068cf34  CALL 0x0068b8f0
0068cf39  MOV EAX,dword ptr [EBP + -0x58]
0068cf3c  MOV ECX,dword ptr [EAX + 0x4]
0068cf3f  MOV dword ptr [EBP + -0x38],ECX
0068cf42  MOV EDX,dword ptr [EBP + -0x38]
0068cf45  MOV EAX,dword ptr [EDX]
0068cf47  MOV dword ptr [EBP + -0x3c],EAX
0068cf4a  MOV ECX,dword ptr [EBP + 0x8]
0068cf4d  MOV dword ptr [ECX],0x0
0068cf53  MOV EDX,dword ptr [EBP + 0x8]
0068cf56  MOV EAX,dword ptr [EBP + -0x3c]
0068cf59  MOV dword ptr [EDX + 0x4],EAX
0068cf5c  CMP dword ptr [EBP + -0x58],0x0
0068cf60  JNZ 0x0068cf68
0068cf62  CALL dword ptr [0x006b2274]
0068cf68  MOV ECX,dword ptr [EBP + 0x8]
0068cf6b  MOV EDX,dword ptr [EBP + -0x58]
0068cf6e  MOV dword ptr [ECX],EDX
0068cf70  MOV EAX,dword ptr [EBP + 0x8]
0068cf73  JMP 0x0068cfee
0068cf77  CMP dword ptr [EBP + 0xc],0x0
0068cf7b  JZ 0x0068cf85
0068cf7d  MOV EAX,dword ptr [EBP + 0xc]
0068cf80  CMP EAX,dword ptr [EBP + 0x14]
0068cf83  JZ 0x0068cf8b
0068cf85  CALL dword ptr [0x006b2274]
0068cf8b  MOV ECX,dword ptr [EBP + 0x10]
0068cf8e  XOR EDX,EDX
0068cf90  CMP ECX,dword ptr [EBP + 0x18]
0068cf93  SETZ DL
0068cf96  MOVZX EAX,DL
0068cf99  NEG EAX
0068cf9b  SBB EAX,EAX
0068cf9d  ADD EAX,0x1
0068cfa0  MOVZX ECX,AL
0068cfa3  TEST ECX,ECX
0068cfa5  JZ 0x0068cfdd
0068cfa7  MOV EDX,dword ptr [EBP + 0xc]
0068cfaa  MOV EAX,dword ptr [EBP + 0x10]
0068cfad  MOV dword ptr [EBP + -0x44],EDX
0068cfb0  MOV dword ptr [EBP + -0x40],EAX
0068cfb3  LEA ECX,[EBP + 0xc]
0068cfb6  CALL 0x0068e790
0068cfbb  MOV ECX,dword ptr [EBP + -0x44]
0068cfbe  MOV dword ptr [EBP + -0x18],ECX
0068cfc1  MOV EDX,dword ptr [EBP + -0x40]
0068cfc4  MOV dword ptr [EBP + -0x14],EDX
0068cfc7  MOV EAX,dword ptr [EBP + -0x14]
0068cfca  PUSH EAX
0068cfcb  MOV ECX,dword ptr [EBP + -0x18]
0068cfce  PUSH ECX
0068cfcf  LEA EDX,[EBP + -0x20]
0068cfd2  PUSH EDX
0068cfd3  MOV ECX,dword ptr [EBP + -0x58]
0068cfd6  CALL 0x0068dd20
0068cfdb  JMP 0x0068cf77
0068cfdd  MOV EAX,dword ptr [EBP + 0x8]
0068cfe0  MOV ECX,dword ptr [EBP + 0xc]
0068cfe3  MOV dword ptr [EAX],ECX
0068cfe5  MOV EDX,dword ptr [EBP + 0x10]
0068cfe8  MOV dword ptr [EAX + 0x4],EDX
0068cfeb  MOV EAX,dword ptr [EBP + 0x8]
0068cfee  MOV ESP,EBP
0068cff0  POP EBP
0068cff1  RET 0x14
