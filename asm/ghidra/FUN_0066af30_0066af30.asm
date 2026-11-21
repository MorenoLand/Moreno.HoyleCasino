; FUN_0066af30  0066af30
0066af30  PUSH EBP
0066af31  MOV EBP,ESP
0066af33  SUB ESP,0x8
0066af36  MOV dword ptr [EBP + -0x4],ECX
0066af39  MOV EAX,dword ptr [EBP + 0x8]
0066af3c  MOVZX ECX,byte ptr [EAX + 0x4]
0066af40  TEST ECX,ECX
0066af42  JNZ 0x0066af9c
0066af44  MOV EDX,dword ptr [EBP + 0x8]
0066af47  MOV EAX,[0x0162ee84]
0066af4c  MOV ECX,dword ptr [EDX + 0x20]
0066af4f  CMP ECX,dword ptr [EAX + 0x14]
0066af52  JNZ 0x0066af9c
0066af54  MOV EDX,dword ptr [EBP + 0x8]
0066af57  MOV EAX,dword ptr [EDX + 0x18]
0066af5a  MOV dword ptr [EBP + -0x8],EAX
0066af5d  CMP dword ptr [EBP + -0x8],0x2
0066af61  JZ 0x0066af6b
0066af63  CMP dword ptr [EBP + -0x8],0x4
0066af67  JZ 0x0066af6b
0066af69  JMP 0x0066af9c
0066af6b  MOV ECX,dword ptr [0x0162ee84]
0066af71  MOV EDX,dword ptr [ECX]
0066af73  MOV ECX,dword ptr [0x0162ee84]
0066af79  MOV EAX,dword ptr [EDX + 0x258]
0066af7f  CALL EAX
0066af81  PUSH EAX
0066af82  MOV ECX,dword ptr [0x0162ee84]
0066af88  MOV EDX,dword ptr [ECX]
0066af8a  MOV ECX,dword ptr [0x0162ee84]
0066af90  MOV EAX,dword ptr [EDX + 0x34]
0066af93  CALL EAX
0066af95  MOV ECX,dword ptr [EBP + 0x8]
0066af98  MOV byte ptr [ECX + 0x4],0x1
0066af9c  MOV EDX,dword ptr [EBP + 0x8]
0066af9f  PUSH EDX
0066afa0  MOV ECX,dword ptr [EBP + -0x4]
0066afa3  CALL 0x005f1680
0066afa8  MOV ESP,EBP
0066afaa  POP EBP
0066afab  RET 0x4
