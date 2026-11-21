; FUN_00611ae0  00611ae0
00611ae0  PUSH EBP
00611ae1  MOV EBP,ESP
00611ae3  SUB ESP,0x30
00611ae6  MOV dword ptr [EBP + -0x28],ECX
00611ae9  MOV EAX,dword ptr [EBP + -0x28]
00611aec  CMP dword ptr [EAX + 0x4],0x0
00611af0  JNZ 0x00611afb
00611af2  MOV dword ptr [EBP + -0x2c],0x0
00611af9  JMP 0x00611b12
00611afb  MOV ECX,dword ptr [EBP + -0x28]
00611afe  MOV EDX,dword ptr [EBP + -0x28]
00611b01  MOV EAX,dword ptr [ECX + 0x8]
00611b04  SUB EAX,dword ptr [EDX + 0x4]
00611b07  CDQ
00611b08  MOV ECX,0x48
00611b0d  IDIV ECX
00611b0f  MOV dword ptr [EBP + -0x2c],EAX
00611b12  CMP dword ptr [EBP + -0x2c],0x0
00611b16  JNZ 0x00611b21
00611b18  MOV dword ptr [EBP + -0x30],0x0
00611b1f  JMP 0x00611b84
00611b21  MOV EDX,dword ptr [EBP + -0x28]
00611b24  MOV EAX,dword ptr [EDX + 0x4]
00611b27  MOV dword ptr [EBP + -0x18],EAX
00611b2a  MOV dword ptr [EBP + -0xc],0x0
00611b31  CMP dword ptr [EBP + -0x28],0x0
00611b35  JZ 0x00611b4d
00611b37  MOV ECX,dword ptr [EBP + -0x28]
00611b3a  MOV EDX,dword ptr [ECX + 0x4]
00611b3d  CMP EDX,dword ptr [EBP + -0x18]
00611b40  JA 0x00611b4d
00611b42  MOV EAX,dword ptr [EBP + -0x28]
00611b45  MOV ECX,dword ptr [EBP + -0x18]
00611b48  CMP ECX,dword ptr [EAX + 0x8]
00611b4b  JBE 0x00611b53
00611b4d  CALL dword ptr [0x006b2274]
00611b53  MOV EDX,dword ptr [EBP + -0x28]
00611b56  MOV dword ptr [EBP + -0xc],EDX
00611b59  MOV EAX,dword ptr [EBP + -0x18]
00611b5c  MOV dword ptr [EBP + -0x8],EAX
00611b5f  CMP dword ptr [EBP + 0xc],0x0
00611b63  JZ 0x00611b6d
00611b65  MOV ECX,dword ptr [EBP + 0xc]
00611b68  CMP ECX,dword ptr [EBP + -0xc]
00611b6b  JZ 0x00611b73
00611b6d  CALL dword ptr [0x006b2274]
00611b73  MOV EAX,dword ptr [EBP + 0x10]
00611b76  SUB EAX,dword ptr [EBP + -0x8]
00611b79  CDQ
00611b7a  MOV ECX,0x48
00611b7f  IDIV ECX
00611b81  MOV dword ptr [EBP + -0x30],EAX
00611b84  MOV EDX,dword ptr [EBP + -0x30]
00611b87  MOV dword ptr [EBP + -0x4],EDX
00611b8a  MOV EAX,dword ptr [EBP + 0x14]
00611b8d  PUSH EAX
00611b8e  PUSH 0x1
00611b90  MOV ECX,dword ptr [EBP + 0x10]
00611b93  PUSH ECX
00611b94  MOV EDX,dword ptr [EBP + 0xc]
00611b97  PUSH EDX
00611b98  MOV ECX,dword ptr [EBP + -0x28]
00611b9b  CALL 0x00611ca0
00611ba0  MOV EAX,dword ptr [EBP + -0x28]
00611ba3  MOV ECX,dword ptr [EAX + 0x4]
00611ba6  MOV dword ptr [EBP + -0x1c],ECX
00611ba9  MOV dword ptr [EBP + -0x14],0x0
00611bb0  CMP dword ptr [EBP + -0x28],0x0
00611bb4  JZ 0x00611bcc
00611bb6  MOV EDX,dword ptr [EBP + -0x28]
00611bb9  MOV EAX,dword ptr [EDX + 0x4]
00611bbc  CMP EAX,dword ptr [EBP + -0x1c]
00611bbf  JA 0x00611bcc
00611bc1  MOV ECX,dword ptr [EBP + -0x28]
00611bc4  MOV EDX,dword ptr [EBP + -0x1c]
00611bc7  CMP EDX,dword ptr [ECX + 0x8]
00611bca  JBE 0x00611bd2
00611bcc  CALL dword ptr [0x006b2274]
00611bd2  MOV EAX,dword ptr [EBP + -0x28]
00611bd5  MOV dword ptr [EBP + -0x14],EAX
00611bd8  MOV ECX,dword ptr [EBP + -0x1c]
00611bdb  MOV dword ptr [EBP + -0x10],ECX
00611bde  MOV EDX,dword ptr [EBP + -0x14]
00611be1  MOV EAX,dword ptr [EBP + -0x10]
00611be4  MOV dword ptr [EBP + -0x24],EDX
00611be7  MOV dword ptr [EBP + -0x20],EAX
00611bea  MOV ECX,dword ptr [EBP + -0x4]
00611bed  PUSH ECX
00611bee  LEA ECX,[EBP + -0x24]
00611bf1  CALL 0x00612780
00611bf6  MOV EDX,dword ptr [EBP + -0x24]
00611bf9  MOV EAX,dword ptr [EBP + -0x20]
00611bfc  MOV ECX,dword ptr [EBP + 0x8]
00611bff  MOV dword ptr [ECX],EDX
00611c01  MOV dword ptr [ECX + 0x4],EAX
00611c04  MOV EAX,dword ptr [EBP + 0x8]
00611c07  MOV ESP,EBP
00611c09  POP EBP
00611c0a  RET 0x10
