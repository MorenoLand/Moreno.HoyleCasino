; FUN_005229b0  005229b0
005229b0  PUSH EBP
005229b1  MOV EBP,ESP
005229b3  SUB ESP,0xac
005229b9  MOV dword ptr [EBP + 0xffffff54],ECX
005229bf  MOV dword ptr [EBP + 0xffffff68],0xb
005229c9  MOV dword ptr [EBP + 0xffffff6c],0x7
005229d3  MOV dword ptr [EBP + 0xffffff70],0x14
005229dd  MOV dword ptr [EBP + 0xffffff74],0x20
005229e7  MOV dword ptr [EBP + 0xffffff78],0x11
005229f1  MOV dword ptr [EBP + 0xffffff7c],0x5
005229fb  MOV dword ptr [EBP + -0x80],0x16
00522a02  MOV dword ptr [EBP + -0x7c],0x22
00522a09  MOV dword ptr [EBP + -0x78],0xf
00522a10  MOV dword ptr [EBP + -0x74],0x3
00522a17  MOV dword ptr [EBP + -0x70],0x18
00522a1e  MOV dword ptr [EBP + -0x6c],0x24
00522a25  MOV dword ptr [EBP + -0x68],0xd
00522a2c  MOV dword ptr [EBP + -0x64],0x1
00522a33  MOV dword ptr [EBP + -0x60],0x25
00522a3a  MOV dword ptr [EBP + -0x5c],0x1b
00522a41  MOV dword ptr [EBP + -0x58],0xa
00522a48  MOV dword ptr [EBP + -0x54],0x19
00522a4f  MOV dword ptr [EBP + -0x50],0x1d
00522a56  MOV dword ptr [EBP + -0x4c],0xc
00522a5d  MOV dword ptr [EBP + -0x48],0x8
00522a64  MOV dword ptr [EBP + -0x44],0x13
00522a6b  MOV dword ptr [EBP + -0x40],0x1f
00522a72  MOV dword ptr [EBP + -0x3c],0x12
00522a79  MOV dword ptr [EBP + -0x38],0x6
00522a80  MOV dword ptr [EBP + -0x34],0x15
00522a87  MOV dword ptr [EBP + -0x30],0x21
00522a8e  MOV dword ptr [EBP + -0x2c],0x10
00522a95  MOV dword ptr [EBP + -0x28],0x4
00522a9c  MOV dword ptr [EBP + -0x24],0x17
00522aa3  MOV dword ptr [EBP + -0x20],0x23
00522aaa  MOV dword ptr [EBP + -0x1c],0xe
00522ab1  MOV dword ptr [EBP + -0x18],0x2
00522ab8  MOV dword ptr [EBP + -0x14],0x0
00522abf  MOV dword ptr [EBP + -0x10],0x1c
00522ac6  MOV dword ptr [EBP + -0xc],0x9
00522acd  MOV dword ptr [EBP + -0x8],0x1a
00522ad4  MOV dword ptr [EBP + -0x4],0x1e
00522adb  MOV EAX,dword ptr [EBP + 0xffffff54]
00522ae1  MOV EAX,dword ptr [EAX + 0x314]
00522ae7  CDQ
00522ae8  MOV ECX,0x3
00522aed  IDIV ECX
00522aef  MOV dword ptr [EBP + 0xffffff60],EAX
00522af5  PUSH 0x1
00522af7  MOV EDX,dword ptr [EBP + 0xffffff54]
00522afd  MOV EAX,dword ptr [EDX + 0x318]
00522b03  PUSH EAX
00522b04  MOV ECX,dword ptr [0x007960d8]
00522b0a  MOV ECX,dword ptr [ECX + 0x8]
00522b0d  CALL 0x00609870
00522b12  MOV EDX,dword ptr [EBP + 0xffffff60]
00522b18  MOV EAX,dword ptr [EBP + EDX*0x4 + 0xffffff68]
00522b1f  PUSH EAX
00522b20  MOV ECX,dword ptr [0x00793374]
00522b26  CALL 0x00528b60
00522b2b  MOV ECX,dword ptr [EBP + 0xffffff54]
00522b31  MOV ECX,dword ptr [ECX + 0x4]
00522b34  CALL 0x005f54a0
00522b39  MOVZX EDX,AL
00522b3c  TEST EDX,EDX
00522b3e  JNZ 0x00522b65
00522b40  MOV ECX,dword ptr [0x0162ee84]
00522b46  CALL 0x00637630
00522b4b  MOVZX EAX,AL
00522b4e  TEST EAX,EAX
00522b50  JZ 0x00522c37
00522b56  MOVZX ECX,byte ptr [0x00795f94]
00522b5d  TEST ECX,ECX
00522b5f  JNZ 0x00522c37
00522b65  MOV dword ptr [EBP + 0xffffff64],0x0
00522b6f  JMP 0x00522b80
00522b71  MOV EDX,dword ptr [EBP + 0xffffff64]
00522b77  ADD EDX,0x1
00522b7a  MOV dword ptr [EBP + 0xffffff64],EDX
00522b80  CMP dword ptr [EBP + 0xffffff64],0x4
00522b87  JGE 0x00522be1
00522b89  MOV EAX,dword ptr [EBP + 0xffffff64]
00522b8f  PUSH EAX
00522b90  CALL 0x005dcb00
00522b95  ADD ESP,0x4
00522b98  MOV dword ptr [EBP + 0xffffff58],EAX
00522b9e  MOV ECX,dword ptr [EBP + 0xffffff58]
00522ba4  CALL 0x0063aac0
00522ba9  MOV ECX,dword ptr [EAX]
00522bab  MOV dword ptr [EBP + 0xffffff5c],ECX
00522bb1  XOR EDX,EDX
00522bb3  CMP dword ptr [EBP + 0xffffff5c],0x0
00522bba  SETZ DL
00522bbd  MOVZX EAX,DL
00522bc0  TEST EAX,EAX
00522bc2  JNZ 0x00522bdf
00522bc4  PUSH 0x0
00522bc6  PUSH 0x0
00522bc8  MOV ECX,dword ptr [EBP + 0xffffff64]
00522bce  PUSH ECX
00522bcf  CALL 0x005dcb00
00522bd4  ADD ESP,0x4
00522bd7  MOV ECX,dword ptr [EAX + 0x20]
00522bda  CALL 0x006464d0
00522bdf  JMP 0x00522b71
00522be1  MOV EDX,dword ptr [EBP + 0xffffff54]
00522be7  MOV EAX,dword ptr [EDX + 0x4]
00522bea  MOV ECX,dword ptr [EBP + 0xffffff54]
00522bf0  MOV ECX,dword ptr [ECX + 0x4]
00522bf3  MOV EDX,dword ptr [EAX]
00522bf5  MOV EAX,dword ptr [EDX + 0x70]
00522bf8  CALL EAX
00522bfa  MOV ECX,dword ptr [EBP + 0xffffff54]
00522c00  MOV EDX,dword ptr [ECX + 0x10]
00522c03  MOV EAX,dword ptr [EBP + 0xffffff54]
00522c09  MOV ECX,dword ptr [EAX + 0x10]
00522c0c  MOV EDX,dword ptr [EDX]
00522c0e  MOV EAX,dword ptr [EDX + 0x70]
00522c11  CALL EAX
00522c13  MOV ECX,dword ptr [EBP + 0xffffff54]
00522c19  MOV EDX,dword ptr [ECX + 0x14]
00522c1c  MOV EAX,dword ptr [EBP + 0xffffff54]
00522c22  MOV ECX,dword ptr [EAX + 0x14]
00522c25  MOV EDX,dword ptr [EDX]
00522c27  MOV EAX,dword ptr [EDX + 0x70]
00522c2a  CALL EAX
00522c2c  MOV ECX,dword ptr [EBP + 0xffffff54]
00522c32  CALL 0x005226b0
00522c37  PUSH 0x0
00522c39  MOV ECX,dword ptr [0x0162ee80]
00522c3f  MOV ECX,dword ptr [ECX + 0x4]
00522c42  CALL 0x005fc420
00522c47  PUSH 0x0
00522c49  MOV EDX,dword ptr [EBP + 0xffffff54]
00522c4f  MOV ECX,dword ptr [EDX + 0x10]
00522c52  CALL 0x005f5d50
00522c57  PUSH 0x1
00522c59  MOV EAX,[0x0162ee80]
00522c5e  MOV ECX,dword ptr [EAX + 0x4]
00522c61  MOV EDX,dword ptr [0x0162ee80]
00522c67  MOV EAX,dword ptr [EDX + 0x4]
00522c6a  MOV EDX,dword ptr [ECX]
00522c6c  MOV ECX,EAX
00522c6e  MOV EAX,dword ptr [EDX + 0x4]
00522c71  CALL EAX
00522c73  PUSH 0x1
00522c75  MOV ECX,dword ptr [0x00793374]
00522c7b  CALL 0x00528ca0
00522c80  MOV ECX,dword ptr [EBP + 0xffffff54]
00522c86  CALL 0x00522ca0
00522c8b  MOV ECX,dword ptr [EBP + 0xffffff54]
00522c91  CALL 0x00522dc0
00522c96  MOV ESP,EBP
00522c98  POP EBP
00522c99  RET
