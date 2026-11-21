; FUN_005b59a0  005b59a0
005b59a0  PUSH EBP
005b59a1  MOV EBP,ESP
005b59a3  SUB ESP,0x18
005b59a6  MOV dword ptr [EBP + -0x14],ECX
005b59a9  MOV dword ptr [EBP + -0xc],0x0
005b59b0  MOV EAX,dword ptr [EBP + 0xc]
005b59b3  MOV dword ptr [EBP + -0x18],EAX
005b59b6  MOV ECX,dword ptr [EBP + -0x18]
005b59b9  SUB ECX,0x13b3
005b59bf  MOV dword ptr [EBP + -0x18],ECX
005b59c2  CMP dword ptr [EBP + -0x18],0x5
005b59c6  JA 0x005b5bc5
005b59cc  MOV EDX,dword ptr [EBP + -0x18]
005b59cf  JMP dword ptr [EDX*0x4 + 0x5b5c14]
005b59d6  CMP dword ptr [EBP + 0x10],0x11
005b59da  JL 0x005b59e5
005b59dc  MOV dword ptr [EBP + -0xc],0x0
005b59e3  JMP 0x005b5a2d
005b59e5  CMP dword ptr [EBP + 0x10],0x10
005b59e9  JNZ 0x005b59f4
005b59eb  MOV dword ptr [EBP + -0xc],0x1
005b59f2  JMP 0x005b5a2d
005b59f4  CMP dword ptr [EBP + 0x10],0xf
005b59f8  JNZ 0x005b5a03
005b59fa  MOV dword ptr [EBP + -0xc],0x2
005b5a01  JMP 0x005b5a2d
005b5a03  CMP dword ptr [EBP + 0x10],0xe
005b5a07  JNZ 0x005b5a12
005b5a09  MOV dword ptr [EBP + -0xc],0x3
005b5a10  JMP 0x005b5a2d
005b5a12  XOR EAX,EAX
005b5a14  JNZ 0x005b5a2d
005b5a16  PUSH 0x4ba
005b5a1b  PUSH 0x6d0b5c
005b5a20  PUSH 0x6b2f58
005b5a25  CALL 0x005e9f20
005b5a2a  ADD ESP,0xc
005b5a2d  JMP 0x005b5be0
005b5a32  CMP dword ptr [EBP + 0x10],0x13
005b5a36  JL 0x005b5a41
005b5a38  MOV dword ptr [EBP + -0xc],0x0
005b5a3f  JMP 0x005b5a89
005b5a41  CMP dword ptr [EBP + 0x10],0x11
005b5a45  JL 0x005b5a50
005b5a47  MOV dword ptr [EBP + -0xc],0x1
005b5a4e  JMP 0x005b5a89
005b5a50  CMP dword ptr [EBP + 0x10],0xf
005b5a54  JL 0x005b5a5f
005b5a56  MOV dword ptr [EBP + -0xc],0x2
005b5a5d  JMP 0x005b5a89
005b5a5f  CMP dword ptr [EBP + 0x10],0xd
005b5a63  JL 0x005b5a6e
005b5a65  MOV dword ptr [EBP + -0xc],0x3
005b5a6c  JMP 0x005b5a89
005b5a6e  XOR EDX,EDX
005b5a70  JNZ 0x005b5a89
005b5a72  PUSH 0x4d0
005b5a77  PUSH 0x6d0b5c
005b5a7c  PUSH 0x6b2f58
005b5a81  CALL 0x005e9f20
005b5a86  ADD ESP,0xc
005b5a89  JMP 0x005b5be0
005b5a8e  CMP dword ptr [EBP + 0x10],0xc
005b5a92  JNZ 0x005b5a9d
005b5a94  MOV dword ptr [EBP + -0xc],0x0
005b5a9b  JMP 0x005b5af4
005b5a9d  CMP dword ptr [EBP + 0x10],0xb
005b5aa1  JNZ 0x005b5aac
005b5aa3  MOV dword ptr [EBP + -0xc],0x1
005b5aaa  JMP 0x005b5af4
005b5aac  CMP dword ptr [EBP + 0x10],0xa
005b5ab0  JNZ 0x005b5abb
005b5ab2  MOV dword ptr [EBP + -0xc],0x2
005b5ab9  JMP 0x005b5af4
005b5abb  CMP dword ptr [EBP + 0x10],0x9
005b5abf  JNZ 0x005b5aca
005b5ac1  MOV dword ptr [EBP + -0xc],0x3
005b5ac8  JMP 0x005b5af4
005b5aca  CMP dword ptr [EBP + 0x10],0x8
005b5ace  JNZ 0x005b5ad9
005b5ad0  MOV dword ptr [EBP + -0xc],0x4
005b5ad7  JMP 0x005b5af4
005b5ad9  XOR ECX,ECX
005b5adb  JNZ 0x005b5af4
005b5add  PUSH 0x4ea
005b5ae2  PUSH 0x6d0b5c
005b5ae7  PUSH 0x6b2f58
005b5aec  CALL 0x005e9f20
005b5af1  ADD ESP,0xc
005b5af4  JMP 0x005b5be0
005b5af9  CMP dword ptr [EBP + 0x10],0xc
005b5afd  JNZ 0x005b5b08
005b5aff  MOV dword ptr [EBP + -0xc],0x0
005b5b06  JMP 0x005b5b1d
005b5b08  MOV EAX,dword ptr [EBP + 0x10]
005b5b0b  CDQ
005b5b0c  SUB EAX,EDX
005b5b0e  SAR EAX,0x1
005b5b10  MOV ECX,0xa
005b5b15  SUB ECX,EAX
005b5b17  ADD ECX,0x1
005b5b1a  MOV dword ptr [EBP + -0xc],ECX
005b5b1d  JMP 0x005b5be0
005b5b22  CMP dword ptr [EBP + 0x10],0x13
005b5b26  JL 0x005b5b31
005b5b28  MOV dword ptr [EBP + -0xc],0x0
005b5b2f  JMP 0x005b5b6a
005b5b31  CMP dword ptr [EBP + 0x10],0x12
005b5b35  JNZ 0x005b5b40
005b5b37  MOV dword ptr [EBP + -0xc],0x1
005b5b3e  JMP 0x005b5b6a
005b5b40  CMP dword ptr [EBP + 0x10],0xc
005b5b44  JL 0x005b5b4f
005b5b46  MOV dword ptr [EBP + -0xc],0x2
005b5b4d  JMP 0x005b5b6a
005b5b4f  XOR EDX,EDX
005b5b51  JNZ 0x005b5b6a
005b5b53  PUSH 0x506
005b5b58  PUSH 0x6d0b5c
005b5b5d  PUSH 0x6b2f58
005b5b62  CALL 0x005e9f20
005b5b67  ADD ESP,0xc
005b5b6a  JMP 0x005b5be0
005b5b6c  CMP dword ptr [EBP + 0x10],0x11
005b5b70  JL 0x005b5b7b
005b5b72  MOV dword ptr [EBP + -0xc],0x0
005b5b79  JMP 0x005b5bc3
005b5b7b  CMP dword ptr [EBP + 0x10],0xd
005b5b7f  JL 0x005b5b8a
005b5b81  MOV dword ptr [EBP + -0xc],0x1
005b5b88  JMP 0x005b5bc3
005b5b8a  CMP dword ptr [EBP + 0x10],0xc
005b5b8e  JNZ 0x005b5b99
005b5b90  MOV dword ptr [EBP + -0xc],0x2
005b5b97  JMP 0x005b5bc3
005b5b99  CMP dword ptr [EBP + 0x10],0x4
005b5b9d  JL 0x005b5ba8
005b5b9f  MOV dword ptr [EBP + -0xc],0x3
005b5ba6  JMP 0x005b5bc3
005b5ba8  XOR ECX,ECX
005b5baa  JNZ 0x005b5bc3
005b5bac  PUSH 0x51c
005b5bb1  PUSH 0x6d0b5c
005b5bb6  PUSH 0x6b2f58
005b5bbb  CALL 0x005e9f20
005b5bc0  ADD ESP,0xc
005b5bc3  JMP 0x005b5be0
005b5bc5  XOR EAX,EAX
005b5bc7  JNZ 0x005b5be0
005b5bc9  PUSH 0x520
005b5bce  PUSH 0x6d0b5c
005b5bd3  PUSH 0x6b2f58
005b5bd8  CALL 0x005e9f20
005b5bdd  ADD ESP,0xc
005b5be0  MOV EDX,dword ptr [EBP + 0x14]
005b5be3  SUB EDX,0x2
005b5be6  MOV dword ptr [EBP + -0x10],EDX
005b5be9  MOV EAX,dword ptr [EBP + -0x10]
005b5bec  IMUL EAX,EAX,0xe
005b5bef  MOV dword ptr [EBP + -0x8],EAX
005b5bf2  MOV ECX,dword ptr [EBP + -0xc]
005b5bf5  IMUL ECX,ECX,0x12
005b5bf8  MOV dword ptr [EBP + -0x4],ECX
005b5bfb  MOV EDX,dword ptr [EBP + 0x8]
005b5bfe  MOV EAX,dword ptr [EBP + -0x8]
005b5c01  MOV dword ptr [EDX],EAX
005b5c03  MOV ECX,dword ptr [EBP + -0x4]
005b5c06  MOV dword ptr [EDX + 0x4],ECX
005b5c09  MOV EAX,dword ptr [EBP + 0x8]
005b5c0c  MOV ESP,EBP
005b5c0e  POP EBP
005b5c0f  RET 0x10
