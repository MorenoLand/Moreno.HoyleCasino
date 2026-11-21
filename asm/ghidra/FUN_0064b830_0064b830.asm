; FUN_0064b830  0064b830
0064b830  PUSH EBP
0064b831  MOV EBP,ESP
0064b833  SUB ESP,0x14
0064b836  MOV dword ptr [EBP + -0x10],ECX
0064b839  MOV dword ptr [EBP + -0x4],0x0
0064b840  JMP 0x0064b84b
0064b842  MOV EAX,dword ptr [EBP + -0x4]
0064b845  ADD EAX,0x1
0064b848  MOV dword ptr [EBP + -0x4],EAX
0064b84b  CMP dword ptr [EBP + -0x4],0x3
0064b84f  JGE 0x0064b8aa
0064b851  MOV ECX,dword ptr [EBP + -0x4]
0064b854  MOV EDX,dword ptr [EBP + -0x10]
0064b857  CMP dword ptr [EDX + ECX*0x4 + 0x198],0x0
0064b85f  JZ 0x0064b8a8
0064b861  MOV EAX,dword ptr [EBP + -0x4]
0064b864  MOV ECX,dword ptr [EBP + -0x10]
0064b867  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x198]
0064b86e  MOV dword ptr [EBP + -0xc],EDX
0064b871  MOV EAX,dword ptr [EBP + -0xc]
0064b874  MOV dword ptr [EBP + -0x8],EAX
0064b877  CMP dword ptr [EBP + -0x8],0x0
0064b87b  JZ 0x0064b890
0064b87d  PUSH 0x1
0064b87f  MOV ECX,dword ptr [EBP + -0x8]
0064b882  MOV EDX,dword ptr [ECX]
0064b884  MOV ECX,dword ptr [EBP + -0x8]
0064b887  MOV EAX,dword ptr [EDX]
0064b889  CALL EAX
0064b88b  MOV dword ptr [EBP + -0x14],EAX
0064b88e  JMP 0x0064b897
0064b890  MOV dword ptr [EBP + -0x14],0x0
0064b897  MOV ECX,dword ptr [EBP + -0x4]
0064b89a  MOV EDX,dword ptr [EBP + -0x10]
0064b89d  MOV dword ptr [EDX + ECX*0x4 + 0x198],0x0
0064b8a8  JMP 0x0064b842
0064b8aa  MOV ESP,EBP
0064b8ac  POP EBP
0064b8ad  RET
