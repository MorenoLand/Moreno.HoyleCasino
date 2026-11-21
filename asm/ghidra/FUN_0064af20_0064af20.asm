; FUN_0064af20  0064af20
0064af20  PUSH EBP
0064af21  MOV EBP,ESP
0064af23  PUSH ECX
0064af24  MOV dword ptr [EBP + -0x4],ECX
0064af27  MOV EAX,dword ptr [EBP + 0x8]
0064af2a  PUSH EAX
0064af2b  MOV ECX,dword ptr [EBP + -0x4]
0064af2e  CALL 0x005f5300
0064af33  MOV ECX,dword ptr [EBP + 0x8]
0064af36  ADD ECX,0x2
0064af39  PUSH ECX
0064af3a  MOV EDX,dword ptr [EBP + -0x4]
0064af3d  MOV EAX,dword ptr [EDX + 0x18c]
0064af43  MOV ECX,dword ptr [EBP + -0x4]
0064af46  MOV ECX,dword ptr [ECX + 0x18c]
0064af4c  MOV EDX,dword ptr [EAX]
0064af4e  MOV EAX,dword ptr [EDX + 0x6c]
0064af51  CALL EAX
0064af53  MOV ECX,dword ptr [EBP + 0x8]
0064af56  ADD ECX,0x3
0064af59  PUSH ECX
0064af5a  MOV EDX,dword ptr [EBP + -0x4]
0064af5d  MOV EAX,dword ptr [EDX + 0x190]
0064af63  MOV ECX,dword ptr [EBP + -0x4]
0064af66  MOV ECX,dword ptr [ECX + 0x190]
0064af6c  MOV EDX,dword ptr [EAX]
0064af6e  MOV EAX,dword ptr [EDX + 0x6c]
0064af71  CALL EAX
0064af73  MOV ECX,dword ptr [EBP + 0x8]
0064af76  ADD ECX,0x4
0064af79  PUSH ECX
0064af7a  MOV EDX,dword ptr [EBP + -0x4]
0064af7d  MOV EAX,dword ptr [EDX + 0x194]
0064af83  MOV ECX,dword ptr [EBP + -0x4]
0064af86  MOV ECX,dword ptr [ECX + 0x194]
0064af8c  MOV EDX,dword ptr [EAX]
0064af8e  MOV EAX,dword ptr [EDX + 0x6c]
0064af91  CALL EAX
0064af93  MOV ESP,EBP
0064af95  POP EBP
0064af96  RET 0x4
