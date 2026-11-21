; FUN_005b1f80  005b1f80
005b1f80  PUSH EBP
005b1f81  MOV EBP,ESP
005b1f83  SUB ESP,0x84
005b1f89  MOV dword ptr [EBP + -0x80],ECX
005b1f8c  CMP dword ptr [0x0163068c],0x0
005b1f93  JNZ 0x005b1f9a
005b1f95  JMP 0x005b2387
005b1f9a  PUSH 0x32
005b1f9c  MOV ECX,dword ptr [0x0163068c]
005b1fa2  CALL 0x005fb5e0
005b1fa7  MOV dword ptr [EBP + -0x78],EAX
005b1faa  MOV dword ptr [EBP + -0x74],0x0
005b1fb1  PUSH 0x33
005b1fb3  MOV ECX,dword ptr [0x0163068c]
005b1fb9  CALL 0x005fb5e0
005b1fbe  MOV dword ptr [EBP + -0x70],EAX
005b1fc1  MOV dword ptr [EBP + -0x6c],0x1
005b1fc8  PUSH 0x34
005b1fca  MOV ECX,dword ptr [0x0163068c]
005b1fd0  CALL 0x005fb5e0
005b1fd5  MOV dword ptr [EBP + -0x68],EAX
005b1fd8  MOV dword ptr [EBP + -0x64],0x2
005b1fdf  PUSH 0x35
005b1fe1  MOV ECX,dword ptr [0x0163068c]
005b1fe7  CALL 0x005fb5e0
005b1fec  MOV dword ptr [EBP + -0x60],EAX
005b1fef  MOV dword ptr [EBP + -0x5c],0x3
005b1ff6  PUSH 0x36
005b1ff8  MOV ECX,dword ptr [0x0163068c]
005b1ffe  CALL 0x005fb5e0
005b2003  MOV dword ptr [EBP + -0x58],EAX
005b2006  MOV dword ptr [EBP + -0x54],0x4
005b200d  PUSH 0x37
005b200f  MOV ECX,dword ptr [0x0163068c]
005b2015  CALL 0x005fb350
005b201a  MOV dword ptr [EBP + -0x50],EAX
005b201d  MOV dword ptr [EBP + -0x4c],0x5
005b2024  PUSH 0x38
005b2026  MOV ECX,dword ptr [0x0163068c]
005b202c  CALL 0x005fb350
005b2031  MOV dword ptr [EBP + -0x48],EAX
005b2034  MOV dword ptr [EBP + -0x44],0x6
005b203b  PUSH 0x39
005b203d  MOV ECX,dword ptr [0x0163068c]
005b2043  CALL 0x005fb350
005b2048  MOV dword ptr [EBP + -0x40],EAX
005b204b  MOV dword ptr [EBP + -0x3c],0x7
005b2052  PUSH 0x3a
005b2054  MOV ECX,dword ptr [0x0163068c]
005b205a  CALL 0x005fb350
005b205f  MOV dword ptr [EBP + -0x38],EAX
005b2062  MOV dword ptr [EBP + -0x34],0x8
005b2069  PUSH 0x3b
005b206b  MOV ECX,dword ptr [0x0163068c]
005b2071  CALL 0x005fb350
005b2076  MOV dword ptr [EBP + -0x30],EAX
005b2079  MOV dword ptr [EBP + -0x2c],0x9
005b2080  PUSH 0x3c
005b2082  MOV ECX,dword ptr [0x0163068c]
005b2088  CALL 0x005fb350
005b208d  MOV dword ptr [EBP + -0x28],EAX
005b2090  MOV dword ptr [EBP + -0x24],0xa
005b2097  PUSH 0x3d
005b2099  MOV ECX,dword ptr [0x0163068c]
005b209f  CALL 0x005fb350
005b20a4  MOV dword ptr [EBP + -0x20],EAX
005b20a7  MOV dword ptr [EBP + -0x1c],0xb
005b20ae  PUSH 0x3e
005b20b0  MOV ECX,dword ptr [0x0163068c]
005b20b6  CALL 0x005fb350
005b20bb  MOV dword ptr [EBP + -0x18],EAX
005b20be  MOV dword ptr [EBP + -0x14],0xc
005b20c5  PUSH 0x0
005b20c7  MOV ECX,dword ptr [0x0163068c]
005b20cd  CALL 0x005fb860
005b20d2  MOV EAX,dword ptr [EAX + 0x4c]
005b20d5  MOV dword ptr [EBP + -0x10],EAX
005b20d8  MOV dword ptr [EBP + -0xc],0xd
005b20df  MOV dword ptr [EBP + -0x8],0xe
005b20e6  MOV dword ptr [EBP + -0x4],0xffffffff
005b20ed  MOV dword ptr [EBP + -0x7c],0x0
005b20f4  JMP 0x005b20ff
005b20f6  MOV ECX,dword ptr [EBP + -0x7c]
005b20f9  ADD ECX,0x1
005b20fc  MOV dword ptr [EBP + -0x7c],ECX
005b20ff  MOV EDX,dword ptr [EBP + -0x7c]
005b2102  CMP EDX,dword ptr [EBP + -0x8]
005b2105  JGE 0x005b2142
005b2107  MOV EAX,dword ptr [EBP + -0x7c]
005b210a  CMP dword ptr [EBP + EAX*0x8 + -0x78],0x0
005b210f  JZ 0x005b2140
005b2111  MOV ECX,dword ptr [EBP + 0x8]
005b2114  PUSH ECX
005b2115  MOV EDX,dword ptr [EBP + -0x7c]
005b2118  MOV EAX,dword ptr [EBP + EDX*0x8 + -0x78]
005b211c  MOV ECX,dword ptr [EBP + -0x7c]
005b211f  MOV ECX,dword ptr [EBP + ECX*0x8 + -0x78]
005b2123  MOV EDX,dword ptr [EAX]
005b2125  MOV EAX,dword ptr [EDX + 0x84]
005b212b  CALL EAX
005b212d  MOVZX ECX,AL
005b2130  TEST ECX,ECX
005b2132  JZ 0x005b2140
005b2134  MOV EDX,dword ptr [EBP + -0x7c]
005b2137  MOV EAX,dword ptr [EBP + EDX*0x8 + -0x74]
005b213b  MOV dword ptr [EBP + -0x4],EAX
005b213e  JMP 0x005b2142
005b2140  JMP 0x005b20f6
005b2142  CMP dword ptr [EBP + -0x4],-0x1
005b2146  JNZ 0x005b216b
005b2148  MOV ECX,dword ptr [EBP + 0x8]
005b214b  CMP dword ptr [ECX + 0x18],0x3
005b214f  JNZ 0x005b2166
005b2151  PUSH 0x6b27f8
005b2156  MOV EDX,dword ptr [EBP + -0x80]
005b2159  MOV EAX,dword ptr [EDX]
005b215b  MOV ECX,dword ptr [EBP + -0x80]
005b215e  MOV EDX,dword ptr [EAX + 0xb4]
005b2164  CALL EDX
005b2166  JMP 0x005b2387
005b216b  MOV EAX,dword ptr [EBP + -0x4]
005b216e  MOV dword ptr [EBP + 0xffffff7c],EAX
005b2174  CMP dword ptr [EBP + 0xffffff7c],0xd
005b217b  JA 0x005b236c
005b2181  MOV ECX,dword ptr [EBP + 0xffffff7c]
005b2187  JMP dword ptr [ECX*0x4 + 0x5b2390]
005b236c  XOR ECX,ECX
005b236e  JNZ 0x005b2387
005b2370  PUSH 0x34f
005b2375  PUSH 0x6d01a8
005b237a  PUSH 0x6b2f58
005b237f  CALL 0x005e9f20
005b2384  ADD ESP,0xc
005b2387  MOV ESP,EBP
005b2389  POP EBP
005b238a  RET 0x4
