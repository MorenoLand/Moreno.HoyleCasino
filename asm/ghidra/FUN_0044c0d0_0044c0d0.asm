; FUN_0044c0d0  0044c0d0
0044c0d0  PUSH EBP
0044c0d1  MOV EBP,ESP
0044c0d3  SUB ESP,0x18
0044c0d6  MOV dword ptr [EBP + -0x18],ECX
0044c0d9  PUSH 0x9
0044c0db  MOV ECX,dword ptr [EBP + 0x8]
0044c0de  CALL 0x0063aae0
0044c0e3  MOV dword ptr [EBP + -0x4],EAX
0044c0e6  MOV EAX,dword ptr [EBP + -0x4]
0044c0e9  MOV ECX,dword ptr [EAX + 0x4]
0044c0ec  MOV EDX,dword ptr [EBP + -0x4]
0044c0ef  ADD ECX,dword ptr [EDX + 0xc]
0044c0f2  MOV EAX,dword ptr [EBP + 0xc]
0044c0f5  ADD ECX,dword ptr [EAX]
0044c0f7  MOV EDX,dword ptr [EBP + 0xc]
0044c0fa  MOV dword ptr [EDX],ECX
0044c0fc  MOV EAX,dword ptr [EBP + 0xc]
0044c0ff  MOV ECX,dword ptr [EAX + 0x4]
0044c102  MOV EDX,dword ptr [EBP + -0x4]
0044c105  ADD ECX,dword ptr [EDX + 0x8]
0044c108  MOV EAX,dword ptr [EBP + 0xc]
0044c10b  MOV dword ptr [EAX + 0x4],ECX
0044c10e  MOV ECX,dword ptr [EBP + 0x10]
0044c111  MOV EDX,dword ptr [ECX]
0044c113  MOV EAX,dword ptr [EBP + -0x4]
0044c116  ADD EDX,dword ptr [EAX + 0x4]
0044c119  MOV ECX,dword ptr [EBP + 0x10]
0044c11c  MOV dword ptr [ECX],EDX
0044c11e  MOV EDX,dword ptr [EBP + 0x10]
0044c121  MOV EAX,dword ptr [EDX + 0x4]
0044c124  MOV ECX,dword ptr [EBP + -0x4]
0044c127  ADD EAX,dword ptr [ECX + 0x8]
0044c12a  MOV EDX,dword ptr [EBP + 0x10]
0044c12d  MOV dword ptr [EDX + 0x4],EAX
0044c130  MOV EAX,dword ptr [EBP + 0x14]
0044c133  MOV ECX,dword ptr [EAX]
0044c135  MOV EDX,dword ptr [EBP + -0x4]
0044c138  ADD ECX,dword ptr [EDX + 0xc]
0044c13b  MOV EAX,dword ptr [EBP + 0x14]
0044c13e  MOV dword ptr [EAX],ECX
0044c140  MOV ECX,dword ptr [EBP + 0x14]
0044c143  MOV EDX,dword ptr [ECX + 0x4]
0044c146  MOV EAX,dword ptr [EBP + -0x4]
0044c149  ADD EDX,dword ptr [EAX + 0x10]
0044c14c  MOV ECX,dword ptr [EBP + 0x14]
0044c14f  MOV dword ptr [ECX + 0x4],EDX
0044c152  PUSH -0x1
0044c154  MOV EDX,dword ptr [0x007947e0]
0044c15a  MOV EAX,dword ptr [EDX]
0044c15c  MOV ECX,dword ptr [0x007947e0]
0044c162  MOV EDX,dword ptr [EAX + 0x33c]
0044c168  CALL EDX
0044c16a  MOVZX EAX,AL
0044c16d  TEST EAX,EAX
0044c16f  JZ 0x0044c1ef
0044c171  MOV ECX,dword ptr [0x0162ee84]
0044c177  CALL 0x005f3bf0
0044c17c  CMP EAX,0x9
0044c17f  JNZ 0x0044c1ef
0044c181  LEA ECX,[EBP + -0xc]
0044c184  PUSH ECX
0044c185  LEA EDX,[EBP + -0x14]
0044c188  PUSH EDX
0044c189  MOV EAX,dword ptr [EBP + 0x8]
0044c18c  PUSH EAX
0044c18d  MOV ECX,dword ptr [0x007947e0]
0044c193  CALL 0x005e0c40
0044c198  MOV ECX,dword ptr [EBP + -0x14]
0044c19b  ADD ECX,dword ptr [EBP + -0xc]
0044c19e  MOV EDX,dword ptr [EBP + 0xc]
0044c1a1  ADD ECX,dword ptr [EDX]
0044c1a3  MOV EAX,dword ptr [EBP + 0xc]
0044c1a6  MOV dword ptr [EAX],ECX
0044c1a8  MOV ECX,dword ptr [EBP + 0xc]
0044c1ab  MOV EDX,dword ptr [ECX + 0x4]
0044c1ae  ADD EDX,dword ptr [EBP + -0x10]
0044c1b1  MOV EAX,dword ptr [EBP + 0xc]
0044c1b4  MOV dword ptr [EAX + 0x4],EDX
0044c1b7  MOV ECX,dword ptr [EBP + 0x10]
0044c1ba  MOV EDX,dword ptr [ECX]
0044c1bc  ADD EDX,dword ptr [EBP + -0x14]
0044c1bf  MOV EAX,dword ptr [EBP + 0x10]
0044c1c2  MOV dword ptr [EAX],EDX
0044c1c4  MOV ECX,dword ptr [EBP + 0x10]
0044c1c7  MOV EDX,dword ptr [ECX + 0x4]
0044c1ca  ADD EDX,dword ptr [EBP + -0x10]
0044c1cd  MOV EAX,dword ptr [EBP + 0x10]
0044c1d0  MOV dword ptr [EAX + 0x4],EDX
0044c1d3  MOV ECX,dword ptr [EBP + 0x14]
0044c1d6  MOV EDX,dword ptr [ECX]
0044c1d8  ADD EDX,dword ptr [EBP + -0xc]
0044c1db  MOV EAX,dword ptr [EBP + 0x14]
0044c1de  MOV dword ptr [EAX],EDX
0044c1e0  MOV ECX,dword ptr [EBP + 0x14]
0044c1e3  MOV EDX,dword ptr [ECX + 0x4]
0044c1e6  ADD EDX,dword ptr [EBP + -0x8]
0044c1e9  MOV EAX,dword ptr [EBP + 0x14]
0044c1ec  MOV dword ptr [EAX + 0x4],EDX
0044c1ef  MOV ESP,EBP
0044c1f1  POP EBP
0044c1f2  RET 0x10
