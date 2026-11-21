; FUN_0061d520  0061d520
0061d520  PUSH EBP
0061d521  MOV EBP,ESP
0061d523  SUB ESP,0xc
0061d526  LEA EAX,[EBP + 0xc]
0061d529  MOV dword ptr [EBP + -0x4],EAX
0061d52c  MOV ECX,dword ptr [EBP + 0x8]
0061d52f  MOV dword ptr [EBP + -0x8],ECX
0061d532  CMP dword ptr [EBP + 0x10],0xff
0061d539  JZ 0x0061d5f8
0061d53f  MOV EDX,dword ptr [EBP + -0x8]
0061d542  MOVZX EAX,byte ptr [EDX]
0061d545  MOV ECX,dword ptr [EBP + -0x4]
0061d548  MOVZX EDX,byte ptr [ECX]
0061d54b  IMUL EDX,dword ptr [EBP + 0x10]
0061d54f  SAR EDX,0x8
0061d552  ADD EAX,EDX
0061d554  MOV dword ptr [EBP + -0xc],EAX
0061d557  CMP dword ptr [EBP + -0xc],0xff
0061d55e  JLE 0x0061d567
0061d560  MOV dword ptr [EBP + -0xc],0xff
0061d567  MOV EAX,dword ptr [EBP + -0x8]
0061d56a  MOV CL,byte ptr [EBP + -0xc]
0061d56d  MOV byte ptr [EAX],CL
0061d56f  MOV EDX,dword ptr [EBP + -0x4]
0061d572  ADD EDX,0x1
0061d575  MOV dword ptr [EBP + -0x4],EDX
0061d578  MOV EAX,dword ptr [EBP + -0x8]
0061d57b  ADD EAX,0x1
0061d57e  MOV dword ptr [EBP + -0x8],EAX
0061d581  MOV ECX,dword ptr [EBP + -0x8]
0061d584  MOVZX EDX,byte ptr [ECX]
0061d587  MOV EAX,dword ptr [EBP + -0x4]
0061d58a  MOVZX ECX,byte ptr [EAX]
0061d58d  IMUL ECX,dword ptr [EBP + 0x10]
0061d591  SAR ECX,0x8
0061d594  ADD EDX,ECX
0061d596  MOV dword ptr [EBP + -0xc],EDX
0061d599  CMP dword ptr [EBP + -0xc],0xff
0061d5a0  JLE 0x0061d5a9
0061d5a2  MOV dword ptr [EBP + -0xc],0xff
0061d5a9  MOV EDX,dword ptr [EBP + -0x8]
0061d5ac  MOV AL,byte ptr [EBP + -0xc]
0061d5af  MOV byte ptr [EDX],AL
0061d5b1  MOV ECX,dword ptr [EBP + -0x4]
0061d5b4  ADD ECX,0x1
0061d5b7  MOV dword ptr [EBP + -0x4],ECX
0061d5ba  MOV EDX,dword ptr [EBP + -0x8]
0061d5bd  ADD EDX,0x1
0061d5c0  MOV dword ptr [EBP + -0x8],EDX
0061d5c3  MOV EAX,dword ptr [EBP + -0x8]
0061d5c6  MOVZX ECX,byte ptr [EAX]
0061d5c9  MOV EDX,dword ptr [EBP + -0x4]
0061d5cc  MOVZX EAX,byte ptr [EDX]
0061d5cf  IMUL EAX,dword ptr [EBP + 0x10]
0061d5d3  SAR EAX,0x8
0061d5d6  ADD ECX,EAX
0061d5d8  MOV dword ptr [EBP + -0xc],ECX
0061d5db  CMP dword ptr [EBP + -0xc],0xff
0061d5e2  JLE 0x0061d5eb
0061d5e4  MOV dword ptr [EBP + -0xc],0xff
0061d5eb  MOV ECX,dword ptr [EBP + -0x8]
0061d5ee  MOV DL,byte ptr [EBP + -0xc]
0061d5f1  MOV byte ptr [ECX],DL
0061d5f3  JMP 0x0061d697
0061d5f8  MOV EAX,dword ptr [EBP + -0x8]
0061d5fb  MOVZX ECX,byte ptr [EAX]
0061d5fe  MOV EDX,dword ptr [EBP + -0x4]
0061d601  MOVZX EAX,byte ptr [EDX]
0061d604  ADD ECX,EAX
0061d606  MOV dword ptr [EBP + -0xc],ECX
0061d609  CMP dword ptr [EBP + -0xc],0xff
0061d610  JLE 0x0061d619
0061d612  MOV dword ptr [EBP + -0xc],0xff
0061d619  MOV ECX,dword ptr [EBP + -0x8]
0061d61c  MOV DL,byte ptr [EBP + -0xc]
0061d61f  MOV byte ptr [ECX],DL
0061d621  MOV EAX,dword ptr [EBP + -0x4]
0061d624  ADD EAX,0x1
0061d627  MOV dword ptr [EBP + -0x4],EAX
0061d62a  MOV ECX,dword ptr [EBP + -0x8]
0061d62d  ADD ECX,0x1
0061d630  MOV dword ptr [EBP + -0x8],ECX
0061d633  MOV EDX,dword ptr [EBP + -0x8]
0061d636  MOVZX EAX,byte ptr [EDX]
0061d639  MOV ECX,dword ptr [EBP + -0x4]
0061d63c  MOVZX EDX,byte ptr [ECX]
0061d63f  ADD EAX,EDX
0061d641  MOV dword ptr [EBP + -0xc],EAX
0061d644  CMP dword ptr [EBP + -0xc],0xff
0061d64b  JLE 0x0061d654
0061d64d  MOV dword ptr [EBP + -0xc],0xff
0061d654  MOV EAX,dword ptr [EBP + -0x8]
0061d657  MOV CL,byte ptr [EBP + -0xc]
0061d65a  MOV byte ptr [EAX],CL
0061d65c  MOV EDX,dword ptr [EBP + -0x4]
0061d65f  ADD EDX,0x1
0061d662  MOV dword ptr [EBP + -0x4],EDX
0061d665  MOV EAX,dword ptr [EBP + -0x8]
0061d668  ADD EAX,0x1
0061d66b  MOV dword ptr [EBP + -0x8],EAX
0061d66e  MOV ECX,dword ptr [EBP + -0x8]
0061d671  MOVZX EDX,byte ptr [ECX]
0061d674  MOV EAX,dword ptr [EBP + -0x4]
0061d677  MOVZX ECX,byte ptr [EAX]
0061d67a  ADD EDX,ECX
0061d67c  MOV dword ptr [EBP + -0xc],EDX
0061d67f  CMP dword ptr [EBP + -0xc],0xff
0061d686  JLE 0x0061d68f
0061d688  MOV dword ptr [EBP + -0xc],0xff
0061d68f  MOV EDX,dword ptr [EBP + -0x8]
0061d692  MOV AL,byte ptr [EBP + -0xc]
0061d695  MOV byte ptr [EDX],AL
0061d697  MOV ESP,EBP
0061d699  POP EBP
0061d69a  RET
