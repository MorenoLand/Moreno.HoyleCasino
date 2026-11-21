; FUN_00582cd0  00582cd0
00582cd0  PUSH EBP
00582cd1  MOV EBP,ESP
00582cd3  SUB ESP,0x28
00582cd6  MOV EAX,[0x00781870]
00582cdb  XOR EAX,EBP
00582cdd  MOV dword ptr [EBP + -0x8],EAX
00582ce0  MOV dword ptr [EBP + -0x24],ECX
00582ce3  MOV EAX,dword ptr [EBP + -0x24]
00582ce6  MOV ECX,dword ptr [EBP + -0x24]
00582ce9  MOV EDX,dword ptr [EAX + 0x1c0]
00582cef  CMP EDX,dword ptr [ECX + 0x1bc]
00582cf5  JZ 0x00582df0
00582cfb  MOV ECX,dword ptr [0x007947e0]
00582d01  CALL 0x005e0ea0
00582d06  CMP dword ptr [0x00793584],0x0
00582d0d  JZ 0x00582d33
00582d0f  MOV EAX,[0x007947e0]
00582d14  MOV ECX,dword ptr [EAX + 0x98]
00582d1a  PUSH ECX
00582d1b  MOV ECX,dword ptr [0x00793584]
00582d21  CALL 0x00589050
00582d26  PUSH 0x0
00582d28  MOV ECX,dword ptr [0x00793584]
00582d2e  CALL 0x005890f0
00582d33  MOV EDX,dword ptr [EBP + -0x24]
00582d36  MOV EAX,dword ptr [EDX + 0x1c0]
00582d3c  ADD EAX,0x1
00582d3f  MOV ECX,dword ptr [EBP + -0x24]
00582d42  MOV dword ptr [ECX + 0x1c0],EAX
00582d48  MOV EDX,dword ptr [EBP + -0x24]
00582d4b  MOV EAX,dword ptr [EDX + 0x1bc]
00582d51  PUSH EAX
00582d52  MOV ECX,dword ptr [EBP + -0x24]
00582d55  MOV EDX,dword ptr [ECX + 0x1c0]
00582d5b  PUSH EDX
00582d5c  PUSH 0x6b38f0
00582d61  LEA EAX,[EBP + -0x18]
00582d64  PUSH EAX
00582d65  CALL dword ptr [0x006b2220]
00582d6b  ADD ESP,0x10
00582d6e  LEA ECX,[EBP + -0x18]
00582d71  PUSH ECX
00582d72  MOV EDX,dword ptr [EBP + -0x24]
00582d75  MOV EAX,dword ptr [EDX + 0x1c8]
00582d7b  MOV ECX,dword ptr [EBP + -0x24]
00582d7e  MOV ECX,dword ptr [ECX + 0x1c8]
00582d84  MOV EDX,dword ptr [EAX]
00582d86  MOV EAX,dword ptr [EDX + 0xb4]
00582d8c  CALL EAX
00582d8e  MOV ECX,dword ptr [EBP + -0x24]
00582d91  MOV EDX,dword ptr [EBP + -0x24]
00582d94  MOV EAX,dword ptr [ECX + 0x1c0]
00582d9a  CMP EAX,dword ptr [EDX + 0x1bc]
00582da0  JNZ 0x00582dad
00582da2  FLD float ptr [0x006cc2e8]
00582da8  FSTP float ptr [EBP + -0x4]
00582dab  JMP 0x00582dc8
00582dad  MOV ECX,dword ptr [EBP + -0x24]
00582db0  FILD dword ptr [ECX + 0x1bc]
00582db6  FDIVR double ptr [0x006cc2e0]
00582dbc  MOV EDX,dword ptr [EBP + -0x24]
00582dbf  FIMUL dword ptr [EDX + 0x1c0]
00582dc5  FSTP float ptr [EBP + -0x4]
00582dc8  PUSH 0xa
00582dca  FLD float ptr [EBP + -0x4]
00582dcd  CALL 0x00686cc0
00582dd2  PUSH EAX
00582dd3  MOV EAX,dword ptr [EBP + -0x24]
00582dd6  MOV ECX,dword ptr [EAX + 0x1cc]
00582ddc  MOV EDX,dword ptr [EBP + -0x24]
00582ddf  MOV EAX,dword ptr [EDX + 0x1cc]
00582de5  MOV EDX,dword ptr [ECX]
00582de7  MOV ECX,EAX
00582de9  MOV EAX,dword ptr [EDX + 0x78]
00582dec  CALL EAX
00582dee  JMP 0x00582e34
00582df0  MOV ECX,dword ptr [EBP + -0x24]
00582df3  CALL 0x005f87d0
00582df8  MOV ECX,dword ptr [0x00793584]
00582dfe  MOV dword ptr [ECX + 0x3c0c],0x0
00582e08  MOV EDX,dword ptr [EBP + -0x24]
00582e0b  MOV dword ptr [EBP + -0x20],EDX
00582e0e  MOV EAX,dword ptr [EBP + -0x20]
00582e11  MOV dword ptr [EBP + -0x1c],EAX
00582e14  CMP dword ptr [EBP + -0x1c],0x0
00582e18  JZ 0x00582e2d
00582e1a  PUSH 0x1
00582e1c  MOV ECX,dword ptr [EBP + -0x1c]
00582e1f  MOV EDX,dword ptr [ECX]
00582e21  MOV ECX,dword ptr [EBP + -0x1c]
00582e24  MOV EAX,dword ptr [EDX]
00582e26  CALL EAX
00582e28  MOV dword ptr [EBP + -0x28],EAX
00582e2b  JMP 0x00582e34
00582e2d  MOV dword ptr [EBP + -0x28],0x0
00582e34  MOV ECX,dword ptr [EBP + -0x8]
00582e37  XOR ECX,EBP
00582e39  CALL 0x00686d72
00582e3e  MOV ESP,EBP
00582e40  POP EBP
00582e41  RET
