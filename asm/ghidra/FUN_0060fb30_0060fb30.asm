; FUN_0060fb30  0060fb30
0060fb30  PUSH EBP
0060fb31  MOV EBP,ESP
0060fb33  PUSH -0x1
0060fb35  PUSH 0x6aae74
0060fb3a  MOV EAX,FS:[0x0]
0060fb40  PUSH EAX
0060fb41  SUB ESP,0x2c
0060fb44  MOV EAX,[0x00781870]
0060fb49  XOR EAX,EBP
0060fb4b  PUSH EAX
0060fb4c  LEA EAX,[EBP + -0xc]
0060fb4f  MOV FS:[0x0],EAX
0060fb55  MOV dword ptr [EBP + -0x34],ECX
0060fb58  MOV dword ptr [EBP + -0x10],0x1
0060fb5f  MOV EAX,dword ptr [EBP + -0x34]
0060fb62  MOV ECX,dword ptr [EBP + 0x8]
0060fb65  CMP ECX,dword ptr [EAX + 0x188]
0060fb6b  JNZ 0x0060fb72
0060fb6d  JMP 0x0060fd27
0060fb72  MOV dword ptr [EBP + -0x14],0x0
0060fb79  JMP 0x0060fb84
0060fb7b  MOV EDX,dword ptr [EBP + -0x14]
0060fb7e  ADD EDX,0x1
0060fb81  MOV dword ptr [EBP + -0x14],EDX
0060fb84  MOV EAX,dword ptr [EBP + -0x34]
0060fb87  MOVSX ECX,word ptr [EAX + 0x184]
0060fb8e  CMP dword ptr [EBP + -0x14],ECX
0060fb91  JGE 0x0060fb9e
0060fb93  MOV EDX,dword ptr [EBP + -0x10]
0060fb96  IMUL EDX,EDX,0xa
0060fb99  MOV dword ptr [EBP + -0x10],EDX
0060fb9c  JMP 0x0060fb7b
0060fb9e  MOV EAX,dword ptr [EBP + -0x10]
0060fba1  SUB EAX,0x1
0060fba4  MOV dword ptr [EBP + -0x10],EAX
0060fba7  CMP dword ptr [EBP + 0x8],0x0
0060fbab  JGE 0x0060fbcf
0060fbad  XOR ECX,ECX
0060fbaf  JNZ 0x0060fbc8
0060fbb1  PUSH 0xb9
0060fbb6  PUSH 0x6d8404
0060fbbb  PUSH 0x6b2f58
0060fbc0  CALL 0x005e9f20
0060fbc5  ADD ESP,0xc
0060fbc8  MOV dword ptr [EBP + 0x8],0x0
0060fbcf  MOV EAX,dword ptr [EBP + 0x8]
0060fbd2  CMP EAX,dword ptr [EBP + -0x10]
0060fbd5  JLE 0x0060fbf8
0060fbd7  XOR ECX,ECX
0060fbd9  JNZ 0x0060fbf2
0060fbdb  PUSH 0xbd
0060fbe0  PUSH 0x6d8404
0060fbe5  PUSH 0x6b2f58
0060fbea  CALL 0x005e9f20
0060fbef  ADD ESP,0xc
0060fbf2  MOV EAX,dword ptr [EBP + -0x10]
0060fbf5  MOV dword ptr [EBP + 0x8],EAX
0060fbf8  MOVZX ECX,byte ptr [EBP + 0xc]
0060fbfc  TEST ECX,ECX
0060fbfe  JNZ 0x0060fc54
0060fc00  PUSH 0x38
0060fc02  CALL 0x00686d82
0060fc07  ADD ESP,0x4
0060fc0a  MOV dword ptr [EBP + -0x30],EAX
0060fc0d  MOV dword ptr [EBP + -0x4],0x0
0060fc14  CMP dword ptr [EBP + -0x30],0x0
0060fc18  JZ 0x0060fc2f
0060fc1a  MOV EDX,dword ptr [EBP + -0x34]
0060fc1d  PUSH EDX
0060fc1e  MOV EAX,dword ptr [EBP + 0x8]
0060fc21  PUSH EAX
0060fc22  MOV ECX,dword ptr [EBP + -0x30]
0060fc25  CALL 0x0060fd70
0060fc2a  MOV dword ptr [EBP + -0x38],EAX
0060fc2d  JMP 0x0060fc36
0060fc2f  MOV dword ptr [EBP + -0x38],0x0
0060fc36  MOV ECX,dword ptr [EBP + -0x38]
0060fc39  MOV dword ptr [EBP + -0x2c],ECX
0060fc3c  MOV dword ptr [EBP + -0x4],0xffffffff
0060fc43  MOV EDX,dword ptr [EBP + -0x2c]
0060fc46  PUSH EDX
0060fc47  MOV ECX,dword ptr [EBP + -0x34]
0060fc4a  CALL 0x005f5df0
0060fc4f  JMP 0x0060fd1b
0060fc54  PUSH 0x0
0060fc56  MOV ECX,dword ptr [EBP + -0x34]
0060fc59  CALL 0x005f5df0
0060fc5e  MOV EAX,dword ptr [EBP + 0x8]
0060fc61  MOV dword ptr [EBP + -0x20],EAX
0060fc64  MOV dword ptr [EBP + -0x18],0x0
0060fc6b  CMP dword ptr [EBP + -0x20],0x0
0060fc6f  JZ 0x0060fc8a
0060fc71  MOV ECX,dword ptr [EBP + -0x18]
0060fc74  ADD ECX,0x1
0060fc77  MOV dword ptr [EBP + -0x18],ECX
0060fc7a  MOV EAX,dword ptr [EBP + -0x20]
0060fc7d  CDQ
0060fc7e  MOV ECX,0xa
0060fc83  IDIV ECX
0060fc85  MOV dword ptr [EBP + -0x20],EAX
0060fc88  JMP 0x0060fc6b
0060fc8a  CMP dword ptr [EBP + -0x18],0x1
0060fc8e  JGE 0x0060fc97
0060fc90  MOV dword ptr [EBP + -0x18],0x1
0060fc97  MOV EDX,dword ptr [EBP + 0x8]
0060fc9a  MOV dword ptr [EBP + -0x1c],EDX
0060fc9d  MOV dword ptr [EBP + -0x24],0x0
0060fca4  JMP 0x0060fcaf
0060fca6  MOV EAX,dword ptr [EBP + -0x24]
0060fca9  ADD EAX,0x1
0060fcac  MOV dword ptr [EBP + -0x24],EAX
0060fcaf  MOV ECX,dword ptr [EBP + -0x34]
0060fcb2  MOVSX EDX,word ptr [ECX + 0x184]
0060fcb9  CMP dword ptr [EBP + -0x24],EDX
0060fcbc  JGE 0x0060fd1b
0060fcbe  MOV EAX,dword ptr [EBP + -0x1c]
0060fcc1  CDQ
0060fcc2  MOV ECX,0xa
0060fcc7  IDIV ECX
0060fcc9  SHL EDX,0x1
0060fccb  MOV dword ptr [EBP + -0x28],EDX
0060fcce  MOV EDX,dword ptr [EBP + -0x24]
0060fcd1  CMP EDX,dword ptr [EBP + -0x18]
0060fcd4  JL 0x0060fcdd
0060fcd6  MOV dword ptr [EBP + -0x28],0x14
0060fcdd  MOV EAX,dword ptr [EBP + -0x28]
0060fce0  PUSH EAX
0060fce1  MOV ECX,dword ptr [EBP + -0x34]
0060fce4  MOV EDX,dword ptr [ECX + 0x18c]
0060fcea  MOV EAX,dword ptr [EBP + -0x24]
0060fced  MOV ECX,dword ptr [EDX + EAX*0x4]
0060fcf0  MOV EDX,dword ptr [EBP + -0x34]
0060fcf3  MOV EAX,dword ptr [EDX + 0x18c]
0060fcf9  MOV EDX,dword ptr [EBP + -0x24]
0060fcfc  MOV EAX,dword ptr [EAX + EDX*0x4]
0060fcff  MOV EDX,dword ptr [ECX]
0060fd01  MOV ECX,EAX
0060fd03  MOV EAX,dword ptr [EDX + 0xb0]
0060fd09  CALL EAX
0060fd0b  MOV EAX,dword ptr [EBP + -0x1c]
0060fd0e  CDQ
0060fd0f  MOV ECX,0xa
0060fd14  IDIV ECX
0060fd16  MOV dword ptr [EBP + -0x1c],EAX
0060fd19  JMP 0x0060fca6
0060fd1b  MOV EDX,dword ptr [EBP + -0x34]
0060fd1e  MOV EAX,dword ptr [EBP + 0x8]
0060fd21  MOV dword ptr [EDX + 0x188],EAX
0060fd27  MOV ECX,dword ptr [EBP + -0xc]
0060fd2a  MOV dword ptr FS:[0x0],ECX
0060fd31  POP ECX
0060fd32  MOV ESP,EBP
0060fd34  POP EBP
0060fd35  RET 0x8
