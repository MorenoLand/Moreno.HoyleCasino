; FUN_0041b170  0041b170
0041b170  PUSH EBP
0041b171  MOV EBP,ESP
0041b173  SUB ESP,0x34
0041b176  MOV dword ptr [EBP + -0x30],ECX
0041b179  PUSH 0x0
0041b17b  PUSH 0x0
0041b17d  CALL 0x0064c8a0
0041b182  ADD ESP,0x8
0041b185  MOV dword ptr [EBP + -0x14],EAX
0041b188  MOV dword ptr [EBP + -0x10],EDX
0041b18b  MOV EAX,dword ptr [EBP + -0x14]
0041b18e  MOV dword ptr [EBP + -0xc],EAX
0041b191  MOV ECX,dword ptr [EBP + -0x10]
0041b194  MOV dword ptr [EBP + -0x8],ECX
0041b197  CMP dword ptr [EBP + 0xc],-0x1
0041b19b  JNZ 0x0041b1d8
0041b19d  CMP dword ptr [EBP + 0x8],-0x1
0041b1a1  JNZ 0x0041b1ac
0041b1a3  MOV dword ptr [EBP + 0xc],0xffffffff
0041b1aa  JMP 0x0041b1d8
0041b1ac  CMP dword ptr [EBP + 0x8],0x4
0041b1b0  JNZ 0x0041b1bb
0041b1b2  MOV dword ptr [EBP + -0x34],0x0
0041b1b9  JMP 0x0041b1d2
0041b1bb  MOV EDX,dword ptr [EBP + 0x8]
0041b1be  IMUL EDX,EDX,0x118
0041b1c4  MOV EAX,dword ptr [EBP + -0x30]
0041b1c7  MOVSX ECX,byte ptr [EAX + EDX*0x1 + 0x119]
0041b1cf  MOV dword ptr [EBP + -0x34],ECX
0041b1d2  MOV EDX,dword ptr [EBP + -0x34]
0041b1d5  MOV dword ptr [EBP + 0xc],EDX
0041b1d8  MOV EAX,dword ptr [EBP + 0x8]
0041b1db  PUSH EAX
0041b1dc  MOV ECX,dword ptr [EBP + -0x30]
0041b1df  CALL 0x004194c0
0041b1e4  MOV dword ptr [EBP + -0x4],EAX
0041b1e7  PUSH 0x1
0041b1e9  MOV ECX,dword ptr [EBP + 0xc]
0041b1ec  PUSH ECX
0041b1ed  MOV EDX,dword ptr [EBP + 0x8]
0041b1f0  PUSH EDX
0041b1f1  MOV ECX,dword ptr [EBP + -0x30]
0041b1f4  CALL 0x004193d0
0041b1f9  PUSH EAX
0041b1fa  PUSH 0x0
0041b1fc  MOV EAX,dword ptr [EBP + -0x4]
0041b1ff  PUSH EAX
0041b200  MOV ECX,dword ptr [EBP + 0x8]
0041b203  PUSH ECX
0041b204  MOV ECX,dword ptr [EBP + -0x30]
0041b207  CALL 0x00419370
0041b20c  PUSH 0x0
0041b20e  PUSH 0x1
0041b210  MOV EDX,dword ptr [EBP + 0xc]
0041b213  PUSH EDX
0041b214  MOV EAX,dword ptr [EBP + 0x8]
0041b217  PUSH EAX
0041b218  MOV ECX,dword ptr [EBP + -0x30]
0041b21b  CALL 0x00419370
0041b220  MOV ECX,dword ptr [EBP + 0x8]
0041b223  IMUL ECX,ECX,0x118
0041b229  MOV EDX,dword ptr [EBP + -0x30]
0041b22c  MOV AL,byte ptr [EBP + -0x4]
0041b22f  MOV byte ptr [EDX + ECX*0x1 + 0x119],AL
0041b236  MOV ECX,dword ptr [EBP + 0x8]
0041b239  MOV EDX,dword ptr [EBP + -0x30]
0041b23c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x468]
0041b243  MOV dword ptr [EBP + -0x28],EAX
0041b246  MOV ECX,dword ptr [EBP + 0x8]
0041b249  SHL ECX,0x5
0041b24c  MOV EDX,dword ptr [EBP + -0x28]
0041b24f  LEA EAX,[EDX + ECX*0x1 + 0x48]
0041b253  XOR ECX,ECX
0041b255  SHL ECX,0x3
0041b258  MOV EDX,dword ptr [EAX + ECX*0x1]
0041b25b  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x4]
0041b25f  MOV dword ptr [EBP + -0x1c],EDX
0041b262  MOV dword ptr [EBP + -0x18],EAX
0041b265  MOV ECX,dword ptr [EBP + -0x1c]
0041b268  MOV EDX,dword ptr [EBP + -0x18]
0041b26b  MOV dword ptr [EBP + -0xc],ECX
0041b26e  MOV dword ptr [EBP + -0x8],EDX
0041b271  MOV EAX,dword ptr [EBP + -0xc]
0041b274  IMUL EAX,EAX,-0x1
0041b277  MOV dword ptr [EBP + -0xc],EAX
0041b27a  MOV ECX,dword ptr [EBP + -0x8]
0041b27d  IMUL ECX,ECX,-0x1
0041b280  MOV dword ptr [EBP + -0x8],ECX
0041b283  MOV EDX,dword ptr [EBP + -0x8]
0041b286  PUSH EDX
0041b287  MOV EAX,dword ptr [EBP + -0xc]
0041b28a  PUSH EAX
0041b28b  MOV ECX,dword ptr [EBP + 0x8]
0041b28e  PUSH ECX
0041b28f  CALL 0x005dcb00
0041b294  ADD ESP,0x4
0041b297  MOV ECX,EAX
0041b299  CALL 0x005d5cf0
0041b29e  MOV EDX,dword ptr [EBP + 0x8]
0041b2a1  MOV EAX,dword ptr [EBP + -0x30]
0041b2a4  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x468]
0041b2ab  MOV dword ptr [EBP + -0x2c],ECX
0041b2ae  MOV EDX,dword ptr [EBP + 0x8]
0041b2b1  SHL EDX,0x5
0041b2b4  MOV EAX,dword ptr [EBP + -0x2c]
0041b2b7  LEA ECX,[EAX + EDX*0x1 + 0x48]
0041b2bb  XOR EDX,EDX
0041b2bd  SHL EDX,0x3
0041b2c0  MOV EAX,dword ptr [ECX + EDX*0x1]
0041b2c3  MOV ECX,dword ptr [ECX + EDX*0x1 + 0x4]
0041b2c7  MOV dword ptr [EBP + -0x24],EAX
0041b2ca  MOV dword ptr [EBP + -0x20],ECX
0041b2cd  MOV EDX,dword ptr [EBP + -0x4]
0041b2d0  PUSH EDX
0041b2d1  MOV EAX,dword ptr [EBP + 0x8]
0041b2d4  PUSH EAX
0041b2d5  MOV ECX,dword ptr [EBP + -0x20]
0041b2d8  PUSH ECX
0041b2d9  MOV EDX,dword ptr [EBP + -0x24]
0041b2dc  PUSH EDX
0041b2dd  MOV EAX,dword ptr [EBP + 0x8]
0041b2e0  MOV ECX,dword ptr [EBP + -0x30]
0041b2e3  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x468]
0041b2ea  MOV EAX,dword ptr [EBP + 0x8]
0041b2ed  MOV ECX,dword ptr [EBP + -0x30]
0041b2f0  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x468]
0041b2f7  MOV EDX,dword ptr [EDX]
0041b2f9  MOV EAX,dword ptr [EDX + 0xb8]
0041b2ff  CALL EAX
0041b301  PUSH 0x0
0041b303  MOV ECX,dword ptr [EBP + -0x4]
0041b306  PUSH ECX
0041b307  MOV EDX,dword ptr [EBP + 0x8]
0041b30a  PUSH EDX
0041b30b  MOV ECX,dword ptr [EBP + -0x30]
0041b30e  CALL 0x00419780
0041b313  CMP EAX,0x1
0041b316  JNZ 0x0041b32c
0041b318  MOV EAX,dword ptr [EBP + 0x8]
0041b31b  IMUL EAX,EAX,0x118
0041b321  MOV ECX,dword ptr [EBP + -0x30]
0041b324  MOV byte ptr [ECX + EAX*0x1 + 0x118],0x1
0041b32c  MOV ESP,EBP
0041b32e  POP EBP
0041b32f  RET 0x8
