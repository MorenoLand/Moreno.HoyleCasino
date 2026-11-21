; FUN_005d8a20  005d8a20
005d8a20  PUSH EBP
005d8a21  MOV EBP,ESP
005d8a23  PUSH -0x1
005d8a25  PUSH 0x6a919a
005d8a2a  MOV EAX,FS:[0x0]
005d8a30  PUSH EAX
005d8a31  SUB ESP,0x38
005d8a34  MOV EAX,[0x00781870]
005d8a39  XOR EAX,EBP
005d8a3b  PUSH EAX
005d8a3c  LEA EAX,[EBP + -0xc]
005d8a3f  MOV FS:[0x0],EAX
005d8a45  MOV dword ptr [EBP + -0x30],ECX
005d8a48  MOVZX EAX,byte ptr [EBP + 0x8]
005d8a4c  TEST EAX,EAX
005d8a4e  JZ 0x005d8bef
005d8a54  CMP dword ptr [EBP + 0xc],-0x1
005d8a58  JNZ 0x005d8a71
005d8a5a  PUSH 0x1cb
005d8a5f  PUSH 0x6d43a4
005d8a64  PUSH 0x6b6c68
005d8a69  CALL 0x005e9f20
005d8a6e  ADD ESP,0xc
005d8a71  MOV EDX,dword ptr [EBP + -0x30]
005d8a74  CMP dword ptr [EDX + 0x6c],0x0
005d8a78  JNZ 0x005d8ac1
005d8a7a  PUSH 0x184
005d8a7f  CALL 0x00686d82
005d8a84  ADD ESP,0x4
005d8a87  MOV dword ptr [EBP + -0x14],EAX
005d8a8a  MOV dword ptr [EBP + -0x4],0x0
005d8a91  CMP dword ptr [EBP + -0x14],0x0
005d8a95  JZ 0x005d8aa4
005d8a97  MOV ECX,dword ptr [EBP + -0x14]
005d8a9a  CALL 0x005f5bf0
005d8a9f  MOV dword ptr [EBP + -0x34],EAX
005d8aa2  JMP 0x005d8aab
005d8aa4  MOV dword ptr [EBP + -0x34],0x0
005d8aab  MOV EAX,dword ptr [EBP + -0x34]
005d8aae  MOV dword ptr [EBP + -0x10],EAX
005d8ab1  MOV dword ptr [EBP + -0x4],0xffffffff
005d8ab8  MOV ECX,dword ptr [EBP + -0x30]
005d8abb  MOV EDX,dword ptr [EBP + -0x10]
005d8abe  MOV dword ptr [ECX + 0x6c],EDX
005d8ac1  MOV EAX,[0x0162ee84]
005d8ac6  MOV ECX,dword ptr [EAX + 0x58]
005d8ac9  MOV EDX,dword ptr [EBP + 0xc]
005d8acc  MOV EAX,dword ptr [ECX + EDX*0x4]
005d8acf  MOV ECX,dword ptr [EAX + 0x20]
005d8ad2  MOV dword ptr [EBP + -0x28],ECX
005d8ad5  MOV ECX,dword ptr [EBP + -0x28]
005d8ad8  CALL 0x00646f80
005d8add  MOV dword ptr [EBP + -0x38],EAX
005d8ae0  MOV EDX,dword ptr [0x0162ee84]
005d8ae6  MOV EAX,dword ptr [EDX + 0x58]
005d8ae9  MOV ECX,dword ptr [EBP + 0xc]
005d8aec  MOV EDX,dword ptr [EAX + ECX*0x4]
005d8aef  MOV EAX,dword ptr [EDX + 0x20]
005d8af2  MOV dword ptr [EBP + -0x2c],EAX
005d8af5  MOV ECX,dword ptr [EBP + -0x2c]
005d8af8  CALL 0x00646f80
005d8afd  MOV dword ptr [EBP + -0x3c],EAX
005d8b00  PUSH -0x1
005d8b02  PUSH 0x3e8
005d8b07  MOV ECX,dword ptr [EBP + -0x38]
005d8b0a  MOV EDX,dword ptr [ECX]
005d8b0c  MOV ECX,dword ptr [EBP + -0x38]
005d8b0f  MOV EAX,dword ptr [EDX + 0x54]
005d8b12  CALL EAX
005d8b14  SUB EAX,0x31
005d8b17  PUSH EAX
005d8b18  MOV ECX,dword ptr [EBP + -0x3c]
005d8b1b  MOV EDX,dword ptr [ECX]
005d8b1d  MOV ECX,dword ptr [EBP + -0x3c]
005d8b20  MOV EAX,dword ptr [EDX + 0x4c]
005d8b23  CALL EAX
005d8b25  SUB EAX,0x1e
005d8b28  PUSH EAX
005d8b29  PUSH 0x417
005d8b2e  MOV ECX,dword ptr [EBP + -0x30]
005d8b31  MOV ECX,dword ptr [ECX + 0x6c]
005d8b34  CALL 0x005eae80
005d8b39  MOV EDX,dword ptr [EBP + -0x30]
005d8b3c  MOV EAX,dword ptr [EDX + 0x6c]
005d8b3f  MOV ECX,dword ptr [EBP + -0x30]
005d8b42  MOV ECX,dword ptr [ECX + 0x6c]
005d8b45  MOV EDX,dword ptr [EAX]
005d8b47  MOV EAX,dword ptr [EDX + 0x74]
005d8b4a  CALL EAX
005d8b4c  MOV ECX,dword ptr [EBP + -0x30]
005d8b4f  MOV EDX,dword ptr [ECX + 0x6c]
005d8b52  MOV dword ptr [EDX + 0x178],0x6
005d8b5c  PUSH 0x1c
005d8b5e  CALL 0x00686d82
005d8b63  ADD ESP,0x4
005d8b66  MOV dword ptr [EBP + -0x1c],EAX
005d8b69  MOV dword ptr [EBP + -0x4],0x1
005d8b70  CMP dword ptr [EBP + -0x1c],0x0
005d8b74  JZ 0x005d8b85
005d8b76  PUSH 0x0
005d8b78  MOV ECX,dword ptr [EBP + -0x1c]
005d8b7b  CALL 0x00600a70
005d8b80  MOV dword ptr [EBP + -0x40],EAX
005d8b83  JMP 0x005d8b8c
005d8b85  MOV dword ptr [EBP + -0x40],0x0
005d8b8c  MOV EAX,dword ptr [EBP + -0x40]
005d8b8f  MOV dword ptr [EBP + -0x18],EAX
005d8b92  MOV dword ptr [EBP + -0x4],0xffffffff
005d8b99  MOV ECX,dword ptr [EBP + -0x18]
005d8b9c  PUSH ECX
005d8b9d  MOV EDX,dword ptr [EBP + -0x30]
005d8ba0  MOV ECX,dword ptr [EDX + 0x6c]
005d8ba3  CALL 0x005f5d50
005d8ba8  MOVZX EAX,byte ptr [EBP + 0x10]
005d8bac  TEST EAX,EAX
005d8bae  JZ 0x005d8bd8
005d8bb0  MOV ECX,dword ptr [EBP + -0x30]
005d8bb3  CALL 0x005da460
005d8bb8  MOV ECX,dword ptr [EBP + -0x30]
005d8bbb  CALL 0x005da830
005d8bc0  MOVZX ECX,AL
005d8bc3  TEST ECX,ECX
005d8bc5  JNZ 0x005d8bd6
005d8bc7  PUSH 0x1
005d8bc9  PUSH 0x1399
005d8bce  MOV ECX,dword ptr [EBP + -0x30]
005d8bd1  CALL 0x005f2b20
005d8bd6  JMP 0x005d8bed
005d8bd8  MOV ECX,dword ptr [EBP + -0x30]
005d8bdb  CALL 0x005da480
005d8be0  PUSH 0x1399
005d8be5  MOV ECX,dword ptr [EBP + -0x30]
005d8be8  CALL 0x005f2ba0
005d8bed  JMP 0x005d8c68
005d8bef  MOV EDX,dword ptr [EBP + -0x30]
005d8bf2  CMP dword ptr [EDX + 0x6c],0x0
005d8bf6  JZ 0x005d8c53
005d8bf8  MOV EAX,dword ptr [EBP + -0x30]
005d8bfb  MOV ECX,dword ptr [EAX + 0x6c]
005d8bfe  MOV EDX,dword ptr [EBP + -0x30]
005d8c01  MOV EAX,dword ptr [EDX + 0x6c]
005d8c04  MOV EDX,dword ptr [ECX]
005d8c06  MOV ECX,EAX
005d8c08  MOV EAX,dword ptr [EDX + 0x70]
005d8c0b  CALL EAX
005d8c0d  PUSH 0x0
005d8c0f  MOV ECX,dword ptr [EBP + -0x30]
005d8c12  MOV ECX,dword ptr [ECX + 0x6c]
005d8c15  CALL 0x005f5d50
005d8c1a  MOV EDX,dword ptr [EBP + -0x30]
005d8c1d  MOV EAX,dword ptr [EDX + 0x6c]
005d8c20  MOV dword ptr [EBP + -0x24],EAX
005d8c23  MOV ECX,dword ptr [EBP + -0x24]
005d8c26  MOV dword ptr [EBP + -0x20],ECX
005d8c29  CMP dword ptr [EBP + -0x20],0x0
005d8c2d  JZ 0x005d8c42
005d8c2f  PUSH 0x1
005d8c31  MOV EDX,dword ptr [EBP + -0x20]
005d8c34  MOV EAX,dword ptr [EDX]
005d8c36  MOV ECX,dword ptr [EBP + -0x20]
005d8c39  MOV EDX,dword ptr [EAX]
005d8c3b  CALL EDX
005d8c3d  MOV dword ptr [EBP + -0x44],EAX
005d8c40  JMP 0x005d8c49
005d8c42  MOV dword ptr [EBP + -0x44],0x0
005d8c49  MOV EAX,dword ptr [EBP + -0x30]
005d8c4c  MOV dword ptr [EAX + 0x6c],0x0
005d8c53  MOV ECX,dword ptr [EBP + -0x30]
005d8c56  CALL 0x005da480
005d8c5b  PUSH 0x1399
005d8c60  MOV ECX,dword ptr [EBP + -0x30]
005d8c63  CALL 0x005f2ba0
005d8c68  MOV ECX,dword ptr [EBP + -0xc]
005d8c6b  MOV dword ptr FS:[0x0],ECX
005d8c72  POP ECX
005d8c73  MOV ESP,EBP
005d8c75  POP EBP
005d8c76  RET 0xc
