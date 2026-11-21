; FUN_0061da70  0061da70
0061da70  PUSH EBP
0061da71  MOV EBP,ESP
0061da73  SUB ESP,0xc
0061da76  PUSH ESI
0061da77  LEA EAX,[EBP + 0xc]
0061da7a  MOV dword ptr [EBP + -0x4],EAX
0061da7d  MOV ECX,dword ptr [EBP + 0x8]
0061da80  MOV dword ptr [EBP + -0x8],ECX
0061da83  CMP dword ptr [EBP + 0x10],0xff
0061da8a  JZ 0x0061db52
0061da90  MOV EDX,dword ptr [EBP + -0x8]
0061da93  MOVZX EAX,byte ptr [EDX]
0061da96  MOV ECX,dword ptr [EBP + -0x4]
0061da99  MOVZX EDX,byte ptr [ECX]
0061da9c  IMUL EDX,dword ptr [EBP + 0x10]
0061daa0  SAR EDX,0x8
0061daa3  MOV ECX,dword ptr [EBP + -0x8]
0061daa6  MOVZX ECX,byte ptr [ECX]
0061daa9  MOV ESI,0xff
0061daae  SUB ESI,ECX
0061dab0  IMUL EDX,ESI
0061dab3  SAR EDX,0x8
0061dab6  ADD EAX,EDX
0061dab8  MOV dword ptr [EBP + -0xc],EAX
0061dabb  MOV EDX,dword ptr [EBP + -0x8]
0061dabe  MOV AL,byte ptr [EBP + -0xc]
0061dac1  MOV byte ptr [EDX],AL
0061dac3  MOV ECX,dword ptr [EBP + -0x4]
0061dac6  ADD ECX,0x1
0061dac9  MOV dword ptr [EBP + -0x4],ECX
0061dacc  MOV EDX,dword ptr [EBP + -0x8]
0061dacf  ADD EDX,0x1
0061dad2  MOV dword ptr [EBP + -0x8],EDX
0061dad5  MOV EAX,dword ptr [EBP + -0x8]
0061dad8  MOVZX ECX,byte ptr [EAX]
0061dadb  MOV EDX,dword ptr [EBP + -0x4]
0061dade  MOVZX EAX,byte ptr [EDX]
0061dae1  IMUL EAX,dword ptr [EBP + 0x10]
0061dae5  SAR EAX,0x8
0061dae8  MOV EDX,dword ptr [EBP + -0x8]
0061daeb  MOVZX EDX,byte ptr [EDX]
0061daee  MOV ESI,0xff
0061daf3  SUB ESI,EDX
0061daf5  IMUL EAX,ESI
0061daf8  SAR EAX,0x8
0061dafb  ADD ECX,EAX
0061dafd  MOV dword ptr [EBP + -0xc],ECX
0061db00  MOV EAX,dword ptr [EBP + -0x8]
0061db03  MOV CL,byte ptr [EBP + -0xc]
0061db06  MOV byte ptr [EAX],CL
0061db08  MOV EDX,dword ptr [EBP + -0x4]
0061db0b  ADD EDX,0x1
0061db0e  MOV dword ptr [EBP + -0x4],EDX
0061db11  MOV EAX,dword ptr [EBP + -0x8]
0061db14  ADD EAX,0x1
0061db17  MOV dword ptr [EBP + -0x8],EAX
0061db1a  MOV ECX,dword ptr [EBP + -0x8]
0061db1d  MOVZX EDX,byte ptr [ECX]
0061db20  MOV EAX,dword ptr [EBP + -0x4]
0061db23  MOVZX ECX,byte ptr [EAX]
0061db26  IMUL ECX,dword ptr [EBP + 0x10]
0061db2a  SAR ECX,0x8
0061db2d  MOV EAX,dword ptr [EBP + -0x8]
0061db30  MOVZX EAX,byte ptr [EAX]
0061db33  MOV ESI,0xff
0061db38  SUB ESI,EAX
0061db3a  IMUL ECX,ESI
0061db3d  SAR ECX,0x8
0061db40  ADD EDX,ECX
0061db42  MOV dword ptr [EBP + -0xc],EDX
0061db45  MOV ECX,dword ptr [EBP + -0x8]
0061db48  MOV DL,byte ptr [EBP + -0xc]
0061db4b  MOV byte ptr [ECX],DL
0061db4d  JMP 0x0061dbfa
0061db52  MOV EAX,dword ptr [EBP + -0x8]
0061db55  MOVZX ECX,byte ptr [EAX]
0061db58  MOV EDX,dword ptr [EBP + -0x4]
0061db5b  MOVZX EAX,byte ptr [EDX]
0061db5e  MOV EDX,dword ptr [EBP + -0x8]
0061db61  MOVZX EDX,byte ptr [EDX]
0061db64  MOV ESI,0xff
0061db69  SUB ESI,EDX
0061db6b  IMUL EAX,ESI
0061db6e  SAR EAX,0x8
0061db71  ADD ECX,EAX
0061db73  MOV dword ptr [EBP + -0xc],ECX
0061db76  MOV EAX,dword ptr [EBP + -0x8]
0061db79  MOV CL,byte ptr [EBP + -0xc]
0061db7c  MOV byte ptr [EAX],CL
0061db7e  MOV EDX,dword ptr [EBP + -0x4]
0061db81  ADD EDX,0x1
0061db84  MOV dword ptr [EBP + -0x4],EDX
0061db87  MOV EAX,dword ptr [EBP + -0x8]
0061db8a  ADD EAX,0x1
0061db8d  MOV dword ptr [EBP + -0x8],EAX
0061db90  MOV ECX,dword ptr [EBP + -0x8]
0061db93  MOVZX EDX,byte ptr [ECX]
0061db96  MOV EAX,dword ptr [EBP + -0x4]
0061db99  MOVZX ECX,byte ptr [EAX]
0061db9c  MOV EAX,dword ptr [EBP + -0x8]
0061db9f  MOVZX EAX,byte ptr [EAX]
0061dba2  MOV ESI,0xff
0061dba7  SUB ESI,EAX
0061dba9  IMUL ECX,ESI
0061dbac  SAR ECX,0x8
0061dbaf  ADD EDX,ECX
0061dbb1  MOV dword ptr [EBP + -0xc],EDX
0061dbb4  MOV ECX,dword ptr [EBP + -0x8]
0061dbb7  MOV DL,byte ptr [EBP + -0xc]
0061dbba  MOV byte ptr [ECX],DL
0061dbbc  MOV EAX,dword ptr [EBP + -0x4]
0061dbbf  ADD EAX,0x1
0061dbc2  MOV dword ptr [EBP + -0x4],EAX
0061dbc5  MOV ECX,dword ptr [EBP + -0x8]
0061dbc8  ADD ECX,0x1
0061dbcb  MOV dword ptr [EBP + -0x8],ECX
0061dbce  MOV EDX,dword ptr [EBP + -0x8]
0061dbd1  MOVZX EAX,byte ptr [EDX]
0061dbd4  MOV ECX,dword ptr [EBP + -0x4]
0061dbd7  MOVZX EDX,byte ptr [ECX]
0061dbda  MOV ECX,dword ptr [EBP + -0x8]
0061dbdd  MOVZX ECX,byte ptr [ECX]
0061dbe0  MOV ESI,0xff
0061dbe5  SUB ESI,ECX
0061dbe7  IMUL EDX,ESI
0061dbea  SAR EDX,0x8
0061dbed  ADD EAX,EDX
0061dbef  MOV dword ptr [EBP + -0xc],EAX
0061dbf2  MOV EDX,dword ptr [EBP + -0x8]
0061dbf5  MOV AL,byte ptr [EBP + -0xc]
0061dbf8  MOV byte ptr [EDX],AL
0061dbfa  POP ESI
0061dbfb  MOV ESP,EBP
0061dbfd  POP EBP
0061dbfe  RET
