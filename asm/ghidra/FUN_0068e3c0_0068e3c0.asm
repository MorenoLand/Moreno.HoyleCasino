; FUN_0068e3c0  0068e3c0
0068e3c0  PUSH EBP
0068e3c1  MOV EBP,ESP
0068e3c3  SUB ESP,0x10
0068e3c6  MOV dword ptr [EBP + -0x10],ECX
0068e3c9  MOV EAX,dword ptr [EBP + 0x8]
0068e3cc  MOV ECX,dword ptr [EAX + 0x8]
0068e3cf  MOV dword ptr [EBP + -0x4],ECX
0068e3d2  MOV EDX,dword ptr [EBP + 0x8]
0068e3d5  MOV EAX,dword ptr [EBP + -0x4]
0068e3d8  MOV ECX,dword ptr [EAX]
0068e3da  MOV dword ptr [EDX + 0x8],ECX
0068e3dd  MOV EDX,dword ptr [EBP + -0x4]
0068e3e0  MOV EAX,dword ptr [EDX]
0068e3e2  MOVSX ECX,byte ptr [EAX + 0x35]
0068e3e6  TEST ECX,ECX
0068e3e8  JNZ 0x0068e3f5
0068e3ea  MOV EDX,dword ptr [EBP + -0x4]
0068e3ed  MOV EAX,dword ptr [EDX]
0068e3ef  MOV ECX,dword ptr [EBP + 0x8]
0068e3f2  MOV dword ptr [EAX + 0x4],ECX
0068e3f5  MOV EDX,dword ptr [EBP + -0x4]
0068e3f8  MOV EAX,dword ptr [EBP + 0x8]
0068e3fb  MOV ECX,dword ptr [EAX + 0x4]
0068e3fe  MOV dword ptr [EDX + 0x4],ECX
0068e401  MOV EDX,dword ptr [EBP + -0x10]
0068e404  MOV EAX,dword ptr [EDX + 0x4]
0068e407  MOV ECX,dword ptr [EBP + 0x8]
0068e40a  CMP ECX,dword ptr [EAX + 0x4]
0068e40d  JNZ 0x0068e41d
0068e40f  MOV EDX,dword ptr [EBP + -0x10]
0068e412  MOV EAX,dword ptr [EDX + 0x4]
0068e415  MOV ECX,dword ptr [EBP + -0x4]
0068e418  MOV dword ptr [EAX + 0x4],ECX
0068e41b  JMP 0x0068e44f
0068e41d  MOV EDX,dword ptr [EBP + 0x8]
0068e420  MOV EAX,dword ptr [EDX + 0x4]
0068e423  MOV dword ptr [EBP + -0x8],EAX
0068e426  MOV ECX,dword ptr [EBP + -0x8]
0068e429  MOV EDX,dword ptr [EBP + 0x8]
0068e42c  CMP EDX,dword ptr [ECX]
0068e42e  JNZ 0x0068e443
0068e430  MOV EAX,dword ptr [EBP + 0x8]
0068e433  MOV ECX,dword ptr [EAX + 0x4]
0068e436  MOV dword ptr [EBP + -0xc],ECX
0068e439  MOV EDX,dword ptr [EBP + -0xc]
0068e43c  MOV EAX,dword ptr [EBP + -0x4]
0068e43f  MOV dword ptr [EDX],EAX
0068e441  JMP 0x0068e44f
0068e443  MOV ECX,dword ptr [EBP + 0x8]
0068e446  MOV EDX,dword ptr [ECX + 0x4]
0068e449  MOV EAX,dword ptr [EBP + -0x4]
0068e44c  MOV dword ptr [EDX + 0x8],EAX
0068e44f  MOV ECX,dword ptr [EBP + -0x4]
0068e452  MOV EDX,dword ptr [EBP + 0x8]
0068e455  MOV dword ptr [ECX],EDX
0068e457  MOV EAX,dword ptr [EBP + 0x8]
0068e45a  MOV ECX,dword ptr [EBP + -0x4]
0068e45d  MOV dword ptr [EAX + 0x4],ECX
0068e460  MOV ESP,EBP
0068e462  POP EBP
0068e463  RET 0x4
