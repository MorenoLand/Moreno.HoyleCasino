; FUN_0058d9d0  0058d9d0
0058d9d0  PUSH EBP
0058d9d1  MOV EBP,ESP
0058d9d3  SUB ESP,0x3c
0058d9d6  MOV dword ptr [EBP + -0x3c],ECX
0058d9d9  MOV dword ptr [EBP + -0x38],0x14
0058d9e0  MOV dword ptr [EBP + -0x34],0xa
0058d9e7  MOV dword ptr [EBP + -0x30],0x5
0058d9ee  MOV dword ptr [EBP + -0x2c],0x1
0058d9f5  MOV dword ptr [EBP + -0x20],0x46
0058d9fc  MOV dword ptr [EBP + -0x1c],0x1c
0058da03  MOV dword ptr [EBP + -0x18],0xe
0058da0a  MOV dword ptr [EBP + -0x14],0x7
0058da11  MOV dword ptr [EBP + -0x10],0x14
0058da18  MOV dword ptr [EBP + -0xc],0xa
0058da1f  MOV dword ptr [EBP + -0x8],0x5
0058da26  MOV dword ptr [EBP + -0x4],0x2
0058da2d  MOV dword ptr [EBP + -0x28],0xa
0058da34  MOV dword ptr [EBP + -0x24],0x5
0058da3b  MOV EAX,dword ptr [EBP + -0x3c]
0058da3e  CMP dword ptr [EAX + 0x84],0x0
0058da45  JNZ 0x0058da77
0058da47  MOV ECX,dword ptr [EBP + 0x8]
0058da4a  SHL ECX,0x4
0058da4d  MOV EDX,dword ptr [0x00793584]
0058da53  LEA EAX,[EDX + ECX*0x1 + 0x3ba4]
0058da5a  PUSH EAX
0058da5b  MOV ECX,dword ptr [EBP + -0x3c]
0058da5e  CALL 0x0058d840
0058da63  MOV ECX,dword ptr [EBP + 0x8]
0058da66  PUSH ECX
0058da67  MOV ECX,dword ptr [0x00793584]
0058da6d  CALL 0x0058a4e0
0058da72  JMP 0x0058db25
0058da77  MOV EDX,dword ptr [0x00793584]
0058da7d  MOV ECX,dword ptr [EDX + 0x310]
0058da83  CALL 0x00600230
0058da88  MOVZX EAX,AL
0058da8b  TEST EAX,EAX
0058da8d  JZ 0x0058daa9
0058da8f  MOV ECX,dword ptr [EBP + 0x8]
0058da92  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x20]
0058da96  PUSH EDX
0058da97  MOV EAX,[0x00793584]
0058da9c  MOV ECX,dword ptr [EAX + 0x3b68]
0058daa2  CALL 0x00585ad0
0058daa7  JMP 0x0058db25
0058daa9  MOV ECX,dword ptr [0x00793584]
0058daaf  CALL 0x0058a470
0058dab4  CMP EAX,0x14
0058dab7  JNZ 0x0058dad3
0058dab9  MOV ECX,dword ptr [EBP + 0x8]
0058dabc  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x28]
0058dac0  PUSH EDX
0058dac1  MOV EAX,[0x00793584]
0058dac6  MOV ECX,dword ptr [EAX + 0x3b68]
0058dacc  CALL 0x00585ad0
0058dad1  JMP 0x0058db25
0058dad3  MOV ECX,dword ptr [0x00793584]
0058dad9  CALL 0x0058a470
0058dade  CMP EAX,0x9
0058dae1  JLE 0x0058db0d
0058dae3  MOV ECX,dword ptr [0x00793584]
0058dae9  CALL 0x0058a470
0058daee  CMP EAX,0x14
0058daf1  JGE 0x0058db0d
0058daf3  MOV ECX,dword ptr [EBP + 0x8]
0058daf6  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x10]
0058dafa  PUSH EDX
0058dafb  MOV EAX,[0x00793584]
0058db00  MOV ECX,dword ptr [EAX + 0x3b68]
0058db06  CALL 0x00585ad0
0058db0b  JMP 0x0058db25
0058db0d  MOV ECX,dword ptr [EBP + 0x8]
0058db10  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x38]
0058db14  PUSH EDX
0058db15  MOV EAX,[0x00793584]
0058db1a  MOV ECX,dword ptr [EAX + 0x3b68]
0058db20  CALL 0x00585ad0
0058db25  MOV ECX,dword ptr [EBP + -0x3c]
0058db28  CALL 0x0058dce0
0058db2d  MOV ESP,EBP
0058db2f  POP EBP
0058db30  RET 0x4
