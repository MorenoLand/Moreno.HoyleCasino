; FUN_004dd940  004dd940
004dd940  PUSH EBP
004dd941  MOV EBP,ESP
004dd943  SUB ESP,0x1c
004dd946  MOV dword ptr [EBP + -0x1c],ECX
004dd949  MOV dword ptr [EBP + -0x18],0x0
004dd950  MOV ECX,dword ptr [EBP + 0xc]
004dd953  CALL 0x00463e50
004dd958  MOV dword ptr [EBP + -0x10],EAX
004dd95b  CMP dword ptr [EBP + -0x10],0x0
004dd95f  JL 0x004dd967
004dd961  CMP dword ptr [EBP + -0x10],0x34
004dd965  JL 0x004dd982
004dd967  XOR EAX,EAX
004dd969  JNZ 0x004dd982
004dd96b  PUSH 0x1c6a
004dd970  PUSH 0x6bf384
004dd975  PUSH 0x6b2b64
004dd97a  CALL 0x005e9f20
004dd97f  ADD ESP,0xc
004dd982  MOV EAX,dword ptr [EBP + -0x10]
004dd985  CDQ
004dd986  MOV ECX,0xd
004dd98b  IDIV ECX
004dd98d  MOV dword ptr [EBP + -0x4],EAX
004dd990  MOV EAX,dword ptr [EBP + -0x10]
004dd993  CDQ
004dd994  MOV ECX,0xd
004dd999  IDIV ECX
004dd99b  MOV dword ptr [EBP + -0x14],EDX
004dd99e  MOV dword ptr [EBP + -0x8],0x0
004dd9a5  CMP dword ptr [EBP + -0x4],0x0
004dd9a9  JNZ 0x004dd9b6
004dd9ab  MOV EDX,dword ptr [0x0079076c]
004dd9b1  MOV dword ptr [EBP + -0x8],EDX
004dd9b4  JMP 0x004dd9e6
004dd9b6  CMP dword ptr [EBP + -0x4],0x1
004dd9ba  JNZ 0x004dd9c6
004dd9bc  MOV EAX,[0x00790770]
004dd9c1  MOV dword ptr [EBP + -0x8],EAX
004dd9c4  JMP 0x004dd9e6
004dd9c6  CMP dword ptr [EBP + -0x4],0x2
004dd9ca  JNZ 0x004dd9d7
004dd9cc  MOV ECX,dword ptr [0x00790764]
004dd9d2  MOV dword ptr [EBP + -0x8],ECX
004dd9d5  JMP 0x004dd9e6
004dd9d7  CMP dword ptr [EBP + -0x4],0x3
004dd9db  JNZ 0x004dd9e6
004dd9dd  MOV EDX,dword ptr [0x00790754]
004dd9e3  MOV dword ptr [EBP + -0x8],EDX
004dd9e6  MOV dword ptr [EBP + -0xc],0x0
004dd9ed  CMP dword ptr [EBP + -0x14],0x0
004dd9f1  JNZ 0x004dda00
004dd9f3  MOV EAX,[0x007907a4]
004dd9f8  MOV dword ptr [EBP + -0xc],EAX
004dd9fb  JMP 0x004ddae4
004dda00  CMP dword ptr [EBP + -0x14],0x1
004dda04  JNZ 0x004dda14
004dda06  MOV ECX,dword ptr [0x00790758]
004dda0c  MOV dword ptr [EBP + -0xc],ECX
004dda0f  JMP 0x004ddae4
004dda14  CMP dword ptr [EBP + -0x14],0x2
004dda18  JNZ 0x004dda30
004dda1a  MOV EDX,dword ptr [0x0079077c]
004dda20  MOV dword ptr [EBP + -0xc],EDX
004dda23  MOV EAX,[0x00790780]
004dda28  MOV dword ptr [EBP + -0x8],EAX
004dda2b  JMP 0x004ddae4
004dda30  CMP dword ptr [EBP + -0x14],0x3
004dda34  JNZ 0x004dda44
004dda36  MOV ECX,dword ptr [0x00790790]
004dda3c  MOV dword ptr [EBP + -0xc],ECX
004dda3f  JMP 0x004ddae4
004dda44  CMP dword ptr [EBP + -0x14],0x4
004dda48  JNZ 0x004dda58
004dda4a  MOV EDX,dword ptr [0x00790750]
004dda50  MOV dword ptr [EBP + -0xc],EDX
004dda53  JMP 0x004ddae4
004dda58  CMP dword ptr [EBP + -0x14],0x5
004dda5c  JNZ 0x004dda68
004dda5e  MOV EAX,[0x0079079c]
004dda63  MOV dword ptr [EBP + -0xc],EAX
004dda66  JMP 0x004ddae4
004dda68  CMP dword ptr [EBP + -0x14],0x6
004dda6c  JNZ 0x004dda79
004dda6e  MOV ECX,dword ptr [0x00790760]
004dda74  MOV dword ptr [EBP + -0xc],ECX
004dda77  JMP 0x004ddae4
004dda79  CMP dword ptr [EBP + -0x14],0x7
004dda7d  JNZ 0x004dda8a
004dda7f  MOV EDX,dword ptr [0x00790798]
004dda85  MOV dword ptr [EBP + -0xc],EDX
004dda88  JMP 0x004ddae4
004dda8a  CMP dword ptr [EBP + -0x14],0x8
004dda8e  JNZ 0x004ddaa3
004dda90  MOV EAX,[0x0079077c]
004dda95  MOV dword ptr [EBP + -0xc],EAX
004dda98  MOV ECX,dword ptr [0x00790780]
004dda9e  MOV dword ptr [EBP + -0x8],ECX
004ddaa1  JMP 0x004ddae4
004ddaa3  CMP dword ptr [EBP + -0x14],0x9
004ddaa7  JNZ 0x004ddab4
004ddaa9  MOV EDX,dword ptr [0x00790788]
004ddaaf  MOV dword ptr [EBP + -0xc],EDX
004ddab2  JMP 0x004ddae4
004ddab4  CMP dword ptr [EBP + -0x14],0xa
004ddab8  JNZ 0x004ddac4
004ddaba  MOV EAX,[0x00790774]
004ddabf  MOV dword ptr [EBP + -0xc],EAX
004ddac2  JMP 0x004ddae4
004ddac4  CMP dword ptr [EBP + -0x14],0xb
004ddac8  JNZ 0x004ddad5
004ddaca  MOV ECX,dword ptr [0x007907b0]
004ddad0  MOV dword ptr [EBP + -0xc],ECX
004ddad3  JMP 0x004ddae4
004ddad5  CMP dword ptr [EBP + -0x14],0xc
004ddad9  JNZ 0x004ddae4
004ddadb  MOV EDX,dword ptr [0x007907a8]
004ddae1  MOV dword ptr [EBP + -0xc],EDX
004ddae4  MOV EAX,dword ptr [EBP + -0x8]
004ddae7  PUSH EAX
004ddae8  MOV ECX,dword ptr [EBP + -0xc]
004ddaeb  PUSH ECX
004ddaec  MOV ECX,dword ptr [EBP + 0x8]
004ddaef  CALL 0x00464130
004ddaf4  MOV EDX,dword ptr [EBP + -0x18]
004ddaf7  OR EDX,0x1
004ddafa  MOV dword ptr [EBP + -0x18],EDX
004ddafd  MOV EAX,dword ptr [EBP + 0x8]
004ddb00  MOV ESP,EBP
004ddb02  POP EBP
004ddb03  RET 0x8
