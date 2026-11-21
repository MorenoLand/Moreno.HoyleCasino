; FUN_0042cad0  0042cad0
0042cad0  PUSH EBP
0042cad1  MOV EBP,ESP
0042cad3  SUB ESP,0x8
0042cad6  PUSH ESI
0042cad7  MOV dword ptr [EBP + -0x8],ECX
0042cada  MOV dword ptr [EBP + -0x4],0x0
0042cae1  JMP 0x0042caec
0042cae3  MOV EAX,dword ptr [EBP + -0x4]
0042cae6  ADD EAX,0x1
0042cae9  MOV dword ptr [EBP + -0x4],EAX
0042caec  CMP dword ptr [EBP + -0x4],0x1e
0042caf0  JGE 0x0042cb61
0042caf2  MOV ECX,dword ptr [EBP + 0x8]
0042caf5  IMUL ECX,ECX,0x1e0
0042cafb  MOV EDX,dword ptr [EBP + -0x8]
0042cafe  LEA EAX,[EDX + ECX*0x1 + 0x17c]
0042cb05  MOV ECX,dword ptr [EBP + 0xc]
0042cb08  IMUL ECX,ECX,0x78
0042cb0b  ADD EAX,ECX
0042cb0d  MOV EDX,dword ptr [EBP + -0x4]
0042cb10  CMP dword ptr [EAX + EDX*0x4],0x0
0042cb14  JZ 0x0042cb5f
0042cb16  MOV EAX,dword ptr [EBP + 0x8]
0042cb19  IMUL EAX,EAX,0x1e0
0042cb1f  MOV ECX,dword ptr [EBP + -0x8]
0042cb22  LEA EDX,[ECX + EAX*0x1 + 0x17c]
0042cb29  MOV EAX,dword ptr [EBP + 0xc]
0042cb2c  IMUL EAX,EAX,0x78
0042cb2f  ADD EDX,EAX
0042cb31  MOV ECX,dword ptr [EBP + -0x4]
0042cb34  MOV EDX,dword ptr [EDX + ECX*0x4]
0042cb37  MOV EAX,dword ptr [EBP + 0xc]
0042cb3a  IMUL EAX,EAX,0x78
0042cb3d  MOV ECX,dword ptr [EBP + 0x8]
0042cb40  IMUL ECX,ECX,0x1e0
0042cb46  MOV ESI,dword ptr [EBP + -0x8]
0042cb49  LEA ECX,[ESI + ECX*0x1 + 0x17c]
0042cb50  ADD ECX,EAX
0042cb52  MOV EAX,dword ptr [EBP + -0x4]
0042cb55  MOV ECX,dword ptr [ECX + EAX*0x4]
0042cb58  MOV EDX,dword ptr [EDX]
0042cb5a  MOV EAX,dword ptr [EDX + 0x74]
0042cb5d  CALL EAX
0042cb5f  JMP 0x0042cae3
0042cb61  POP ESI
0042cb62  MOV ESP,EBP
0042cb64  POP EBP
0042cb65  RET 0x8
