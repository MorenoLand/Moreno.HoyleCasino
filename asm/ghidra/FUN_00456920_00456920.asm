; FUN_00456920  00456920
00456920  PUSH EBP
00456921  MOV EBP,ESP
00456923  SUB ESP,0x2c
00456926  MOV dword ptr [EBP + -0x2c],ECX
00456929  MOV dword ptr [EBP + -0x1c],0x0
00456930  MOV dword ptr [EBP + -0x8],0x0
00456937  MOV dword ptr [EBP + -0x28],0xffffffff
0045693e  MOV dword ptr [EBP + -0x4],0xffffffff
00456945  MOV dword ptr [EBP + -0x10],0x0
0045694c  MOV dword ptr [EBP + -0x14],0x0
00456953  MOV dword ptr [EBP + -0x24],0xffffffff
0045695a  MOV dword ptr [EBP + -0x18],0xffffffff
00456961  MOV dword ptr [EBP + -0xc],0x0
00456968  JMP 0x00456973
0045696a  MOV EAX,dword ptr [EBP + -0xc]
0045696d  ADD EAX,0x1
00456970  MOV dword ptr [EBP + -0xc],EAX
00456973  CMP dword ptr [EBP + -0xc],0x7
00456977  JGE 0x00456a36
0045697d  MOV ECX,dword ptr [EBP + -0xc]
00456980  MOV EDX,dword ptr [EBP + -0x2c]
00456983  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
00456988  PUSH EAX
00456989  MOV ECX,dword ptr [EBP + -0x2c]
0045698c  CALL 0x0044f680
00456991  PUSH EAX
00456992  MOV ECX,dword ptr [EBP + -0x2c]
00456995  CALL 0x0044f700
0045699a  CMP EAX,0x4
0045699d  JNZ 0x004569c7
0045699f  MOV ECX,dword ptr [EBP + -0xc]
004569a2  MOV EDX,dword ptr [EBP + -0x2c]
004569a5  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
004569aa  PUSH EAX
004569ab  MOV ECX,dword ptr [EBP + -0x2c]
004569ae  CALL 0x0044f680
004569b3  MOV dword ptr [EBP + -0x1c],EAX
004569b6  MOV ECX,dword ptr [EBP + -0xc]
004569b9  MOV dword ptr [EBP + -0x8],ECX
004569bc  MOV EDX,dword ptr [EBP + -0xc]
004569bf  ADD EDX,0x3
004569c2  MOV dword ptr [EBP + -0xc],EDX
004569c5  JMP 0x0045696a
004569c7  MOV EAX,dword ptr [EBP + -0xc]
004569ca  MOV ECX,dword ptr [EBP + -0x2c]
004569cd  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
004569d2  PUSH EDX
004569d3  MOV ECX,dword ptr [EBP + -0x2c]
004569d6  CALL 0x0044f680
004569db  PUSH EAX
004569dc  MOV ECX,dword ptr [EBP + -0x2c]
004569df  CALL 0x0044f700
004569e4  CMP EAX,0x1
004569e7  JNZ 0x00456a31
004569e9  CMP dword ptr [EBP + -0x28],-0x1
004569ed  JNZ 0x00456a0e
004569ef  MOV EAX,dword ptr [EBP + -0xc]
004569f2  MOV dword ptr [EBP + -0x28],EAX
004569f5  MOV ECX,dword ptr [EBP + -0xc]
004569f8  MOV EDX,dword ptr [EBP + -0x2c]
004569fb  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
00456a00  PUSH EAX
00456a01  MOV ECX,dword ptr [EBP + -0x2c]
00456a04  CALL 0x0044f680
00456a09  MOV dword ptr [EBP + -0x10],EAX
00456a0c  JMP 0x00456a31
00456a0e  CMP dword ptr [EBP + -0x4],-0x1
00456a12  JNZ 0x00456a31
00456a14  MOV ECX,dword ptr [EBP + -0xc]
00456a17  MOV dword ptr [EBP + -0x4],ECX
00456a1a  MOV EDX,dword ptr [EBP + -0xc]
00456a1d  MOV EAX,dword ptr [EBP + -0x2c]
00456a20  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
00456a25  PUSH ECX
00456a26  MOV ECX,dword ptr [EBP + -0x2c]
00456a29  CALL 0x0044f680
00456a2e  MOV dword ptr [EBP + -0x14],EAX
00456a31  JMP 0x0045696a
00456a36  CMP dword ptr [EBP + -0x1c],0x7
00456a3a  JL 0x00456ada
00456a40  CMP dword ptr [EBP + -0x1c],0xd
00456a44  JNZ 0x00456a56
00456a46  CMP dword ptr [EBP + -0x10],0xe
00456a4a  JNZ 0x00456a56
00456a4c  CMP dword ptr [EBP + -0x14],0xc
00456a50  JGE 0x00456ada
00456a56  CMP dword ptr [EBP + -0x1c],0xc
00456a5a  JNZ 0x00456a68
00456a5c  CMP dword ptr [EBP + -0x10],0xe
00456a60  JNZ 0x00456a68
00456a62  CMP dword ptr [EBP + -0x14],0xa
00456a66  JGE 0x00456ada
00456a68  CMP dword ptr [EBP + -0x1c],0xb
00456a6c  JNZ 0x00456a7a
00456a6e  CMP dword ptr [EBP + -0x10],0xe
00456a72  JNZ 0x00456a7a
00456a74  CMP dword ptr [EBP + -0x14],0x3
00456a78  JGE 0x00456ada
00456a7a  CMP dword ptr [EBP + -0x1c],0xa
00456a7e  JNZ 0x00456a92
00456a80  CMP dword ptr [EBP + -0x10],0xd
00456a84  JG 0x00456ada
00456a86  CMP dword ptr [EBP + -0x10],0xd
00456a8a  JNZ 0x00456a92
00456a8c  CMP dword ptr [EBP + -0x14],0xc
00456a90  JGE 0x00456ada
00456a92  CMP dword ptr [EBP + -0x1c],0x9
00456a96  JNZ 0x00456aaa
00456a98  CMP dword ptr [EBP + -0x10],0xd
00456a9c  JG 0x00456ada
00456a9e  CMP dword ptr [EBP + -0x10],0xd
00456aa2  JNZ 0x00456aaa
00456aa4  CMP dword ptr [EBP + -0x14],0x3
00456aa8  JGE 0x00456ada
00456aaa  CMP dword ptr [EBP + -0x1c],0x8
00456aae  JNZ 0x00456ac2
00456ab0  CMP dword ptr [EBP + -0x10],0xc
00456ab4  JG 0x00456ada
00456ab6  CMP dword ptr [EBP + -0x10],0xc
00456aba  JNZ 0x00456ac2
00456abc  CMP dword ptr [EBP + -0x14],0xb
00456ac0  JGE 0x00456ada
00456ac2  CMP dword ptr [EBP + -0x1c],0x7
00456ac6  JNZ 0x00456aee
00456ac8  CMP dword ptr [EBP + -0x10],0xc
00456acc  JGE 0x00456ada
00456ace  CMP dword ptr [EBP + -0x10],0xd
00456ad2  JNZ 0x00456aee
00456ad4  CMP dword ptr [EBP + -0x14],0x3
00456ad8  JL 0x00456aee
00456ada  MOV word ptr [EBP + -0x20],0x0
00456ae0  MOV EDX,dword ptr [EBP + -0x28]
00456ae3  MOV dword ptr [EBP + -0x24],EDX
00456ae6  MOV EAX,dword ptr [EBP + -0x4]
00456ae9  MOV dword ptr [EBP + -0x18],EAX
00456aec  JMP 0x00456b03
00456aee  MOV word ptr [EBP + -0x20],0x1
00456af4  MOV ECX,dword ptr [EBP + -0x8]
00456af7  MOV dword ptr [EBP + -0x24],ECX
00456afa  MOV EDX,dword ptr [EBP + -0x8]
00456afd  ADD EDX,0x1
00456b00  MOV dword ptr [EBP + -0x18],EDX
00456b03  MOV EAX,dword ptr [EBP + 0xc]
00456b06  PUSH EAX
00456b07  MOV ECX,dword ptr [EBP + 0x8]
00456b0a  PUSH ECX
00456b0b  MOV EDX,dword ptr [EBP + -0x18]
00456b0e  PUSH EDX
00456b0f  MOV EAX,dword ptr [EBP + -0x24]
00456b12  PUSH EAX
00456b13  MOV ECX,dword ptr [EBP + -0x2c]
00456b16  CALL 0x0044f840
00456b1b  MOV AX,word ptr [EBP + -0x20]
00456b1f  MOV ESP,EBP
00456b21  POP EBP
00456b22  RET 0x8
