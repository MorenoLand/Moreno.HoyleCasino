; FUN_0068cc40  0068cc40
0068cc40  PUSH EBP
0068cc41  MOV EBP,ESP
0068cc43  SUB ESP,0xb0
0068cc49  MOV dword ptr [EBP + 0xffffff54],ECX
0068cc4f  MOV EAX,dword ptr [EBP + 0xffffff54]
0068cc55  MOV ECX,dword ptr [EAX + 0x4]
0068cc58  MOV EDX,dword ptr [ECX + 0x4]
0068cc5b  MOV dword ptr [EBP + -0xc],EDX
0068cc5e  MOV EAX,dword ptr [EBP + 0xffffff54]
0068cc64  MOV ECX,dword ptr [EAX + 0x4]
0068cc67  MOV dword ptr [EBP + -0x8],ECX
0068cc6a  MOV byte ptr [EBP + -0x1],0x1
0068cc6e  MOV EDX,dword ptr [EBP + -0xc]
0068cc71  MOVSX EAX,byte ptr [EDX + 0x35]
0068cc75  TEST EAX,EAX
0068cc77  JNZ 0x0068ccc2
0068cc79  MOV ECX,dword ptr [EBP + -0xc]
0068cc7c  MOV dword ptr [EBP + -0x8],ECX
0068cc7f  MOV EDX,dword ptr [EBP + -0xc]
0068cc82  ADD EDX,0xc
0068cc85  PUSH EDX
0068cc86  MOV EAX,dword ptr [EBP + 0xc]
0068cc89  PUSH EAX
0068cc8a  CALL dword ptr [0x006b20f0]
0068cc90  ADD ESP,0x8
0068cc93  MOV byte ptr [EBP + -0x1],AL
0068cc96  MOVZX ECX,byte ptr [EBP + -0x1]
0068cc9a  TEST ECX,ECX
0068cc9c  JZ 0x0068ccab
0068cc9e  MOV EDX,dword ptr [EBP + -0xc]
0068cca1  MOV EAX,dword ptr [EDX]
0068cca3  MOV dword ptr [EBP + 0xffffff50],EAX
0068cca9  JMP 0x0068ccb7
0068ccab  MOV ECX,dword ptr [EBP + -0xc]
0068ccae  MOV EDX,dword ptr [ECX + 0x8]
0068ccb1  MOV dword ptr [EBP + 0xffffff50],EDX
0068ccb7  MOV EAX,dword ptr [EBP + 0xffffff50]
0068ccbd  MOV dword ptr [EBP + -0xc],EAX
0068ccc0  JMP 0x0068cc6e
0068ccc2  XOR ECX,ECX
0068ccc4  JZ 0x0068cd14
0068ccc6  MOV byte ptr [EBP + -0x15],0x1
0068ccca  MOV EDX,dword ptr [EBP + 0xc]
0068cccd  PUSH EDX
0068ccce  MOV EAX,dword ptr [EBP + -0x8]
0068ccd1  PUSH EAX
0068ccd2  MOV CL,byte ptr [EBP + -0x1]
0068ccd5  PUSH ECX
0068ccd6  LEA EDX,[EBP + -0x20]
0068ccd9  PUSH EDX
0068ccda  MOV ECX,dword ptr [EBP + 0xffffff54]
0068cce0  CALL 0x0068d070
0068cce5  MOV dword ptr [EBP + 0xffffff6c],EAX
0068cceb  MOV EAX,dword ptr [EBP + 0xffffff6c]
0068ccf1  MOV ECX,dword ptr [EAX]
0068ccf3  MOV EDX,dword ptr [EAX + 0x4]
0068ccf6  MOV EAX,dword ptr [EBP + 0x8]
0068ccf9  MOV dword ptr [EAX],ECX
0068ccfb  MOV dword ptr [EAX + 0x4],EDX
0068ccfe  MOV ECX,dword ptr [EBP + 0x8]
0068cd01  MOV DL,byte ptr [EBP + -0x15]
0068cd04  MOV byte ptr [ECX + 0x8],DL
0068cd07  MOV EAX,dword ptr [EBP + 0x8]
0068cd0a  JMP 0x0068ce6b
0068cd14  MOV EAX,dword ptr [EBP + 0xffffff54]
0068cd1a  PUSH EAX
0068cd1b  MOV ECX,dword ptr [EBP + -0x8]
0068cd1e  PUSH ECX
0068cd1f  LEA ECX,[EBP + -0x14]
0068cd22  CALL 0x0068d4b0
0068cd27  MOVZX EDX,byte ptr [EBP + -0x1]
0068cd2b  TEST EDX,EDX
0068cd2d  JNZ 0x0068cd34
0068cd2f  JMP 0x0068cdde
0068cd34  MOV EAX,dword ptr [EBP + 0xffffff54]
0068cd3a  MOV ECX,dword ptr [EAX + 0x4]
0068cd3d  MOV dword ptr [EBP + 0xffffff68],ECX
0068cd43  MOV EDX,dword ptr [EBP + 0xffffff68]
0068cd49  MOV EAX,dword ptr [EDX]
0068cd4b  MOV dword ptr [EBP + 0xffffff64],EAX
0068cd51  MOV ECX,dword ptr [EBP + 0xffffff54]
0068cd57  PUSH ECX
0068cd58  MOV EDX,dword ptr [EBP + 0xffffff64]
0068cd5e  PUSH EDX
0068cd5f  LEA ECX,[EBP + -0x28]
0068cd62  CALL 0x0068d4b0
0068cd67  CMP dword ptr [EBP + -0x14],0x0
0068cd6b  JZ 0x0068cd75
0068cd6d  MOV EAX,dword ptr [EBP + -0x14]
0068cd70  CMP EAX,dword ptr [EBP + -0x28]
0068cd73  JZ 0x0068cd7b
0068cd75  CALL dword ptr [0x006b2274]
0068cd7b  MOV ECX,dword ptr [EBP + -0x10]
0068cd7e  XOR EDX,EDX
0068cd80  CMP ECX,dword ptr [EBP + -0x24]
0068cd83  SETZ DL
0068cd86  MOVZX EAX,DL
0068cd89  TEST EAX,EAX
0068cd8b  JZ 0x0068cdd6
0068cd8d  MOV byte ptr [EBP + -0x29],0x1
0068cd91  MOV ECX,dword ptr [EBP + 0xc]
0068cd94  PUSH ECX
0068cd95  MOV EDX,dword ptr [EBP + -0x8]
0068cd98  PUSH EDX
0068cd99  PUSH 0x1
0068cd9b  LEA EAX,[EBP + -0x34]
0068cd9e  PUSH EAX
0068cd9f  MOV ECX,dword ptr [EBP + 0xffffff54]
0068cda5  CALL 0x0068d070
0068cdaa  MOV dword ptr [EBP + 0xffffff60],EAX
0068cdb0  MOV ECX,dword ptr [EBP + 0xffffff60]
0068cdb6  MOV EDX,dword ptr [ECX]
0068cdb8  MOV EAX,dword ptr [ECX + 0x4]
0068cdbb  MOV ECX,dword ptr [EBP + 0x8]
0068cdbe  MOV dword ptr [ECX],EDX
0068cdc0  MOV dword ptr [ECX + 0x4],EAX
0068cdc3  MOV EDX,dword ptr [EBP + 0x8]
0068cdc6  MOV AL,byte ptr [EBP + -0x29]
0068cdc9  MOV byte ptr [EDX + 0x8],AL
0068cdcc  MOV EAX,dword ptr [EBP + 0x8]
0068cdcf  JMP 0x0068ce6b
0068cdd6  LEA ECX,[EBP + -0x14]
0068cdd9  CALL 0x0068eea0
0068cdde  MOV ECX,dword ptr [EBP + -0x10]
0068cde1  MOV dword ptr [EBP + 0xffffff5c],ECX
0068cde7  MOV EDX,dword ptr [EBP + 0xc]
0068cdea  PUSH EDX
0068cdeb  MOV EAX,dword ptr [EBP + 0xffffff5c]
0068cdf1  ADD EAX,0xc
0068cdf4  PUSH EAX
0068cdf5  CALL dword ptr [0x006b20f0]
0068cdfb  ADD ESP,0x8
0068cdfe  MOVZX ECX,AL
0068ce01  TEST ECX,ECX
0068ce03  JZ 0x0068ce4d
0068ce05  MOV byte ptr [EBP + -0x35],0x1
0068ce09  MOV EDX,dword ptr [EBP + 0xc]
0068ce0c  PUSH EDX
0068ce0d  MOV EAX,dword ptr [EBP + -0x8]
0068ce10  PUSH EAX
0068ce11  MOV CL,byte ptr [EBP + -0x1]
0068ce14  PUSH ECX
0068ce15  LEA EDX,[EBP + -0x40]
0068ce18  PUSH EDX
0068ce19  MOV ECX,dword ptr [EBP + 0xffffff54]
0068ce1f  CALL 0x0068d070
0068ce24  MOV dword ptr [EBP + 0xffffff58],EAX
0068ce2a  MOV EAX,dword ptr [EBP + 0xffffff58]
0068ce30  MOV ECX,dword ptr [EAX]
0068ce32  MOV EDX,dword ptr [EAX + 0x4]
0068ce35  MOV EAX,dword ptr [EBP + 0x8]
0068ce38  MOV dword ptr [EAX],ECX
0068ce3a  MOV dword ptr [EAX + 0x4],EDX
0068ce3d  MOV ECX,dword ptr [EBP + 0x8]
0068ce40  MOV DL,byte ptr [EBP + -0x35]
0068ce43  MOV byte ptr [ECX + 0x8],DL
0068ce46  MOV EAX,dword ptr [EBP + 0x8]
0068ce49  JMP 0x0068ce6b
0068ce4d  MOV byte ptr [EBP + -0x41],0x0
0068ce51  MOV EAX,dword ptr [EBP + -0x14]
0068ce54  MOV ECX,dword ptr [EBP + -0x10]
0068ce57  MOV EDX,dword ptr [EBP + 0x8]
0068ce5a  MOV dword ptr [EDX],EAX
0068ce5c  MOV dword ptr [EDX + 0x4],ECX
0068ce5f  MOV EAX,dword ptr [EBP + 0x8]
0068ce62  MOV CL,byte ptr [EBP + -0x41]
0068ce65  MOV byte ptr [EAX + 0x8],CL
0068ce68  MOV EAX,dword ptr [EBP + 0x8]
0068ce6b  MOV ESP,EBP
0068ce6d  POP EBP
0068ce6e  RET 0x8
