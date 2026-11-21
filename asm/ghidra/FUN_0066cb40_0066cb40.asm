; FUN_0066cb40  0066cb40
0066cb40  PUSH EBP
0066cb41  MOV EBP,ESP
0066cb43  SUB ESP,0x10
0066cb46  PUSH ESI
0066cb47  MOV dword ptr [EBP + -0xc],ECX
0066cb4a  MOV word ptr [EBP + -0x4],0x0
0066cb50  MOV word ptr [EBP + -0x8],0x0
0066cb56  JMP 0x0066cb64
0066cb58  MOV AX,word ptr [EBP + -0x8]
0066cb5c  ADD AX,0x1
0066cb60  MOV word ptr [EBP + -0x8],AX
0066cb64  MOVSX ESI,word ptr [EBP + -0x8]
0066cb68  MOV ECX,dword ptr [0x0162ee84]
0066cb6e  MOV EDX,dword ptr [ECX]
0066cb70  MOV ECX,dword ptr [0x0162ee84]
0066cb76  MOV EAX,dword ptr [EDX + 0x25c]
0066cb7c  CALL EAX
0066cb7e  CMP ESI,EAX
0066cb80  JGE 0x0066cbcd
0066cb82  CMP dword ptr [0x016306c0],0x0
0066cb89  JZ 0x0066cbcb
0066cb8b  MOV ECX,dword ptr [EBP + 0x8]
0066cb8e  PUSH ECX
0066cb8f  MOVSX EDX,word ptr [EBP + -0x8]
0066cb93  MOV EAX,[0x016306c0]
0066cb98  MOV ECX,dword ptr [EAX + 0x5c]
0066cb9b  MOV EDX,dword ptr [ECX + EDX*0x4]
0066cb9e  MOVSX EAX,word ptr [EBP + -0x8]
0066cba2  MOV ECX,dword ptr [0x016306c0]
0066cba8  MOV ECX,dword ptr [ECX + 0x5c]
0066cbab  MOV ECX,dword ptr [ECX + EAX*0x4]
0066cbae  MOV EDX,dword ptr [EDX]
0066cbb0  MOV EAX,dword ptr [EDX + 0x84]
0066cbb6  CALL EAX
0066cbb8  MOVZX ECX,AL
0066cbbb  TEST ECX,ECX
0066cbbd  JZ 0x0066cbcb
0066cbbf  MOV DX,word ptr [EBP + -0x4]
0066cbc3  ADD DX,0x1
0066cbc7  MOV word ptr [EBP + -0x4],DX
0066cbcb  JMP 0x0066cb58
0066cbcd  MOVSX EAX,word ptr [EBP + -0x4]
0066cbd1  CMP EAX,0x1
0066cbd4  JLE 0x0066cbe8
0066cbd6  PUSH 0x0
0066cbd8  MOV ECX,dword ptr [EBP + -0xc]
0066cbdb  MOV EDX,dword ptr [ECX]
0066cbdd  MOV ECX,dword ptr [EBP + -0xc]
0066cbe0  MOV EAX,dword ptr [EDX + 0xd8]
0066cbe6  CALL EAX
0066cbe8  MOV ECX,dword ptr [EBP + 0x8]
0066cbeb  PUSH ECX
0066cbec  MOV EDX,dword ptr [EBP + -0xc]
0066cbef  MOV EAX,dword ptr [EDX]
0066cbf1  MOV ECX,dword ptr [EBP + -0xc]
0066cbf4  MOV EDX,dword ptr [EAX + 0x84]
0066cbfa  CALL EDX
0066cbfc  MOVZX EAX,AL
0066cbff  TEST EAX,EAX
0066cc01  JZ 0x0066cc44
0066cc03  MOV ECX,dword ptr [EBP + -0xc]
0066cc06  CMP dword ptr [ECX + 0xc],0x7d1
0066cc0d  JNZ 0x0066cc2a
0066cc0f  MOV EDX,dword ptr [0x016306c0]
0066cc15  MOV EAX,dword ptr [EDX + 0x68]
0066cc18  MOV ECX,dword ptr [0x016306c0]
0066cc1e  MOV ECX,dword ptr [ECX + 0x68]
0066cc21  MOV EDX,dword ptr [EAX]
0066cc23  MOV EAX,dword ptr [EDX + 0x74]
0066cc26  CALL EAX
0066cc28  JMP 0x0066cc42
0066cc2a  MOV ECX,dword ptr [0x016306c0]
0066cc30  MOV EDX,dword ptr [ECX + 0x68]
0066cc33  MOV EAX,[0x016306c0]
0066cc38  MOV ECX,dword ptr [EAX + 0x68]
0066cc3b  MOV EDX,dword ptr [EDX]
0066cc3d  MOV EAX,dword ptr [EDX + 0x70]
0066cc40  CALL EAX
0066cc42  JMP 0x0066cc9c
0066cc44  MOV ECX,dword ptr [0x0162ee84]
0066cc4a  MOV EDX,dword ptr [ECX]
0066cc4c  MOV ECX,dword ptr [0x0162ee84]
0066cc52  MOV EAX,dword ptr [EDX + 0x298]
0066cc58  CALL EAX
0066cc5a  MOV ECX,dword ptr [0x016306c0]
0066cc60  MOV EDX,dword ptr [ECX + 0x5c]
0066cc63  MOV EAX,dword ptr [EDX + EAX*0x4]
0066cc66  MOV dword ptr [EBP + -0x10],EAX
0066cc69  MOV ECX,dword ptr [EBP + 0x8]
0066cc6c  PUSH ECX
0066cc6d  MOV EDX,dword ptr [EBP + -0x10]
0066cc70  MOV EAX,dword ptr [EDX]
0066cc72  MOV ECX,dword ptr [EBP + -0x10]
0066cc75  MOV EDX,dword ptr [EAX + 0x84]
0066cc7b  CALL EDX
0066cc7d  MOVZX EAX,AL
0066cc80  TEST EAX,EAX
0066cc82  JNZ 0x0066cc9c
0066cc84  MOV ECX,dword ptr [0x016306c0]
0066cc8a  MOV EDX,dword ptr [ECX + 0x68]
0066cc8d  MOV EAX,[0x016306c0]
0066cc92  MOV ECX,dword ptr [EAX + 0x68]
0066cc95  MOV EDX,dword ptr [EDX]
0066cc97  MOV EAX,dword ptr [EDX + 0x70]
0066cc9a  CALL EAX
0066cc9c  MOV ECX,dword ptr [EBP + 0x8]
0066cc9f  PUSH ECX
0066cca0  MOV ECX,dword ptr [EBP + -0xc]
0066cca3  CALL 0x005f4d00
0066cca8  POP ESI
0066cca9  MOV ESP,EBP
0066ccab  POP EBP
0066ccac  RET 0x4
