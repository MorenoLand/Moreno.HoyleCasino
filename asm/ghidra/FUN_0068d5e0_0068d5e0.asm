; FUN_0068d5e0  0068d5e0
0068d5e0  PUSH EBP
0068d5e1  MOV EBP,ESP
0068d5e3  SUB ESP,0xb0
0068d5e9  MOV dword ptr [EBP + 0xffffff54],ECX
0068d5ef  MOV EAX,dword ptr [EBP + 0xffffff54]
0068d5f5  MOV ECX,dword ptr [EAX + 0x4]
0068d5f8  MOV EDX,dword ptr [ECX + 0x4]
0068d5fb  MOV dword ptr [EBP + -0xc],EDX
0068d5fe  MOV EAX,dword ptr [EBP + 0xffffff54]
0068d604  MOV ECX,dword ptr [EAX + 0x4]
0068d607  MOV dword ptr [EBP + -0x8],ECX
0068d60a  MOV byte ptr [EBP + -0x1],0x1
0068d60e  MOV EDX,dword ptr [EBP + -0xc]
0068d611  MOVSX EAX,byte ptr [EDX + 0x45]
0068d615  TEST EAX,EAX
0068d617  JNZ 0x0068d662
0068d619  MOV ECX,dword ptr [EBP + -0xc]
0068d61c  MOV dword ptr [EBP + -0x8],ECX
0068d61f  MOV EDX,dword ptr [EBP + -0xc]
0068d622  ADD EDX,0xc
0068d625  PUSH EDX
0068d626  MOV EAX,dword ptr [EBP + 0xc]
0068d629  PUSH EAX
0068d62a  CALL dword ptr [0x006b20f0]
0068d630  ADD ESP,0x8
0068d633  MOV byte ptr [EBP + -0x1],AL
0068d636  MOVZX ECX,byte ptr [EBP + -0x1]
0068d63a  TEST ECX,ECX
0068d63c  JZ 0x0068d64b
0068d63e  MOV EDX,dword ptr [EBP + -0xc]
0068d641  MOV EAX,dword ptr [EDX]
0068d643  MOV dword ptr [EBP + 0xffffff50],EAX
0068d649  JMP 0x0068d657
0068d64b  MOV ECX,dword ptr [EBP + -0xc]
0068d64e  MOV EDX,dword ptr [ECX + 0x8]
0068d651  MOV dword ptr [EBP + 0xffffff50],EDX
0068d657  MOV EAX,dword ptr [EBP + 0xffffff50]
0068d65d  MOV dword ptr [EBP + -0xc],EAX
0068d660  JMP 0x0068d60e
0068d662  XOR ECX,ECX
0068d664  JZ 0x0068d6b4
0068d666  MOV byte ptr [EBP + -0x15],0x1
0068d66a  MOV EDX,dword ptr [EBP + 0xc]
0068d66d  PUSH EDX
0068d66e  MOV EAX,dword ptr [EBP + -0x8]
0068d671  PUSH EAX
0068d672  MOV CL,byte ptr [EBP + -0x1]
0068d675  PUSH ECX
0068d676  LEA EDX,[EBP + -0x20]
0068d679  PUSH EDX
0068d67a  MOV ECX,dword ptr [EBP + 0xffffff54]
0068d680  CALL 0x0068d820
0068d685  MOV dword ptr [EBP + 0xffffff6c],EAX
0068d68b  MOV EAX,dword ptr [EBP + 0xffffff6c]
0068d691  MOV ECX,dword ptr [EAX]
0068d693  MOV EDX,dword ptr [EAX + 0x4]
0068d696  MOV EAX,dword ptr [EBP + 0x8]
0068d699  MOV dword ptr [EAX],ECX
0068d69b  MOV dword ptr [EAX + 0x4],EDX
0068d69e  MOV ECX,dword ptr [EBP + 0x8]
0068d6a1  MOV DL,byte ptr [EBP + -0x15]
0068d6a4  MOV byte ptr [ECX + 0x8],DL
0068d6a7  MOV EAX,dword ptr [EBP + 0x8]
0068d6aa  JMP 0x0068d80b
0068d6b4  MOV EAX,dword ptr [EBP + 0xffffff54]
0068d6ba  PUSH EAX
0068d6bb  MOV ECX,dword ptr [EBP + -0x8]
0068d6be  PUSH ECX
0068d6bf  LEA ECX,[EBP + -0x14]
0068d6c2  CALL 0x0068d4b0
0068d6c7  MOVZX EDX,byte ptr [EBP + -0x1]
0068d6cb  TEST EDX,EDX
0068d6cd  JNZ 0x0068d6d4
0068d6cf  JMP 0x0068d77e
0068d6d4  MOV EAX,dword ptr [EBP + 0xffffff54]
0068d6da  MOV ECX,dword ptr [EAX + 0x4]
0068d6dd  MOV dword ptr [EBP + 0xffffff68],ECX
0068d6e3  MOV EDX,dword ptr [EBP + 0xffffff68]
0068d6e9  MOV EAX,dword ptr [EDX]
0068d6eb  MOV dword ptr [EBP + 0xffffff64],EAX
0068d6f1  MOV ECX,dword ptr [EBP + 0xffffff54]
0068d6f7  PUSH ECX
0068d6f8  MOV EDX,dword ptr [EBP + 0xffffff64]
0068d6fe  PUSH EDX
0068d6ff  LEA ECX,[EBP + -0x28]
0068d702  CALL 0x0068d4b0
0068d707  CMP dword ptr [EBP + -0x14],0x0
0068d70b  JZ 0x0068d715
0068d70d  MOV EAX,dword ptr [EBP + -0x14]
0068d710  CMP EAX,dword ptr [EBP + -0x28]
0068d713  JZ 0x0068d71b
0068d715  CALL dword ptr [0x006b2274]
0068d71b  MOV ECX,dword ptr [EBP + -0x10]
0068d71e  XOR EDX,EDX
0068d720  CMP ECX,dword ptr [EBP + -0x24]
0068d723  SETZ DL
0068d726  MOVZX EAX,DL
0068d729  TEST EAX,EAX
0068d72b  JZ 0x0068d776
0068d72d  MOV byte ptr [EBP + -0x29],0x1
0068d731  MOV ECX,dword ptr [EBP + 0xc]
0068d734  PUSH ECX
0068d735  MOV EDX,dword ptr [EBP + -0x8]
0068d738  PUSH EDX
0068d739  PUSH 0x1
0068d73b  LEA EAX,[EBP + -0x34]
0068d73e  PUSH EAX
0068d73f  MOV ECX,dword ptr [EBP + 0xffffff54]
0068d745  CALL 0x0068d820
0068d74a  MOV dword ptr [EBP + 0xffffff60],EAX
0068d750  MOV ECX,dword ptr [EBP + 0xffffff60]
0068d756  MOV EDX,dword ptr [ECX]
0068d758  MOV EAX,dword ptr [ECX + 0x4]
0068d75b  MOV ECX,dword ptr [EBP + 0x8]
0068d75e  MOV dword ptr [ECX],EDX
0068d760  MOV dword ptr [ECX + 0x4],EAX
0068d763  MOV EDX,dword ptr [EBP + 0x8]
0068d766  MOV AL,byte ptr [EBP + -0x29]
0068d769  MOV byte ptr [EDX + 0x8],AL
0068d76c  MOV EAX,dword ptr [EBP + 0x8]
0068d76f  JMP 0x0068d80b
0068d776  LEA ECX,[EBP + -0x14]
0068d779  CALL 0x0068f800
0068d77e  MOV ECX,dword ptr [EBP + -0x10]
0068d781  MOV dword ptr [EBP + 0xffffff5c],ECX
0068d787  MOV EDX,dword ptr [EBP + 0xc]
0068d78a  PUSH EDX
0068d78b  MOV EAX,dword ptr [EBP + 0xffffff5c]
0068d791  ADD EAX,0xc
0068d794  PUSH EAX
0068d795  CALL dword ptr [0x006b20f0]
0068d79b  ADD ESP,0x8
0068d79e  MOVZX ECX,AL
0068d7a1  TEST ECX,ECX
0068d7a3  JZ 0x0068d7ed
0068d7a5  MOV byte ptr [EBP + -0x35],0x1
0068d7a9  MOV EDX,dword ptr [EBP + 0xc]
0068d7ac  PUSH EDX
0068d7ad  MOV EAX,dword ptr [EBP + -0x8]
0068d7b0  PUSH EAX
0068d7b1  MOV CL,byte ptr [EBP + -0x1]
0068d7b4  PUSH ECX
0068d7b5  LEA EDX,[EBP + -0x40]
0068d7b8  PUSH EDX
0068d7b9  MOV ECX,dword ptr [EBP + 0xffffff54]
0068d7bf  CALL 0x0068d820
0068d7c4  MOV dword ptr [EBP + 0xffffff58],EAX
0068d7ca  MOV EAX,dword ptr [EBP + 0xffffff58]
0068d7d0  MOV ECX,dword ptr [EAX]
0068d7d2  MOV EDX,dword ptr [EAX + 0x4]
0068d7d5  MOV EAX,dword ptr [EBP + 0x8]
0068d7d8  MOV dword ptr [EAX],ECX
0068d7da  MOV dword ptr [EAX + 0x4],EDX
0068d7dd  MOV ECX,dword ptr [EBP + 0x8]
0068d7e0  MOV DL,byte ptr [EBP + -0x35]
0068d7e3  MOV byte ptr [ECX + 0x8],DL
0068d7e6  MOV EAX,dword ptr [EBP + 0x8]
0068d7e9  JMP 0x0068d80b
0068d7ed  MOV byte ptr [EBP + -0x41],0x0
0068d7f1  MOV EAX,dword ptr [EBP + -0x14]
0068d7f4  MOV ECX,dword ptr [EBP + -0x10]
0068d7f7  MOV EDX,dword ptr [EBP + 0x8]
0068d7fa  MOV dword ptr [EDX],EAX
0068d7fc  MOV dword ptr [EDX + 0x4],ECX
0068d7ff  MOV EAX,dword ptr [EBP + 0x8]
0068d802  MOV CL,byte ptr [EBP + -0x41]
0068d805  MOV byte ptr [EAX + 0x8],CL
0068d808  MOV EAX,dword ptr [EBP + 0x8]
0068d80b  MOV ESP,EBP
0068d80d  POP EBP
0068d80e  RET 0x8
