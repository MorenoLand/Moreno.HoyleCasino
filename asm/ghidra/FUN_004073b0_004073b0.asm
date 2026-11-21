; FUN_004073b0  004073b0
004073b0  PUSH EBP
004073b1  MOV EBP,ESP
004073b3  SUB ESP,0x8
004073b6  MOV dword ptr [EBP + -0x8],ECX
004073b9  MOV EAX,dword ptr [EBP + -0x8]
004073bc  MOV dword ptr [EAX],0x1
004073c2  MOV ECX,dword ptr [EBP + -0x8]
004073c5  MOV dword ptr [ECX + 0x4],0x0
004073cc  MOV EDX,dword ptr [EBP + -0x8]
004073cf  MOV dword ptr [EDX + 0x8],0x0
004073d6  MOV EAX,dword ptr [EBP + -0x8]
004073d9  MOV dword ptr [EAX + 0xc],0x0
004073e0  MOV ECX,dword ptr [EBP + -0x8]
004073e3  MOV dword ptr [ECX + 0x10],0x0
004073ea  MOV EDX,dword ptr [EBP + -0x8]
004073ed  MOV dword ptr [EDX + 0x14],0x0
004073f4  MOV EAX,dword ptr [EBP + -0x8]
004073f7  MOV dword ptr [EAX + 0x18],0x0
004073fe  MOV ECX,dword ptr [EBP + -0x8]
00407401  MOV dword ptr [ECX + 0x1c],0x0
00407408  MOV dword ptr [EBP + -0x4],0x0
0040740f  JMP 0x0040741a
00407411  MOV EDX,dword ptr [EBP + -0x4]
00407414  ADD EDX,0x1
00407417  MOV dword ptr [EBP + -0x4],EDX
0040741a  CMP dword ptr [EBP + -0x4],0x63
0040741e  JGE 0x00407441
00407420  MOV EAX,dword ptr [EBP + -0x4]
00407423  MOV ECX,dword ptr [EBP + -0x8]
00407426  MOV dword ptr [ECX + EAX*0x4 + 0x20],0x0
0040742e  MOV EDX,dword ptr [EBP + -0x4]
00407431  MOV EAX,dword ptr [EBP + -0x8]
00407434  MOV dword ptr [EAX + EDX*0x4 + 0x1ac],0x0
0040743f  JMP 0x00407411
00407441  MOV ESP,EBP
00407443  POP EBP
00407444  RET
