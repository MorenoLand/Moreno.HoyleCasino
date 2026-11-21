; FUN_0065b800  0065b800
0065b800  PUSH EBP
0065b801  MOV EBP,ESP
0065b803  SUB ESP,0x8
0065b806  MOV dword ptr [EBP + -0x8],ECX
0065b809  MOV ECX,dword ptr [EBP + -0x8]
0065b80c  CALL 0x00602550
0065b811  MOV dword ptr [EBP + -0x4],0x0
0065b818  JMP 0x0065b823
0065b81a  MOV EAX,dword ptr [EBP + -0x4]
0065b81d  ADD EAX,0x1
0065b820  MOV dword ptr [EBP + -0x4],EAX
0065b823  CMP dword ptr [EBP + -0x4],0x3
0065b827  JGE 0x0065b88d
0065b829  MOV ECX,dword ptr [EBP + -0x4]
0065b82c  MOV EDX,dword ptr [EBP + -0x8]
0065b82f  CMP dword ptr [EDX + ECX*0x4 + 0x218],0x0
0065b837  JZ 0x0065b85a
0065b839  MOV EAX,dword ptr [EBP + -0x4]
0065b83c  MOV ECX,dword ptr [EBP + -0x8]
0065b83f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x218]
0065b846  MOV EAX,dword ptr [EBP + -0x4]
0065b849  MOV ECX,dword ptr [EBP + -0x8]
0065b84c  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x218]
0065b853  MOV EDX,dword ptr [EDX]
0065b855  MOV EAX,dword ptr [EDX + 0x70]
0065b858  CALL EAX
0065b85a  MOV ECX,dword ptr [EBP + -0x4]
0065b85d  MOV EDX,dword ptr [EBP + -0x8]
0065b860  CMP dword ptr [EDX + ECX*0x4 + 0x224],0x0
0065b868  JZ 0x0065b88b
0065b86a  MOV EAX,dword ptr [EBP + -0x4]
0065b86d  MOV ECX,dword ptr [EBP + -0x8]
0065b870  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x224]
0065b877  MOV EAX,dword ptr [EBP + -0x4]
0065b87a  MOV ECX,dword ptr [EBP + -0x8]
0065b87d  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x224]
0065b884  MOV EDX,dword ptr [EDX]
0065b886  MOV EAX,dword ptr [EDX + 0x70]
0065b889  CALL EAX
0065b88b  JMP 0x0065b81a
0065b88d  MOV ESP,EBP
0065b88f  POP EBP
0065b890  RET
