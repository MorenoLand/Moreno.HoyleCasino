; FUN_004c79f0  004c79f0
004c79f0  PUSH EBP
004c79f1  MOV EBP,ESP
004c79f3  SUB ESP,0x18
004c79f6  PUSH ESI
004c79f7  MOV dword ptr [EBP + -0x18],ECX
004c79fa  CMP dword ptr [EBP + 0x8],0x0
004c79fe  JG 0x004c7a17
004c7a00  PUSH 0x3bf
004c7a05  PUSH 0x6bf384
004c7a0a  PUSH 0x6bf438
004c7a0f  CALL 0x005e9f20
004c7a14  ADD ESP,0xc
004c7a17  CMP dword ptr [EBP + 0xc],0x0
004c7a1b  JG 0x004c7a34
004c7a1d  PUSH 0x3c0
004c7a22  PUSH 0x6bf384
004c7a27  PUSH 0x6bf42c
004c7a2c  CALL 0x005e9f20
004c7a31  ADD ESP,0xc
004c7a34  MOV EDX,dword ptr [EBP + 0x8]
004c7a37  CMP EDX,dword ptr [EBP + 0xc]
004c7a3a  JL 0x004c7a53
004c7a3c  PUSH 0x3c1
004c7a41  PUSH 0x6bf384
004c7a46  PUSH 0x6bf420
004c7a4b  CALL 0x005e9f20
004c7a50  ADD ESP,0xc
004c7a53  MOV EAX,dword ptr [EBP + 0xc]
004c7a56  SHL EAX,0x2
004c7a59  CDQ
004c7a5a  MOV ECX,0xa
004c7a5f  IDIV ECX
004c7a61  MOV dword ptr [EBP + -0x8],EAX
004c7a64  MOV EDX,dword ptr [EBP + 0x8]
004c7a67  CMP EDX,dword ptr [EBP + -0x8]
004c7a6a  JL 0x004c7a83
004c7a6c  PUSH 0x3c3
004c7a71  PUSH 0x6bf384
004c7a76  PUSH 0x6bf410
004c7a7b  CALL 0x005e9f20
004c7a80  ADD ESP,0xc
004c7a83  MOV ECX,dword ptr [EBP + -0x18]
004c7a86  MOVSX EDX,word ptr [ECX + 0x98]
004c7a8d  TEST EDX,EDX
004c7a8f  JG 0x004c7aa8
004c7a91  PUSH 0x3c5
004c7a96  PUSH 0x6bf384
004c7a9b  PUSH 0x6bf3ec
004c7aa0  CALL 0x005e9f20
004c7aa5  ADD ESP,0xc
004c7aa8  MOV ECX,dword ptr [EBP + -0x18]
004c7aab  MOVSX EDX,word ptr [ECX + 0x98]
004c7ab2  CMP EDX,0x4
004c7ab5  JLE 0x004c7ace
004c7ab7  PUSH 0x3c6
004c7abc  PUSH 0x6bf384
004c7ac1  PUSH 0x6bf3c4
004c7ac6  CALL 0x005e9f20
004c7acb  ADD ESP,0xc
004c7ace  MOV ECX,dword ptr [EBP + -0x18]
004c7ad1  MOVSX EDX,word ptr [ECX + 0x98]
004c7ad8  CMP EDX,0x4
004c7adb  JNZ 0x004c7ae5
004c7add  MOV EAX,dword ptr [EBP + 0xc]
004c7ae0  JMP 0x004c7c38
004c7ae5  PUSH 0x64
004c7ae7  CALL 0x0062fbf0
004c7aec  ADD ESP,0x4
004c7aef  MOV dword ptr [EBP + -0x4],EAX
004c7af2  MOV EAX,dword ptr [EBP + -0x18]
004c7af5  MOVSX ECX,word ptr [EAX + 0x98]
004c7afc  MOV EDX,dword ptr [EBP + -0x18]
004c7aff  MOVSX EAX,word ptr [EDX + ECX*0x2 + 0x98]
004c7b07  CMP dword ptr [EBP + -0x4],EAX
004c7b0a  JGE 0x004c7b14
004c7b0c  MOV EAX,dword ptr [EBP + 0x8]
004c7b0f  JMP 0x004c7c38
004c7b14  MOV ECX,dword ptr [EBP + -0x18]
004c7b17  MOVSX EDX,word ptr [ECX + 0x98]
004c7b1e  MOV EAX,dword ptr [EBP + -0x18]
004c7b21  MOVSX ECX,word ptr [EAX + EDX*0x2 + 0x98]
004c7b29  MOV EDX,dword ptr [EBP + -0x4]
004c7b2c  SUB EDX,ECX
004c7b2e  MOV dword ptr [EBP + -0x4],EDX
004c7b31  MOV EAX,dword ptr [EBP + -0x18]
004c7b34  MOVSX ECX,word ptr [EAX + 0x98]
004c7b3b  MOV EDX,dword ptr [EBP + -0x18]
004c7b3e  MOVSX EAX,word ptr [EDX + ECX*0x2 + 0x9e]
004c7b46  CMP dword ptr [EBP + -0x4],EAX
004c7b49  JGE 0x004c7b6f
004c7b4b  MOV EAX,dword ptr [EBP + -0x8]
004c7b4e  CDQ
004c7b4f  IDIV dword ptr [EBP + 0x8]
004c7b52  MOV word ptr [EBP + -0xc],AX
004c7b56  MOVSX ECX,word ptr [EBP + -0xc]
004c7b5a  PUSH ECX
004c7b5b  CALL 0x0062fbf0
004c7b60  ADD ESP,0x4
004c7b63  ADD EAX,0x1
004c7b66  IMUL EAX,dword ptr [EBP + 0x8]
004c7b6a  JMP 0x004c7c38
004c7b6f  MOV EDX,dword ptr [EBP + -0x18]
004c7b72  MOVSX EAX,word ptr [EDX + 0x98]
004c7b79  MOV ECX,dword ptr [EBP + -0x18]
004c7b7c  MOVSX EDX,word ptr [ECX + EAX*0x2 + 0x9e]
004c7b84  MOV EAX,dword ptr [EBP + -0x4]
004c7b87  SUB EAX,EDX
004c7b89  MOV dword ptr [EBP + -0x4],EAX
004c7b8c  MOV ECX,dword ptr [EBP + -0x18]
004c7b8f  MOVSX EDX,word ptr [ECX + 0x98]
004c7b96  MOV EAX,dword ptr [EBP + -0x18]
004c7b99  MOVSX ECX,word ptr [EAX + EDX*0x2 + 0xa4]
004c7ba1  CMP dword ptr [EBP + -0x4],ECX
004c7ba4  JGE 0x004c7bd7
004c7ba6  MOV EAX,dword ptr [EBP + -0x8]
004c7ba9  CDQ
004c7baa  IDIV dword ptr [EBP + 0x8]
004c7bad  MOV word ptr [EBP + -0x10],AX
004c7bb1  MOVSX EDX,word ptr [EBP + -0x10]
004c7bb5  PUSH EDX
004c7bb6  CALL 0x0062fbf0
004c7bbb  ADD ESP,0x4
004c7bbe  MOV ESI,EAX
004c7bc0  MOVSX EAX,word ptr [EBP + -0x10]
004c7bc4  PUSH EAX
004c7bc5  CALL 0x0062fbf0
004c7bca  ADD ESP,0x4
004c7bcd  LEA EAX,[ESI + EAX*0x1 + 0x2]
004c7bd1  IMUL EAX,dword ptr [EBP + 0x8]
004c7bd5  JMP 0x004c7c38
004c7bd7  MOV ECX,dword ptr [EBP + -0x18]
004c7bda  MOVSX EDX,word ptr [ECX + 0x98]
004c7be1  MOV EAX,dword ptr [EBP + -0x18]
004c7be4  MOVSX ECX,word ptr [EAX + EDX*0x2 + 0xa4]
004c7bec  MOV EDX,dword ptr [EBP + -0x4]
004c7bef  SUB EDX,ECX
004c7bf1  MOV dword ptr [EBP + -0x4],EDX
004c7bf4  MOV EAX,dword ptr [EBP + -0x18]
004c7bf7  MOVSX ECX,word ptr [EAX + 0x98]
004c7bfe  MOV EDX,dword ptr [EBP + -0x18]
004c7c01  MOVSX EAX,word ptr [EDX + ECX*0x2 + 0xaa]
004c7c09  CMP dword ptr [EBP + -0x4],EAX
004c7c0c  JGE 0x004c7c35
004c7c0e  MOV EAX,dword ptr [EBP + 0xc]
004c7c11  SUB EAX,dword ptr [EBP + -0x8]
004c7c14  CDQ
004c7c15  IDIV dword ptr [EBP + 0x8]
004c7c18  MOV word ptr [EBP + -0x14],AX
004c7c1c  MOVSX ECX,word ptr [EBP + -0x14]
004c7c20  PUSH ECX
004c7c21  CALL 0x0062fbf0
004c7c26  ADD ESP,0x4
004c7c29  ADD EAX,0x1
004c7c2c  IMUL EAX,dword ptr [EBP + 0x8]
004c7c30  ADD EAX,dword ptr [EBP + -0x8]
004c7c33  JMP 0x004c7c38
004c7c35  MOV EAX,dword ptr [EBP + 0xc]
004c7c38  POP ESI
004c7c39  MOV ESP,EBP
004c7c3b  POP EBP
004c7c3c  RET 0x8
