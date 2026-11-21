; FUN_00444b10  00444b10
00444b10  PUSH EBP
00444b11  MOV EBP,ESP
00444b13  SUB ESP,0xc
00444b16  MOV dword ptr [EBP + -0xc],ECX
00444b19  MOV EAX,dword ptr [EBP + -0xc]
00444b1c  MOV byte ptr [EAX + 0x25d],0x0
00444b23  MOV ECX,dword ptr [EBP + -0xc]
00444b26  MOV byte ptr [ECX + 0x25c],0x0
00444b2d  MOV dword ptr [EBP + -0x4],0x0
00444b34  JMP 0x00444b3f
00444b36  MOV EDX,dword ptr [EBP + -0x4]
00444b39  ADD EDX,0x1
00444b3c  MOV dword ptr [EBP + -0x4],EDX
00444b3f  CMP dword ptr [EBP + -0x4],0x5
00444b43  JGE 0x00444c6b
00444b49  MOV EAX,dword ptr [EBP + -0x4]
00444b4c  IMUL EAX,EAX,0x78
00444b4f  MOV ECX,dword ptr [EBP + -0xc]
00444b52  MOV dword ptr [ECX + EAX*0x1 + 0x4],0xffffffff
00444b5a  PUSH 0x6b27f8
00444b5f  MOV EDX,dword ptr [EBP + -0x4]
00444b62  IMUL EDX,EDX,0x78
00444b65  MOV EAX,dword ptr [EBP + -0xc]
00444b68  LEA ECX,[EAX + EDX*0x1 + 0x8]
00444b6c  PUSH ECX
00444b6d  CALL 0x00686d8e
00444b72  ADD ESP,0x8
00444b75  MOV EDX,dword ptr [EBP + -0x4]
00444b78  IMUL EDX,EDX,0x78
00444b7b  MOV EAX,dword ptr [EBP + -0xc]
00444b7e  MOV dword ptr [EAX + EDX*0x1 + 0x3c],0x0
00444b86  MOV ECX,dword ptr [EBP + -0x4]
00444b89  IMUL ECX,ECX,0x78
00444b8c  MOV EDX,dword ptr [EBP + -0xc]
00444b8f  MOV dword ptr [EDX + ECX*0x1 + 0x40],0x0
00444b97  MOV EAX,dword ptr [EBP + -0x4]
00444b9a  IMUL EAX,EAX,0x78
00444b9d  MOV ECX,dword ptr [EBP + -0xc]
00444ba0  MOV dword ptr [ECX + EAX*0x1 + 0x44],0xffffffff
00444ba8  MOV EDX,dword ptr [EBP + -0x4]
00444bab  IMUL EDX,EDX,0x78
00444bae  MOV EAX,dword ptr [EBP + -0xc]
00444bb1  MOV dword ptr [EAX + EDX*0x1 + 0x48],0x0
00444bb9  MOV ECX,dword ptr [EBP + -0x4]
00444bbc  IMUL ECX,ECX,0x78
00444bbf  MOV EDX,dword ptr [EBP + -0xc]
00444bc2  MOV dword ptr [EDX + ECX*0x1 + 0x4c],0xffffffff
00444bca  MOV dword ptr [EBP + -0x8],0x0
00444bd1  JMP 0x00444bdc
00444bd3  MOV EAX,dword ptr [EBP + -0x8]
00444bd6  ADD EAX,0x1
00444bd9  MOV dword ptr [EBP + -0x8],EAX
00444bdc  CMP dword ptr [EBP + -0x8],0x3
00444be0  JGE 0x00444c14
00444be2  MOV ECX,dword ptr [EBP + -0x4]
00444be5  IMUL ECX,ECX,0x78
00444be8  MOV EDX,dword ptr [EBP + -0xc]
00444beb  LEA EAX,[EDX + ECX*0x1 + 0x4]
00444bef  MOV ECX,dword ptr [EBP + -0x8]
00444bf2  MOV dword ptr [EAX + ECX*0x8 + 0x4c],0x0
00444bfa  MOV EDX,dword ptr [EBP + -0x4]
00444bfd  IMUL EDX,EDX,0x78
00444c00  MOV EAX,dword ptr [EBP + -0xc]
00444c03  LEA ECX,[EAX + EDX*0x1 + 0x4]
00444c07  MOV EDX,dword ptr [EBP + -0x8]
00444c0a  MOV dword ptr [ECX + EDX*0x8 + 0x50],0x1
00444c12  JMP 0x00444bd3
00444c14  MOV EAX,dword ptr [EBP + -0x4]
00444c17  IMUL EAX,EAX,0x78
00444c1a  MOV ECX,dword ptr [EBP + -0xc]
00444c1d  MOV dword ptr [ECX + EAX*0x1 + 0x68],0x0
00444c25  MOV EDX,dword ptr [EBP + -0x4]
00444c28  IMUL EDX,EDX,0x78
00444c2b  MOV EAX,dword ptr [EBP + -0xc]
00444c2e  MOV dword ptr [EAX + EDX*0x1 + 0x6c],0xffffffff
00444c36  MOV ECX,dword ptr [EBP + -0x4]
00444c39  IMUL ECX,ECX,0x78
00444c3c  MOV EDX,dword ptr [EBP + -0xc]
00444c3f  MOV dword ptr [EDX + ECX*0x1 + 0x70],0xffffffff
00444c47  MOV EAX,dword ptr [EBP + -0x4]
00444c4a  IMUL EAX,EAX,0x78
00444c4d  MOV ECX,dword ptr [EBP + -0xc]
00444c50  MOV dword ptr [ECX + EAX*0x1 + 0x74],0x0
00444c58  MOV EDX,dword ptr [EBP + -0x4]
00444c5b  IMUL EDX,EDX,0x78
00444c5e  MOV EAX,dword ptr [EBP + -0xc]
00444c61  MOV byte ptr [EAX + EDX*0x1 + 0x78],0x0
00444c66  JMP 0x00444b36
00444c6b  MOV ECX,dword ptr [EBP + -0xc]
00444c6e  CALL 0x00444f40
00444c73  MOV ECX,dword ptr [EBP + -0xc]
00444c76  MOV byte ptr [ECX + 0x25e],0x1
00444c7d  MOV ECX,dword ptr [EBP + -0xc]
00444c80  CALL 0x00444cb0
00444c85  MOVZX EDX,AL
00444c88  TEST EDX,EDX
00444c8a  JZ 0x00444ca2
00444c8c  PUSH 0x0
00444c8e  CALL 0x005dcb00
00444c93  ADD ESP,0x4
00444c96  PUSH EAX
00444c97  MOV ECX,dword ptr [0x007906ec]
00444c9d  CALL 0x005dbb70
00444ca2  MOV ESP,EBP
00444ca4  POP EBP
00444ca5  RET
