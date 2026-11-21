; FUN_00552e90  00552e90
00552e90  PUSH EBP
00552e91  MOV EBP,ESP
00552e93  SUB ESP,0xc
00552e96  MOV dword ptr [EBP + -0xc],ECX
00552e99  MOV dword ptr [EBP + -0x8],0xffffffff
00552ea0  MOV EAX,dword ptr [EBP + 0x8]
00552ea3  PUSH EAX
00552ea4  MOV ECX,dword ptr [0x0162ee84]
00552eaa  MOV ECX,dword ptr [ECX + 0x14]
00552ead  CALL 0x005fb300
00552eb2  MOV dword ptr [EBP + -0x4],EAX
00552eb5  CMP dword ptr [EBP + -0x4],0x0
00552eb9  JZ 0x00552ecb
00552ebb  MOV EDX,dword ptr [EBP + -0x4]
00552ebe  MOV EAX,dword ptr [EDX]
00552ec0  MOV ECX,dword ptr [EBP + -0x4]
00552ec3  MOV EDX,dword ptr [EAX + 0xcc]
00552ec9  CALL EDX
00552ecb  MOV EAX,dword ptr [EBP + 0x8]
00552ece  PUSH EAX
00552ecf  MOV ECX,dword ptr [EBP + -0xc]
00552ed2  CALL 0x00552e20
00552ed7  MOV dword ptr [EBP + -0x8],EAX
00552eda  CMP dword ptr [EBP + -0x8],-0x1
00552ede  JZ 0x00552ef1
00552ee0  PUSH 0x1
00552ee2  MOV ECX,dword ptr [EBP + -0x8]
00552ee5  PUSH ECX
00552ee6  MOV ECX,dword ptr [0x0162ee80]
00552eec  CALL 0x005f2b20
00552ef1  MOV ESP,EBP
00552ef3  POP EBP
00552ef4  RET 0x4
