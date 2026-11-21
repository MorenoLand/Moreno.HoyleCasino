; FUN_0064b350  0064b350
0064b350  PUSH EBP
0064b351  MOV EBP,ESP
0064b353  PUSH ECX
0064b354  MOV dword ptr [EBP + -0x4],ECX
0064b357  MOV EAX,dword ptr [EBP + -0x4]
0064b35a  MOV ECX,dword ptr [EAX + 0x184]
0064b360  MOV byte ptr [ECX + 0x5c],0x1
0064b364  MOV ECX,dword ptr [EBP + -0x4]
0064b367  CALL 0x005eb5a0
0064b36c  MOV EDX,dword ptr [EBP + -0x4]
0064b36f  MOV EAX,dword ptr [EDX + 0x18c]
0064b375  MOV ECX,dword ptr [EBP + -0x4]
0064b378  MOV ECX,dword ptr [ECX + 0x18c]
0064b37e  MOV EDX,dword ptr [EAX]
0064b380  MOV EAX,dword ptr [EDX + 0x70]
0064b383  CALL EAX
0064b385  MOV ECX,dword ptr [EBP + -0x4]
0064b388  MOV EDX,dword ptr [ECX + 0x190]
0064b38e  MOV EAX,dword ptr [EBP + -0x4]
0064b391  MOV ECX,dword ptr [EAX + 0x190]
0064b397  MOV EDX,dword ptr [EDX]
0064b399  MOV EAX,dword ptr [EDX + 0x70]
0064b39c  CALL EAX
0064b39e  MOV ECX,dword ptr [EBP + -0x4]
0064b3a1  MOV EDX,dword ptr [ECX + 0x194]
0064b3a7  MOV EAX,dword ptr [EBP + -0x4]
0064b3aa  MOV ECX,dword ptr [EAX + 0x194]
0064b3b0  MOV EDX,dword ptr [EDX]
0064b3b2  MOV EAX,dword ptr [EDX + 0x70]
0064b3b5  CALL EAX
0064b3b7  MOV ESP,EBP
0064b3b9  POP EBP
0064b3ba  RET
