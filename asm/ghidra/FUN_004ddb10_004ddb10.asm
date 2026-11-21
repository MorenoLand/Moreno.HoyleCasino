; FUN_004ddb10  004ddb10
004ddb10  PUSH EBP
004ddb11  MOV EBP,ESP
004ddb13  SUB ESP,0x1c
004ddb16  MOV dword ptr [EBP + -0x1c],ECX
004ddb19  MOV dword ptr [EBP + -0x18],0x0
004ddb20  MOV ECX,dword ptr [EBP + 0xc]
004ddb23  CALL 0x00463e50
004ddb28  MOV dword ptr [EBP + -0x10],EAX
004ddb2b  CMP dword ptr [EBP + -0x10],0x0
004ddb2f  JL 0x004ddb37
004ddb31  CMP dword ptr [EBP + -0x10],0x34
004ddb35  JL 0x004ddb52
004ddb37  XOR EAX,EAX
004ddb39  JNZ 0x004ddb52
004ddb3b  PUSH 0x1ca1
004ddb40  PUSH 0x6bf384
004ddb45  PUSH 0x6b2b64
004ddb4a  CALL 0x005e9f20
004ddb4f  ADD ESP,0xc
004ddb52  MOV EAX,dword ptr [EBP + -0x10]
004ddb55  CDQ
004ddb56  MOV ECX,0xd
004ddb5b  IDIV ECX
004ddb5d  MOV dword ptr [EBP + -0x4],EAX
004ddb60  MOV EAX,dword ptr [EBP + -0x10]
004ddb63  CDQ
004ddb64  MOV ECX,0xd
004ddb69  IDIV ECX
004ddb6b  MOV dword ptr [EBP + -0x14],EDX
004ddb6e  MOV dword ptr [EBP + -0x8],0x0
004ddb75  CMP dword ptr [EBP + -0x4],0x0
004ddb79  JNZ 0x004ddb86
004ddb7b  MOV EDX,dword ptr [0x0079076c]
004ddb81  MOV dword ptr [EBP + -0x8],EDX
004ddb84  JMP 0x004ddbb6
004ddb86  CMP dword ptr [EBP + -0x4],0x1
004ddb8a  JNZ 0x004ddb96
004ddb8c  MOV EAX,[0x00790770]
004ddb91  MOV dword ptr [EBP + -0x8],EAX
004ddb94  JMP 0x004ddbb6
004ddb96  CMP dword ptr [EBP + -0x4],0x2
004ddb9a  JNZ 0x004ddba7
004ddb9c  MOV ECX,dword ptr [0x00790764]
004ddba2  MOV dword ptr [EBP + -0x8],ECX
004ddba5  JMP 0x004ddbb6
004ddba7  CMP dword ptr [EBP + -0x4],0x3
004ddbab  JNZ 0x004ddbb6
004ddbad  MOV EDX,dword ptr [0x00790754]
004ddbb3  MOV dword ptr [EBP + -0x8],EDX
004ddbb6  MOV dword ptr [EBP + -0xc],0x0
004ddbbd  CMP dword ptr [EBP + -0x14],0x0
004ddbc1  JNZ 0x004ddbd0
004ddbc3  MOV EAX,[0x007907a4]
004ddbc8  MOV dword ptr [EBP + -0xc],EAX
004ddbcb  JMP 0x004ddcc6
004ddbd0  CMP dword ptr [EBP + -0x14],0x1
004ddbd4  JNZ 0x004ddbe4
004ddbd6  MOV ECX,dword ptr [0x00790758]
004ddbdc  MOV dword ptr [EBP + -0xc],ECX
004ddbdf  JMP 0x004ddcc6
004ddbe4  CMP dword ptr [EBP + -0x14],0x2
004ddbe8  JNZ 0x004ddbf8
004ddbea  MOV EDX,dword ptr [0x00790768]
004ddbf0  MOV dword ptr [EBP + -0xc],EDX
004ddbf3  JMP 0x004ddcc6
004ddbf8  CMP dword ptr [EBP + -0x14],0x3
004ddbfc  JNZ 0x004ddc0b
004ddbfe  MOV EAX,[0x00790790]
004ddc03  MOV dword ptr [EBP + -0xc],EAX
004ddc06  JMP 0x004ddcc6
004ddc0b  CMP dword ptr [EBP + -0x14],0x4
004ddc0f  JNZ 0x004ddc1f
004ddc11  MOV ECX,dword ptr [0x00790750]
004ddc17  MOV dword ptr [EBP + -0xc],ECX
004ddc1a  JMP 0x004ddcc6
004ddc1f  CMP dword ptr [EBP + -0x14],0x5
004ddc23  JNZ 0x004ddc33
004ddc25  MOV EDX,dword ptr [0x0079079c]
004ddc2b  MOV dword ptr [EBP + -0xc],EDX
004ddc2e  JMP 0x004ddcc6
004ddc33  CMP dword ptr [EBP + -0x14],0x6
004ddc37  JNZ 0x004ddc46
004ddc39  MOV EAX,[0x00790760]
004ddc3e  MOV dword ptr [EBP + -0xc],EAX
004ddc41  JMP 0x004ddcc6
004ddc46  CMP dword ptr [EBP + -0x14],0x7
004ddc4a  JNZ 0x004ddc57
004ddc4c  MOV ECX,dword ptr [0x00790798]
004ddc52  MOV dword ptr [EBP + -0xc],ECX
004ddc55  JMP 0x004ddcc6
004ddc57  CMP dword ptr [EBP + -0x14],0x8
004ddc5b  JNZ 0x004ddc68
004ddc5d  MOV EDX,dword ptr [0x00790794]
004ddc63  MOV dword ptr [EBP + -0xc],EDX
004ddc66  JMP 0x004ddcc6
004ddc68  CMP dword ptr [EBP + -0x14],0x9
004ddc6c  JNZ 0x004ddc78
004ddc6e  MOV EAX,[0x00790788]
004ddc73  MOV dword ptr [EBP + -0xc],EAX
004ddc76  JMP 0x004ddcc6
004ddc78  CMP dword ptr [EBP + -0x14],0xa
004ddc7c  JNZ 0x004ddc89
004ddc7e  MOV ECX,dword ptr [0x00790774]
004ddc84  MOV dword ptr [EBP + -0xc],ECX
004ddc87  JMP 0x004ddcc6
004ddc89  CMP dword ptr [EBP + -0x14],0xb
004ddc8d  JNZ 0x004ddcb8
004ddc8f  MOV EDX,dword ptr [EBP + -0x8]
004ddc92  CMP EDX,dword ptr [0x0079076c]
004ddc98  JNZ 0x004ddcad
004ddc9a  MOV EAX,[0x00790780]
004ddc9f  MOV dword ptr [EBP + -0x8],EAX
004ddca2  MOV ECX,dword ptr [0x0079077c]
004ddca8  MOV dword ptr [EBP + -0xc],ECX
004ddcab  JMP 0x004ddcb6
004ddcad  MOV EDX,dword ptr [0x007907b0]
004ddcb3  MOV dword ptr [EBP + -0xc],EDX
004ddcb6  JMP 0x004ddcc6
004ddcb8  CMP dword ptr [EBP + -0x14],0xc
004ddcbc  JNZ 0x004ddcc6
004ddcbe  MOV EAX,[0x007907a8]
004ddcc3  MOV dword ptr [EBP + -0xc],EAX
004ddcc6  MOV ECX,dword ptr [EBP + -0x8]
004ddcc9  PUSH ECX
004ddcca  MOV EDX,dword ptr [EBP + -0xc]
004ddccd  PUSH EDX
004ddcce  MOV ECX,dword ptr [EBP + 0x8]
004ddcd1  CALL 0x00464130
004ddcd6  MOV EAX,dword ptr [EBP + -0x18]
004ddcd9  OR EAX,0x1
004ddcdc  MOV dword ptr [EBP + -0x18],EAX
004ddcdf  MOV EAX,dword ptr [EBP + 0x8]
004ddce2  MOV ESP,EBP
004ddce4  POP EBP
004ddce5  RET 0x8
