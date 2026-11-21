; FUN_0057f460  0057f460
0057f460  PUSH EBP
0057f461  MOV EBP,ESP
0057f463  SUB ESP,0x40
0057f466  MOV dword ptr [EBP + -0x2c],ECX
0057f469  MOV EAX,dword ptr [EBP + -0x2c]
0057f46c  MOV ECX,dword ptr [EAX]
0057f46e  MOV EDX,dword ptr [EBP + -0x2c]
0057f471  MOV EAX,dword ptr [EDX]
0057f473  MOV EDX,dword ptr [ECX]
0057f475  MOV ECX,EAX
0057f477  MOV EAX,dword ptr [EDX + 0x70]
0057f47a  CALL EAX
0057f47c  MOV ECX,dword ptr [EBP + -0x2c]
0057f47f  MOV EDX,dword ptr [ECX]
0057f481  MOV dword ptr [EBP + -0x8],EDX
0057f484  MOV EAX,dword ptr [EBP + -0x8]
0057f487  MOV dword ptr [EBP + -0x4],EAX
0057f48a  CMP dword ptr [EBP + -0x4],0x0
0057f48e  JZ 0x0057f4a3
0057f490  PUSH 0x1
0057f492  MOV ECX,dword ptr [EBP + -0x4]
0057f495  MOV EDX,dword ptr [ECX]
0057f497  MOV ECX,dword ptr [EBP + -0x4]
0057f49a  MOV EAX,dword ptr [EDX]
0057f49c  CALL EAX
0057f49e  MOV dword ptr [EBP + -0x30],EAX
0057f4a1  JMP 0x0057f4aa
0057f4a3  MOV dword ptr [EBP + -0x30],0x0
0057f4aa  MOV ECX,dword ptr [EBP + -0x2c]
0057f4ad  MOV dword ptr [ECX],0x0
0057f4b3  MOV EDX,dword ptr [EBP + -0x2c]
0057f4b6  MOV EAX,dword ptr [EDX + 0x4]
0057f4b9  MOV ECX,dword ptr [EBP + -0x2c]
0057f4bc  MOV ECX,dword ptr [ECX + 0x4]
0057f4bf  MOV EDX,dword ptr [EAX]
0057f4c1  MOV EAX,dword ptr [EDX + 0x70]
0057f4c4  CALL EAX
0057f4c6  MOV ECX,dword ptr [EBP + -0x2c]
0057f4c9  MOV EDX,dword ptr [ECX + 0x4]
0057f4cc  MOV dword ptr [EBP + -0x10],EDX
0057f4cf  MOV EAX,dword ptr [EBP + -0x10]
0057f4d2  MOV dword ptr [EBP + -0xc],EAX
0057f4d5  CMP dword ptr [EBP + -0xc],0x0
0057f4d9  JZ 0x0057f4ee
0057f4db  PUSH 0x1
0057f4dd  MOV ECX,dword ptr [EBP + -0xc]
0057f4e0  MOV EDX,dword ptr [ECX]
0057f4e2  MOV ECX,dword ptr [EBP + -0xc]
0057f4e5  MOV EAX,dword ptr [EDX]
0057f4e7  CALL EAX
0057f4e9  MOV dword ptr [EBP + -0x34],EAX
0057f4ec  JMP 0x0057f4f5
0057f4ee  MOV dword ptr [EBP + -0x34],0x0
0057f4f5  MOV ECX,dword ptr [EBP + -0x2c]
0057f4f8  MOV dword ptr [ECX + 0x4],0x0
0057f4ff  MOV EDX,dword ptr [EBP + -0x2c]
0057f502  MOV EAX,dword ptr [EDX + 0x8]
0057f505  MOV ECX,dword ptr [EBP + -0x2c]
0057f508  MOV ECX,dword ptr [ECX + 0x8]
0057f50b  MOV EDX,dword ptr [EAX]
0057f50d  MOV EAX,dword ptr [EDX + 0x70]
0057f510  CALL EAX
0057f512  MOV ECX,dword ptr [EBP + -0x2c]
0057f515  MOV EDX,dword ptr [ECX + 0x8]
0057f518  MOV dword ptr [EBP + -0x18],EDX
0057f51b  MOV EAX,dword ptr [EBP + -0x18]
0057f51e  MOV dword ptr [EBP + -0x14],EAX
0057f521  CMP dword ptr [EBP + -0x14],0x0
0057f525  JZ 0x0057f53a
0057f527  PUSH 0x1
0057f529  MOV ECX,dword ptr [EBP + -0x14]
0057f52c  MOV EDX,dword ptr [ECX]
0057f52e  MOV ECX,dword ptr [EBP + -0x14]
0057f531  MOV EAX,dword ptr [EDX]
0057f533  CALL EAX
0057f535  MOV dword ptr [EBP + -0x38],EAX
0057f538  JMP 0x0057f541
0057f53a  MOV dword ptr [EBP + -0x38],0x0
0057f541  MOV ECX,dword ptr [EBP + -0x2c]
0057f544  MOV dword ptr [ECX + 0x8],0x0
0057f54b  MOV EDX,dword ptr [EBP + -0x2c]
0057f54e  MOV EAX,dword ptr [EDX + 0xc]
0057f551  MOV ECX,dword ptr [EBP + -0x2c]
0057f554  MOV ECX,dword ptr [ECX + 0xc]
0057f557  MOV EDX,dword ptr [EAX]
0057f559  MOV EAX,dword ptr [EDX + 0x70]
0057f55c  CALL EAX
0057f55e  MOV ECX,dword ptr [EBP + -0x2c]
0057f561  MOV EDX,dword ptr [ECX + 0xc]
0057f564  MOV dword ptr [EBP + -0x20],EDX
0057f567  MOV EAX,dword ptr [EBP + -0x20]
0057f56a  MOV dword ptr [EBP + -0x1c],EAX
0057f56d  CMP dword ptr [EBP + -0x1c],0x0
0057f571  JZ 0x0057f586
0057f573  PUSH 0x1
0057f575  MOV ECX,dword ptr [EBP + -0x1c]
0057f578  MOV EDX,dword ptr [ECX]
0057f57a  MOV ECX,dword ptr [EBP + -0x1c]
0057f57d  MOV EAX,dword ptr [EDX]
0057f57f  CALL EAX
0057f581  MOV dword ptr [EBP + -0x3c],EAX
0057f584  JMP 0x0057f58d
0057f586  MOV dword ptr [EBP + -0x3c],0x0
0057f58d  MOV ECX,dword ptr [EBP + -0x2c]
0057f590  MOV dword ptr [ECX + 0xc],0x0
0057f597  MOV EDX,dword ptr [EBP + -0x2c]
0057f59a  MOV EAX,dword ptr [EDX + 0x10]
0057f59d  MOV ECX,dword ptr [EBP + -0x2c]
0057f5a0  MOV ECX,dword ptr [ECX + 0x10]
0057f5a3  MOV EDX,dword ptr [EAX]
0057f5a5  MOV EAX,dword ptr [EDX + 0x70]
0057f5a8  CALL EAX
0057f5aa  MOV ECX,dword ptr [EBP + -0x2c]
0057f5ad  MOV EDX,dword ptr [ECX + 0x10]
0057f5b0  MOV dword ptr [EBP + -0x28],EDX
0057f5b3  MOV EAX,dword ptr [EBP + -0x28]
0057f5b6  MOV dword ptr [EBP + -0x24],EAX
0057f5b9  CMP dword ptr [EBP + -0x24],0x0
0057f5bd  JZ 0x0057f5d2
0057f5bf  PUSH 0x1
0057f5c1  MOV ECX,dword ptr [EBP + -0x24]
0057f5c4  MOV EDX,dword ptr [ECX]
0057f5c6  MOV ECX,dword ptr [EBP + -0x24]
0057f5c9  MOV EAX,dword ptr [EDX]
0057f5cb  CALL EAX
0057f5cd  MOV dword ptr [EBP + -0x40],EAX
0057f5d0  JMP 0x0057f5d9
0057f5d2  MOV dword ptr [EBP + -0x40],0x0
0057f5d9  MOV ECX,dword ptr [EBP + -0x2c]
0057f5dc  MOV dword ptr [ECX + 0x10],0x0
0057f5e3  MOV ESP,EBP
0057f5e5  POP EBP
0057f5e6  RET
