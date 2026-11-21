; FUN_0046c420  0046c420
0046c420  PUSH EBP
0046c421  MOV EBP,ESP
0046c423  PUSH ECX
0046c424  MOV dword ptr [EBP + -0x4],ECX
0046c427  MOV EAX,dword ptr [EBP + -0x4]
0046c42a  MOVZX ECX,byte ptr [EAX + 0x1dc]
0046c431  TEST ECX,ECX
0046c433  JZ 0x0046c4c6
0046c439  MOV EDX,dword ptr [EBP + -0x4]
0046c43c  MOV EAX,dword ptr [EDX + 0x1e0]
0046c442  MOV ECX,dword ptr [EAX + 0x220]
0046c448  SUB ECX,0x1
0046c44b  MOV EDX,dword ptr [EBP + -0x4]
0046c44e  MOV EAX,dword ptr [EDX + 0x1e0]
0046c454  MOV dword ptr [EAX + 0x220],ECX
0046c45a  MOV ECX,dword ptr [EBP + -0x4]
0046c45d  MOV byte ptr [ECX + 0x1dc],0x0
0046c464  PUSH 0x6bbaf0
0046c469  CALL 0x00630f40
0046c46e  ADD ESP,0x4
0046c471  PUSH EAX
0046c472  MOV EDX,dword ptr [EBP + -0x4]
0046c475  MOV EAX,dword ptr [EDX + 0x1e0]
0046c47b  MOV ECX,dword ptr [EAX + 0x1f4]
0046c481  MOV EDX,dword ptr [EBP + -0x4]
0046c484  MOV EAX,dword ptr [EDX + 0x1e0]
0046c48a  MOV EDX,dword ptr [EAX + 0x1f4]
0046c490  MOV EAX,dword ptr [ECX]
0046c492  MOV ECX,EDX
0046c494  MOV EDX,dword ptr [EAX + 0xb4]
0046c49a  CALL EDX
0046c49c  MOV EAX,dword ptr [EBP + -0x4]
0046c49f  MOV ECX,dword ptr [EAX + 0x1e0]
0046c4a5  MOV EDX,dword ptr [ECX + 0x208]
0046c4ab  MOV EAX,dword ptr [EBP + -0x4]
0046c4ae  MOV ECX,dword ptr [EAX + 0x1e0]
0046c4b4  MOV ECX,dword ptr [ECX + 0x208]
0046c4ba  MOV EDX,dword ptr [EDX]
0046c4bc  MOV EAX,dword ptr [EDX + 0x70]
0046c4bf  CALL EAX
0046c4c1  JMP 0x0046c570
0046c4c6  MOV ECX,dword ptr [EBP + -0x4]
0046c4c9  MOV EDX,dword ptr [ECX + 0x1e0]
0046c4cf  MOV EAX,dword ptr [EBP + -0x4]
0046c4d2  MOV ECX,dword ptr [EAX + 0x1e0]
0046c4d8  MOV EDX,dword ptr [EDX + 0x220]
0046c4de  CMP EDX,dword ptr [ECX + 0x21c]
0046c4e4  JGE 0x0046c570
0046c4ea  MOV EAX,dword ptr [EBP + -0x4]
0046c4ed  MOV ECX,dword ptr [EAX + 0x1e0]
0046c4f3  MOV EDX,dword ptr [ECX + 0x220]
0046c4f9  ADD EDX,0x1
0046c4fc  MOV EAX,dword ptr [EBP + -0x4]
0046c4ff  MOV ECX,dword ptr [EAX + 0x1e0]
0046c505  MOV dword ptr [ECX + 0x220],EDX
0046c50b  MOV EDX,dword ptr [EBP + -0x4]
0046c50e  MOV byte ptr [EDX + 0x1dc],0x1
0046c515  PUSH 0x6bbdac
0046c51a  CALL 0x00630f40
0046c51f  ADD ESP,0x4
0046c522  PUSH EAX
0046c523  MOV EAX,dword ptr [EBP + -0x4]
0046c526  MOV ECX,dword ptr [EAX + 0x1e0]
0046c52c  MOV EDX,dword ptr [ECX + 0x1f4]
0046c532  MOV EAX,dword ptr [EBP + -0x4]
0046c535  MOV ECX,dword ptr [EAX + 0x1e0]
0046c53b  MOV ECX,dword ptr [ECX + 0x1f4]
0046c541  MOV EDX,dword ptr [EDX]
0046c543  MOV EAX,dword ptr [EDX + 0xb4]
0046c549  CALL EAX
0046c54b  MOV ECX,dword ptr [EBP + -0x4]
0046c54e  MOV EDX,dword ptr [ECX + 0x1e0]
0046c554  MOV EAX,dword ptr [EDX + 0x208]
0046c55a  MOV ECX,dword ptr [EBP + -0x4]
0046c55d  MOV EDX,dword ptr [ECX + 0x1e0]
0046c563  MOV ECX,dword ptr [EDX + 0x208]
0046c569  MOV EAX,dword ptr [EAX]
0046c56b  MOV EDX,dword ptr [EAX + 0x74]
0046c56e  CALL EDX
0046c570  PUSH 0x1
0046c572  MOV EAX,dword ptr [EBP + -0x4]
0046c575  MOV ECX,dword ptr [EAX + 0x1e0]
0046c57b  CALL 0x00519a40
0046c580  MOV ESP,EBP
0046c582  POP EBP
0046c583  RET
