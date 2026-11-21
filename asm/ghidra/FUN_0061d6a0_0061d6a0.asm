; FUN_0061d6a0  0061d6a0
0061d6a0  PUSH EBP
0061d6a1  MOV EBP,ESP
0061d6a3  SUB ESP,0xc
0061d6a6  LEA EAX,[EBP + 0xc]
0061d6a9  MOV dword ptr [EBP + -0x4],EAX
0061d6ac  MOV ECX,dword ptr [EBP + 0x8]
0061d6af  MOV dword ptr [EBP + -0x8],ECX
0061d6b2  CMP dword ptr [EBP + 0x10],0xff
0061d6b9  JZ 0x0061d77b
0061d6bf  MOV EDX,dword ptr [EBP + -0x8]
0061d6c2  MOVZX EAX,byte ptr [EDX]
0061d6c5  MOV ECX,dword ptr [EBP + -0x4]
0061d6c8  MOVZX EDX,byte ptr [ECX]
0061d6cb  MOV ECX,0xff
0061d6d0  SUB ECX,EDX
0061d6d2  IMUL ECX,dword ptr [EBP + 0x10]
0061d6d6  SAR ECX,0x8
0061d6d9  MOV EDX,0xff
0061d6de  SUB EDX,ECX
0061d6e0  IMUL EAX,EDX
0061d6e3  SAR EAX,0x8
0061d6e6  MOV dword ptr [EBP + -0xc],EAX
0061d6e9  MOV EAX,dword ptr [EBP + -0x8]
0061d6ec  MOV CL,byte ptr [EBP + -0xc]
0061d6ef  MOV byte ptr [EAX],CL
0061d6f1  MOV EDX,dword ptr [EBP + -0x4]
0061d6f4  ADD EDX,0x1
0061d6f7  MOV dword ptr [EBP + -0x4],EDX
0061d6fa  MOV EAX,dword ptr [EBP + -0x8]
0061d6fd  ADD EAX,0x1
0061d700  MOV dword ptr [EBP + -0x8],EAX
0061d703  MOV ECX,dword ptr [EBP + -0x8]
0061d706  MOVZX EDX,byte ptr [ECX]
0061d709  MOV EAX,dword ptr [EBP + -0x4]
0061d70c  MOVZX ECX,byte ptr [EAX]
0061d70f  MOV EAX,0xff
0061d714  SUB EAX,ECX
0061d716  IMUL EAX,dword ptr [EBP + 0x10]
0061d71a  SAR EAX,0x8
0061d71d  MOV ECX,0xff
0061d722  SUB ECX,EAX
0061d724  IMUL EDX,ECX
0061d727  SAR EDX,0x8
0061d72a  MOV dword ptr [EBP + -0xc],EDX
0061d72d  MOV EDX,dword ptr [EBP + -0x8]
0061d730  MOV AL,byte ptr [EBP + -0xc]
0061d733  MOV byte ptr [EDX],AL
0061d735  MOV ECX,dword ptr [EBP + -0x4]
0061d738  ADD ECX,0x1
0061d73b  MOV dword ptr [EBP + -0x4],ECX
0061d73e  MOV EDX,dword ptr [EBP + -0x8]
0061d741  ADD EDX,0x1
0061d744  MOV dword ptr [EBP + -0x8],EDX
0061d747  MOV EAX,dword ptr [EBP + -0x8]
0061d74a  MOVZX ECX,byte ptr [EAX]
0061d74d  MOV EDX,dword ptr [EBP + -0x4]
0061d750  MOVZX EAX,byte ptr [EDX]
0061d753  MOV EDX,0xff
0061d758  SUB EDX,EAX
0061d75a  IMUL EDX,dword ptr [EBP + 0x10]
0061d75e  SAR EDX,0x8
0061d761  MOV EAX,0xff
0061d766  SUB EAX,EDX
0061d768  IMUL ECX,EAX
0061d76b  SAR ECX,0x8
0061d76e  MOV dword ptr [EBP + -0xc],ECX
0061d771  MOV ECX,dword ptr [EBP + -0x8]
0061d774  MOV DL,byte ptr [EBP + -0xc]
0061d777  MOV byte ptr [ECX],DL
0061d779  JMP 0x0061d7f6
0061d77b  MOV EAX,dword ptr [EBP + -0x4]
0061d77e  MOVZX ECX,byte ptr [EAX]
0061d781  MOV EDX,dword ptr [EBP + -0x8]
0061d784  MOVZX EAX,byte ptr [EDX]
0061d787  IMUL ECX,EAX
0061d78a  SAR ECX,0x8
0061d78d  MOV dword ptr [EBP + -0xc],ECX
0061d790  MOV ECX,dword ptr [EBP + -0x8]
0061d793  MOV DL,byte ptr [EBP + -0xc]
0061d796  MOV byte ptr [ECX],DL
0061d798  MOV EAX,dword ptr [EBP + -0x4]
0061d79b  ADD EAX,0x1
0061d79e  MOV dword ptr [EBP + -0x4],EAX
0061d7a1  MOV ECX,dword ptr [EBP + -0x8]
0061d7a4  ADD ECX,0x1
0061d7a7  MOV dword ptr [EBP + -0x8],ECX
0061d7aa  MOV EDX,dword ptr [EBP + -0x4]
0061d7ad  MOVZX EAX,byte ptr [EDX]
0061d7b0  MOV ECX,dword ptr [EBP + -0x8]
0061d7b3  MOVZX EDX,byte ptr [ECX]
0061d7b6  IMUL EAX,EDX
0061d7b9  SAR EAX,0x8
0061d7bc  MOV dword ptr [EBP + -0xc],EAX
0061d7bf  MOV EAX,dword ptr [EBP + -0x8]
0061d7c2  MOV CL,byte ptr [EBP + -0xc]
0061d7c5  MOV byte ptr [EAX],CL
0061d7c7  MOV EDX,dword ptr [EBP + -0x4]
0061d7ca  ADD EDX,0x1
0061d7cd  MOV dword ptr [EBP + -0x4],EDX
0061d7d0  MOV EAX,dword ptr [EBP + -0x8]
0061d7d3  ADD EAX,0x1
0061d7d6  MOV dword ptr [EBP + -0x8],EAX
0061d7d9  MOV ECX,dword ptr [EBP + -0x4]
0061d7dc  MOVZX EDX,byte ptr [ECX]
0061d7df  MOV EAX,dword ptr [EBP + -0x8]
0061d7e2  MOVZX ECX,byte ptr [EAX]
0061d7e5  IMUL EDX,ECX
0061d7e8  SAR EDX,0x8
0061d7eb  MOV dword ptr [EBP + -0xc],EDX
0061d7ee  MOV EDX,dword ptr [EBP + -0x8]
0061d7f1  MOV AL,byte ptr [EBP + -0xc]
0061d7f4  MOV byte ptr [EDX],AL
0061d7f6  MOV ESP,EBP
0061d7f8  POP EBP
0061d7f9  RET
