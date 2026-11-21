; FUN_0064fba0  0064fba0
0064fba0  PUSH EBP
0064fba1  MOV EBP,ESP
0064fba3  PUSH -0x1
0064fba5  PUSH 0x6ac28d
0064fbaa  MOV EAX,FS:[0x0]
0064fbb0  PUSH EAX
0064fbb1  SUB ESP,0x18
0064fbb4  MOV EAX,[0x00781870]
0064fbb9  XOR EAX,EBP
0064fbbb  PUSH EAX
0064fbbc  LEA EAX,[EBP + -0xc]
0064fbbf  MOV FS:[0x0],EAX
0064fbc5  MOV dword ptr [EBP + -0x1c],ECX
0064fbc8  MOV dword ptr [EBP + -0x10],0x0
0064fbcf  MOV ECX,dword ptr [0x0162ee84]
0064fbd5  CALL 0x005f3bf0
0064fbda  PUSH EAX
0064fbdb  MOV EAX,[0x0162ee84]
0064fbe0  MOV EDX,dword ptr [EAX]
0064fbe2  MOV ECX,dword ptr [0x0162ee84]
0064fbe8  MOV EAX,dword ptr [EDX + 0xe0]
0064fbee  CALL EAX
0064fbf0  MOV dword ptr [EBP + -0x10],EAX
0064fbf3  CMP dword ptr [EBP + -0x10],0x0
0064fbf7  JNZ 0x0064fbfe
0064fbf9  JMP 0x0064fcb4
0064fbfe  MOV ECX,dword ptr [EBP + -0x10]
0064fc01  MOV EDX,dword ptr [ECX]
0064fc03  MOV ECX,dword ptr [EBP + -0x10]
0064fc06  MOV EAX,dword ptr [EDX + 0xac]
0064fc0c  CALL EAX
0064fc0e  MOVZX ECX,AL
0064fc11  TEST ECX,ECX
0064fc13  JNZ 0x0064fc1a
0064fc15  JMP 0x0064fcb4
0064fc1a  MOV EDX,dword ptr [EBP + -0x1c]
0064fc1d  CMP dword ptr [EDX + 0x4c],0x0
0064fc21  JNZ 0x0064fc88
0064fc23  PUSH 0x23c
0064fc28  CALL 0x00686d82
0064fc2d  ADD ESP,0x4
0064fc30  MOV dword ptr [EBP + -0x18],EAX
0064fc33  MOV dword ptr [EBP + -0x4],0x0
0064fc3a  CMP dword ptr [EBP + -0x18],0x0
0064fc3e  JZ 0x0064fc4d
0064fc40  MOV ECX,dword ptr [EBP + -0x18]
0064fc43  CALL 0x0066f3f0
0064fc48  MOV dword ptr [EBP + -0x20],EAX
0064fc4b  JMP 0x0064fc54
0064fc4d  MOV dword ptr [EBP + -0x20],0x0
0064fc54  MOV EAX,dword ptr [EBP + -0x20]
0064fc57  MOV dword ptr [EBP + -0x14],EAX
0064fc5a  MOV dword ptr [EBP + -0x4],0xffffffff
0064fc61  MOV ECX,dword ptr [EBP + -0x1c]
0064fc64  MOV EDX,dword ptr [EBP + -0x14]
0064fc67  MOV dword ptr [ECX + 0x4c],EDX
0064fc6a  MOV EAX,dword ptr [EBP + -0x1c]
0064fc6d  MOV ECX,dword ptr [EAX + 0x4c]
0064fc70  CALL 0x0066f4f0
0064fc75  MOV ECX,dword ptr [EBP + -0x1c]
0064fc78  MOV EDX,dword ptr [ECX + 0x4c]
0064fc7b  MOV EAX,dword ptr [EBP + -0x1c]
0064fc7e  MOV ECX,dword ptr [EAX + 0x4c]
0064fc81  MOV EDX,dword ptr [EDX]
0064fc83  MOV EAX,dword ptr [EDX + 0x70]
0064fc86  CALL EAX
0064fc88  MOV ECX,dword ptr [EBP + -0x1c]
0064fc8b  MOVZX EDX,byte ptr [ECX + 0x48]
0064fc8f  TEST EDX,EDX
0064fc91  JNZ 0x0064fca1
0064fc93  MOVZX EAX,byte ptr [EBP + 0x8]
0064fc97  TEST EAX,EAX
0064fc99  JNZ 0x0064fca1
0064fc9b  MOV byte ptr [EBP + -0x21],0x0
0064fc9f  JMP 0x0064fca5
0064fca1  MOV byte ptr [EBP + -0x21],0x1
0064fca5  MOV CL,byte ptr [EBP + -0x21]
0064fca8  PUSH ECX
0064fca9  MOV EDX,dword ptr [EBP + -0x1c]
0064fcac  MOV ECX,dword ptr [EDX + 0x4c]
0064fcaf  CALL 0x0066f610
0064fcb4  MOV ECX,dword ptr [EBP + -0xc]
0064fcb7  MOV dword ptr FS:[0x0],ECX
0064fcbe  POP ECX
0064fcbf  MOV ESP,EBP
0064fcc1  POP EBP
0064fcc2  RET 0x4
