; FUN_0062eef0  0062eef0
0062eef0  PUSH EBP
0062eef1  MOV EBP,ESP
0062eef3  PUSH ECX
0062eef4  MOV dword ptr [EBP + -0x4],ECX
0062eef7  MOV EAX,dword ptr [EBP + -0x4]
0062eefa  MOV ECX,dword ptr [EAX + 0x24]
0062eefd  PUSH ECX
0062eefe  MOV EDX,dword ptr [EBP + -0x4]
0062ef01  MOV EAX,dword ptr [EDX + 0x20]
0062ef04  PUSH EAX
0062ef05  CALL dword ptr [0x006b218c]
0062ef0b  ADD ESP,0x8
0062ef0e  MOV ECX,dword ptr [EBP + -0x4]
0062ef11  MOV dword ptr [ECX + 0x24],EAX
0062ef14  MOV EDX,dword ptr [EBP + -0x4]
0062ef17  MOV EAX,dword ptr [EDX + 0x34]
0062ef1a  SUB EAX,0x1
0062ef1d  MOV ECX,dword ptr [EBP + -0x4]
0062ef20  MOV dword ptr [ECX + 0x34],EAX
0062ef23  CMP dword ptr [EBP + 0x8],0xa
0062ef27  JNZ 0x0062ef42
0062ef29  MOV EDX,dword ptr [EBP + -0x4]
0062ef2c  MOV dword ptr [EDX + 0x34],0x0
0062ef33  MOV EAX,dword ptr [EBP + -0x4]
0062ef36  MOV ECX,dword ptr [EAX + 0x30]
0062ef39  SUB ECX,0x1
0062ef3c  MOV EDX,dword ptr [EBP + -0x4]
0062ef3f  MOV dword ptr [EDX + 0x30],ECX
0062ef42  MOV EAX,dword ptr [EBP + -0x4]
0062ef45  MOV ECX,dword ptr [EAX + 0x24]
0062ef48  MOVZX EDX,byte ptr [ECX]
0062ef4b  CMP dword ptr [EBP + 0x8],EDX
0062ef4e  JZ 0x0062ef64
0062ef50  PUSH 0x70
0062ef52  PUSH 0x6d9c18
0062ef57  PUSH 0x6d9c44
0062ef5c  CALL 0x005e9f20
0062ef61  ADD ESP,0xc
0062ef64  MOV EAX,dword ptr [EBP + 0x8]
0062ef67  MOV ESP,EBP
0062ef69  POP EBP
0062ef6a  RET 0x4
