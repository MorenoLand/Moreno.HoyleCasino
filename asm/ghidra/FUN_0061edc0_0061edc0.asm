; FUN_0061edc0  0061edc0
0061edc0  PUSH EBP
0061edc1  MOV EBP,ESP
0061edc3  SUB ESP,0x21c
0061edc9  MOV EAX,[0x00781870]
0061edce  XOR EAX,EBP
0061edd0  MOV dword ptr [EBP + -0x8],EAX
0061edd3  MOV dword ptr [EBP + 0xfffffde4],ECX
0061edd9  MOV EAX,dword ptr [EBP + 0xfffffde4]
0061eddf  MOV dword ptr [EAX + 0x14c],0x0
0061ede9  MOV ECX,dword ptr [EBP + 0xfffffde4]
0061edef  MOV ECX,dword ptr [ECX + 0x150]
0061edf5  ADD ECX,0x8
0061edf8  CALL 0x0062ac30
0061edfd  MOV dword ptr [EBP + -0x4],EAX
0061ee00  MOV EDX,dword ptr [EBP + 0xfffffde4]
0061ee06  MOV byte ptr [EDX + 0x154],0x0
0061ee0d  CMP dword ptr [EBP + -0x4],0x0
0061ee11  JZ 0x0061ef30
0061ee17  MOV EAX,dword ptr [EBP + 0xfffffde4]
0061ee1d  ADD EAX,0x144
0061ee22  PUSH EAX
0061ee23  MOV ECX,dword ptr [EBP + 0xfffffde4]
0061ee29  ADD ECX,0x140
0061ee2f  PUSH ECX
0061ee30  MOV EDX,dword ptr [EBP + 0xfffffde4]
0061ee36  MOV EAX,dword ptr [EDX + 0x34]
0061ee39  PUSH EAX
0061ee3a  MOV ECX,dword ptr [EBP + 0xfffffde4]
0061ee40  MOV EDX,dword ptr [ECX + 0x30]
0061ee43  PUSH EDX
0061ee44  MOV ECX,dword ptr [EBP + -0x4]
0061ee47  CALL 0x0062b430
0061ee4c  MOV ECX,dword ptr [EBP + 0xfffffde4]
0061ee52  MOV dword ptr [ECX + 0x13c],EAX
0061ee58  MOV EDX,dword ptr [EBP + 0xfffffde4]
0061ee5e  CMP dword ptr [EDX + 0x13c],0x0
0061ee65  JZ 0x0061eee1
0061ee67  MOVZX EAX,byte ptr [0x00795fb2]
0061ee6e  TEST EAX,EAX
0061ee70  JZ 0x0061eed8
0061ee72  MOV ECX,dword ptr [EBP + -0x4]
0061ee75  ADD ECX,0x19
0061ee78  PUSH ECX
0061ee79  MOV EDX,dword ptr [EBP + 0xfffffde4]
0061ee7f  MOV EAX,dword ptr [EDX + 0x30]
0061ee82  SAR EAX,0x18
0061ee85  PUSH EAX
0061ee86  MOV ECX,dword ptr [EBP + 0xfffffde4]
0061ee8c  MOV EDX,dword ptr [ECX + 0x30]
0061ee8f  SAR EDX,0x10
0061ee92  PUSH EDX
0061ee93  MOV EAX,dword ptr [EBP + 0xfffffde4]
0061ee99  MOV ECX,dword ptr [EAX + 0x30]
0061ee9c  SAR ECX,0x8
0061ee9f  PUSH ECX
0061eea0  MOV EDX,dword ptr [EBP + 0xfffffde4]
0061eea6  MOV EAX,dword ptr [EDX + 0x30]
0061eea9  PUSH EAX
0061eeaa  MOV ECX,dword ptr [EBP + 0xfffffde4]
0061eeb0  MOV EDX,dword ptr [ECX + 0x34]
0061eeb3  PUSH EDX
0061eeb4  PUSH 0x6d8dd8
0061eeb9  LEA EAX,[EBP + 0xfffffef0]
0061eebf  PUSH EAX
0061eec0  CALL dword ptr [0x006b2220]
0061eec6  ADD ESP,0x20
0061eec9  LEA ECX,[EBP + 0xfffffef0]
0061eecf  PUSH ECX
0061eed0  CALL 0x0062fde0
0061eed5  ADD ESP,0x4
0061eed8  MOV dword ptr [EBP + -0x4],0x0
0061eedf  JMP 0x0061ef2b
0061eee1  MOV EDX,dword ptr [EBP + 0xfffffde4]
0061eee7  MOV dword ptr [EDX + 0x13c],0x0
0061eef1  MOV EAX,dword ptr [EBP + 0xfffffde4]
0061eef7  MOV ECX,dword ptr [EAX + 0x150]
0061eefd  ADD ECX,0x8
0061ef00  CALL 0x0062ace0
0061ef05  MOV dword ptr [EBP + -0x4],EAX
0061ef08  CMP dword ptr [0x007960d8],0x0
0061ef0f  JZ 0x0061ef2b
0061ef11  MOV ECX,dword ptr [0x007960d8]
0061ef17  CMP dword ptr [ECX + 0x8],0x0
0061ef1b  JZ 0x0061ef2b
0061ef1d  MOV EDX,dword ptr [0x007960d8]
0061ef23  MOV ECX,dword ptr [EDX + 0x8]
0061ef26  CALL 0x0060acc0
0061ef2b  JMP 0x0061ee0d
0061ef30  MOV EAX,dword ptr [EBP + 0xfffffde4]
0061ef36  CMP dword ptr [EAX + 0x13c],0x0
0061ef3d  JNZ 0x0061efa9
0061ef3f  MOVZX ECX,byte ptr [0x00795fb2]
0061ef46  TEST ECX,ECX
0061ef48  JZ 0x0061efa9
0061ef4a  MOV EDX,dword ptr [EBP + 0xfffffde4]
0061ef50  MOV EAX,dword ptr [EDX + 0x30]
0061ef53  SAR EAX,0x18
0061ef56  PUSH EAX
0061ef57  MOV ECX,dword ptr [EBP + 0xfffffde4]
0061ef5d  MOV EDX,dword ptr [ECX + 0x30]
0061ef60  SAR EDX,0x10
0061ef63  PUSH EDX
0061ef64  MOV EAX,dword ptr [EBP + 0xfffffde4]
0061ef6a  MOV ECX,dword ptr [EAX + 0x30]
0061ef6d  SAR ECX,0x8
0061ef70  PUSH ECX
0061ef71  MOV EDX,dword ptr [EBP + 0xfffffde4]
0061ef77  MOV EAX,dword ptr [EDX + 0x30]
0061ef7a  PUSH EAX
0061ef7b  MOV ECX,dword ptr [EBP + 0xfffffde4]
0061ef81  MOV EDX,dword ptr [ECX + 0x34]
0061ef84  PUSH EDX
0061ef85  PUSH 0x6d8c58
0061ef8a  LEA EAX,[EBP + 0xfffffde8]
0061ef90  PUSH EAX
0061ef91  CALL dword ptr [0x006b2220]
0061ef97  ADD ESP,0x1c
0061ef9a  LEA ECX,[EBP + 0xfffffde8]
0061efa0  PUSH ECX
0061efa1  CALL 0x0062fde0
0061efa6  ADD ESP,0x4
0061efa9  MOV ECX,dword ptr [EBP + -0x8]
0061efac  XOR ECX,EBP
0061efae  CALL 0x00686d72
0061efb3  MOV ESP,EBP
0061efb5  POP EBP
0061efb6  RET
