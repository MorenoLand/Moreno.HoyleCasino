; FUN_0051ec50  0051ec50
0051ec50  PUSH EBP
0051ec51  MOV EBP,ESP
0051ec53  PUSH ECX
0051ec54  MOV dword ptr [EBP + -0x4],ECX
0051ec57  MOV EAX,dword ptr [EBP + -0x4]
0051ec5a  MOV CL,byte ptr [EBP + 0x8]
0051ec5d  MOV byte ptr [EAX + 0x1c0],CL
0051ec63  MOV EDX,dword ptr [EBP + -0x4]
0051ec66  MOV EAX,dword ptr [EBP + 0xc]
0051ec69  MOV dword ptr [EDX + 0x1c4],EAX
0051ec6f  MOV ESP,EBP
0051ec71  POP EBP
0051ec72  RET 0x8
