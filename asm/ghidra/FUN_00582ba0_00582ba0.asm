; FUN_00582ba0  00582ba0
00582ba0  PUSH EBP
00582ba1  MOV EBP,ESP
00582ba3  PUSH -0x1
00582ba5  PUSH 0x6a6b0e
00582baa  MOV EAX,FS:[0x0]
00582bb0  PUSH EAX
00582bb1  SUB ESP,0x28
00582bb4  MOV EAX,[0x00781870]
00582bb9  XOR EAX,EBP
00582bbb  PUSH EAX
00582bbc  LEA EAX,[EBP + -0xc]
00582bbf  MOV FS:[0x0],EAX
00582bc5  MOV dword ptr [EBP + -0x28],ECX
00582bc8  MOV EAX,dword ptr [EBP + -0x28]
00582bcb  MOV dword ptr [EAX],0x6cc29c
00582bd1  MOV dword ptr [EBP + -0x4],0x0
00582bd8  MOV ECX,dword ptr [EBP + -0x28]
00582bdb  MOV EDX,dword ptr [ECX + 0x1c4]
00582be1  MOV dword ptr [EBP + -0x14],EDX
00582be4  MOV EAX,dword ptr [EBP + -0x14]
00582be7  MOV dword ptr [EBP + -0x10],EAX
00582bea  CMP dword ptr [EBP + -0x10],0x0
00582bee  JZ 0x00582c03
00582bf0  PUSH 0x1
00582bf2  MOV ECX,dword ptr [EBP + -0x10]
00582bf5  MOV EDX,dword ptr [ECX]
00582bf7  MOV ECX,dword ptr [EBP + -0x10]
00582bfa  MOV EAX,dword ptr [EDX]
00582bfc  CALL EAX
00582bfe  MOV dword ptr [EBP + -0x2c],EAX
00582c01  JMP 0x00582c0a
00582c03  MOV dword ptr [EBP + -0x2c],0x0
00582c0a  MOV ECX,dword ptr [EBP + -0x28]
00582c0d  MOV dword ptr [ECX + 0x1c4],0x0
00582c17  MOV EDX,dword ptr [EBP + -0x28]
00582c1a  MOV EAX,dword ptr [EDX + 0x1c8]
00582c20  MOV dword ptr [EBP + -0x1c],EAX
00582c23  MOV ECX,dword ptr [EBP + -0x1c]
00582c26  MOV dword ptr [EBP + -0x18],ECX
00582c29  CMP dword ptr [EBP + -0x18],0x0
00582c2d  JZ 0x00582c42
00582c2f  PUSH 0x1
00582c31  MOV EDX,dword ptr [EBP + -0x18]
00582c34  MOV EAX,dword ptr [EDX]
00582c36  MOV ECX,dword ptr [EBP + -0x18]
00582c39  MOV EDX,dword ptr [EAX]
00582c3b  CALL EDX
00582c3d  MOV dword ptr [EBP + -0x30],EAX
00582c40  JMP 0x00582c49
00582c42  MOV dword ptr [EBP + -0x30],0x0
00582c49  MOV EAX,dword ptr [EBP + -0x28]
00582c4c  MOV dword ptr [EAX + 0x1c8],0x0
00582c56  MOV ECX,dword ptr [EBP + -0x28]
00582c59  MOV EDX,dword ptr [ECX + 0x1cc]
00582c5f  MOV dword ptr [EBP + -0x24],EDX
00582c62  MOV EAX,dword ptr [EBP + -0x24]
00582c65  MOV dword ptr [EBP + -0x20],EAX
00582c68  CMP dword ptr [EBP + -0x20],0x0
00582c6c  JZ 0x00582c81
00582c6e  PUSH 0x1
00582c70  MOV ECX,dword ptr [EBP + -0x20]
00582c73  MOV EDX,dword ptr [ECX]
00582c75  MOV ECX,dword ptr [EBP + -0x20]
00582c78  MOV EAX,dword ptr [EDX]
00582c7a  CALL EAX
00582c7c  MOV dword ptr [EBP + -0x34],EAX
00582c7f  JMP 0x00582c88
00582c81  MOV dword ptr [EBP + -0x34],0x0
00582c88  MOV ECX,dword ptr [EBP + -0x28]
00582c8b  MOV dword ptr [ECX + 0x1cc],0x0
00582c95  CMP dword ptr [0x00793584],0x0
00582c9c  JZ 0x00582ca9
00582c9e  MOV ECX,dword ptr [0x00793584]
00582ca4  CALL 0x0058af00
00582ca9  MOV dword ptr [EBP + -0x4],0xffffffff
00582cb0  MOV ECX,dword ptr [EBP + -0x28]
00582cb3  CALL 0x005f7260
00582cb8  MOV ECX,dword ptr [EBP + -0xc]
00582cbb  MOV dword ptr FS:[0x0],ECX
00582cc2  POP ECX
00582cc3  MOV ESP,EBP
00582cc5  POP EBP
00582cc6  RET
