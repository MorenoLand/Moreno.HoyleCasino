; FUN_0056ba40  0056ba40
0056ba40  PUSH EBP
0056ba41  MOV EBP,ESP
0056ba43  SUB ESP,0x8
0056ba46  MOV dword ptr [EBP + -0x8],ECX
0056ba49  MOV ECX,dword ptr [EBP + -0x8]
0056ba4c  CALL 0x005e9e20
0056ba51  MOV EAX,dword ptr [EBP + -0x8]
0056ba54  MOV dword ptr [EAX],0x6ca2b0
0056ba5a  MOV word ptr [EBP + -0x4],0x0
0056ba60  JMP 0x0056ba6e
0056ba62  MOV CX,word ptr [EBP + -0x4]
0056ba66  ADD CX,0x1
0056ba6a  MOV word ptr [EBP + -0x4],CX
0056ba6e  MOVSX EDX,word ptr [EBP + -0x4]
0056ba72  CMP EDX,0x5
0056ba75  JGE 0x0056ba88
0056ba77  MOVSX EAX,word ptr [EBP + -0x4]
0056ba7b  MOV ECX,dword ptr [EBP + -0x8]
0056ba7e  MOV dword ptr [ECX + EAX*0x4 + 0x8],0x0
0056ba86  JMP 0x0056ba62
0056ba88  MOV word ptr [EBP + -0x4],0x0
0056ba8e  JMP 0x0056ba9c
0056ba90  MOV DX,word ptr [EBP + -0x4]
0056ba94  ADD DX,0x1
0056ba98  MOV word ptr [EBP + -0x4],DX
0056ba9c  MOVSX EAX,word ptr [EBP + -0x4]
0056baa0  CMP EAX,0x4
0056baa3  JGE 0x0056bac5
0056baa5  MOVSX ECX,word ptr [EBP + -0x4]
0056baa9  MOV EDX,dword ptr [EBP + -0x8]
0056baac  MOV dword ptr [EDX + ECX*0x4 + 0x34],0x0
0056bab4  MOVSX EAX,word ptr [EBP + -0x4]
0056bab8  MOV ECX,dword ptr [EBP + -0x8]
0056babb  MOV dword ptr [ECX + EAX*0x4 + 0x44],0x0
0056bac3  JMP 0x0056ba90
0056bac5  MOV word ptr [EBP + -0x4],0x0
0056bacb  JMP 0x0056bad9
0056bacd  MOV DX,word ptr [EBP + -0x4]
0056bad1  ADD DX,0x1
0056bad5  MOV word ptr [EBP + -0x4],DX
0056bad9  MOVSX EAX,word ptr [EBP + -0x4]
0056badd  CMP EAX,0x2
0056bae0  JGE 0x0056bb02
0056bae2  MOVSX ECX,word ptr [EBP + -0x4]
0056bae6  MOV EDX,dword ptr [EBP + -0x8]
0056bae9  MOV dword ptr [EDX + ECX*0x4 + 0x54],0x0
0056baf1  MOVSX EAX,word ptr [EBP + -0x4]
0056baf5  MOV ECX,dword ptr [EBP + -0x8]
0056baf8  MOV dword ptr [ECX + EAX*0x4 + 0x5c],0x0
0056bb00  JMP 0x0056bacd
0056bb02  MOV EDX,dword ptr [EBP + -0x8]
0056bb05  MOV dword ptr [EDX + 0x20],0x0
0056bb0c  MOV EAX,dword ptr [EBP + -0x8]
0056bb0f  MOV dword ptr [EAX + 0x28],0x0
0056bb16  MOV ECX,dword ptr [EBP + -0x8]
0056bb19  MOV dword ptr [ECX + 0x24],0x0
0056bb20  MOV EDX,dword ptr [EBP + -0x8]
0056bb23  MOV dword ptr [EDX + 0x2c],0x0
0056bb2a  MOV EAX,dword ptr [EBP + -0x8]
0056bb2d  MOV dword ptr [EAX + 0x30],0x0
0056bb34  MOV ECX,dword ptr [EBP + -0x8]
0056bb37  MOV dword ptr [ECX + 0x1c],0x0
0056bb3e  MOV EDX,dword ptr [EBP + -0x8]
0056bb41  MOV dword ptr [EDX + 0x64],0x0
0056bb48  MOV EAX,dword ptr [EBP + -0x8]
0056bb4b  MOV dword ptr [EAX + 0x68],0x0
0056bb52  MOV ECX,dword ptr [EBP + -0x8]
0056bb55  MOV dword ptr [ECX + 0x6c],0x0
0056bb5c  MOV EDX,dword ptr [EBP + -0x8]
0056bb5f  MOV dword ptr [EDX + 0x70],0x0
0056bb66  MOV EAX,dword ptr [EBP + -0x8]
0056bb69  MOV dword ptr [EAX + 0x74],0x0
0056bb70  MOV ECX,dword ptr [EBP + -0x8]
0056bb73  MOV dword ptr [ECX + 0x78],0x0
0056bb7a  MOV word ptr [EBP + -0x4],0x0
0056bb80  JMP 0x0056bb8e
0056bb82  MOV DX,word ptr [EBP + -0x4]
0056bb86  ADD DX,0x1
0056bb8a  MOV word ptr [EBP + -0x4],DX
0056bb8e  MOVSX EAX,word ptr [EBP + -0x4]
0056bb92  CMP EAX,0x7
0056bb95  JGE 0x0056bba8
0056bb97  MOVSX ECX,word ptr [EBP + -0x4]
0056bb9b  MOV EDX,dword ptr [EBP + -0x8]
0056bb9e  MOV dword ptr [EDX + ECX*0x4 + 0x7c],0x0
0056bba6  JMP 0x0056bb82
0056bba8  MOV EAX,dword ptr [EBP + -0x8]
0056bbab  MOV dword ptr [EAX + 0x4],0x0
0056bbb2  MOV EAX,dword ptr [EBP + -0x8]
0056bbb5  MOV ESP,EBP
0056bbb7  POP EBP
0056bbb8  RET
