; FUN_00624c50  00624c50
00624c50  PUSH EBP
00624c51  MOV EBP,ESP
00624c53  SUB ESP,0x24
00624c56  MOV EAX,dword ptr [EBP + 0xc]
00624c59  PUSH EAX
00624c5a  MOV ECX,dword ptr [EBP + 0x8]
00624c5d  PUSH ECX
00624c5e  LEA EDX,[EBP + -0x10]
00624c61  PUSH EDX
00624c62  CALL 0x005ec3a0
00624c67  ADD ESP,0xc
00624c6a  MOVZX EAX,AL
00624c6d  TEST EAX,EAX
00624c6f  JNZ 0x00624c78
00624c71  XOR EAX,EAX
00624c73  JMP 0x00624e15
00624c78  MOV ECX,dword ptr [EBP + 0x10]
00624c7b  MOV dword ptr [EBP + -0x14],ECX
00624c7e  MOV EDX,dword ptr [EBP + 0x8]
00624c81  MOV EAX,dword ptr [EBP + 0xc]
00624c84  MOV ECX,dword ptr [EDX + 0x4]
00624c87  CMP ECX,dword ptr [EAX + 0x4]
00624c8a  JGE 0x00624cc3
00624c8c  MOV EDX,dword ptr [EBP + -0x14]
00624c8f  MOV EAX,dword ptr [EBP + 0x8]
00624c92  MOV ECX,dword ptr [EAX]
00624c94  MOV dword ptr [EDX],ECX
00624c96  MOV EDX,dword ptr [EBP + -0x14]
00624c99  MOV EAX,dword ptr [EBP + 0x8]
00624c9c  MOV ECX,dword ptr [EAX + 0x4]
00624c9f  MOV dword ptr [EDX + 0x4],ECX
00624ca2  MOV EDX,dword ptr [EBP + -0x14]
00624ca5  MOV EAX,dword ptr [EBP + 0x8]
00624ca8  MOV ECX,dword ptr [EAX + 0x8]
00624cab  MOV dword ptr [EDX + 0x8],ECX
00624cae  MOV EDX,dword ptr [EBP + -0x14]
00624cb1  MOV EAX,dword ptr [EBP + 0xc]
00624cb4  MOV ECX,dword ptr [EAX + 0x4]
00624cb7  MOV dword ptr [EDX + 0xc],ECX
00624cba  MOV EDX,dword ptr [EBP + -0x14]
00624cbd  ADD EDX,0x10
00624cc0  MOV dword ptr [EBP + -0x14],EDX
00624cc3  MOV EAX,dword ptr [EBP + 0x8]
00624cc6  MOV ECX,dword ptr [EBP + 0xc]
00624cc9  MOV EDX,dword ptr [EAX]
00624ccb  CMP EDX,dword ptr [ECX]
00624ccd  JGE 0x00624d43
00624ccf  MOV EAX,dword ptr [EBP + -0x14]
00624cd2  MOV ECX,dword ptr [EBP + 0x8]
00624cd5  MOV EDX,dword ptr [ECX]
00624cd7  MOV dword ptr [EAX],EDX
00624cd9  MOV EAX,dword ptr [EBP + 0x8]
00624cdc  MOV ECX,dword ptr [EBP + 0xc]
00624cdf  MOV EDX,dword ptr [EAX + 0x4]
00624ce2  CMP EDX,dword ptr [ECX + 0x4]
00624ce5  JGE 0x00624cf2
00624ce7  MOV EAX,dword ptr [EBP + 0xc]
00624cea  MOV ECX,dword ptr [EAX + 0x4]
00624ced  MOV dword ptr [EBP + -0x18],ECX
00624cf0  JMP 0x00624cfb
00624cf2  MOV EDX,dword ptr [EBP + 0x8]
00624cf5  MOV EAX,dword ptr [EDX + 0x4]
00624cf8  MOV dword ptr [EBP + -0x18],EAX
00624cfb  MOV ECX,dword ptr [EBP + -0x14]
00624cfe  MOV EDX,dword ptr [EBP + -0x18]
00624d01  MOV dword ptr [ECX + 0x4],EDX
00624d04  MOV EAX,dword ptr [EBP + -0x14]
00624d07  MOV ECX,dword ptr [EBP + 0xc]
00624d0a  MOV EDX,dword ptr [ECX]
00624d0c  MOV dword ptr [EAX + 0x8],EDX
00624d0f  MOV EAX,dword ptr [EBP + 0x8]
00624d12  MOV ECX,dword ptr [EBP + 0xc]
00624d15  MOV EDX,dword ptr [EAX + 0xc]
00624d18  CMP EDX,dword ptr [ECX + 0xc]
00624d1b  JGE 0x00624d28
00624d1d  MOV EAX,dword ptr [EBP + 0x8]
00624d20  MOV ECX,dword ptr [EAX + 0xc]
00624d23  MOV dword ptr [EBP + -0x1c],ECX
00624d26  JMP 0x00624d31
00624d28  MOV EDX,dword ptr [EBP + 0xc]
00624d2b  MOV EAX,dword ptr [EDX + 0xc]
00624d2e  MOV dword ptr [EBP + -0x1c],EAX
00624d31  MOV ECX,dword ptr [EBP + -0x14]
00624d34  MOV EDX,dword ptr [EBP + -0x1c]
00624d37  MOV dword ptr [ECX + 0xc],EDX
00624d3a  MOV EAX,dword ptr [EBP + -0x14]
00624d3d  ADD EAX,0x10
00624d40  MOV dword ptr [EBP + -0x14],EAX
00624d43  MOV ECX,dword ptr [EBP + 0x8]
00624d46  MOV EDX,dword ptr [EBP + 0xc]
00624d49  MOV EAX,dword ptr [ECX + 0x8]
00624d4c  CMP EAX,dword ptr [EDX + 0x8]
00624d4f  JLE 0x00624dc7
00624d51  MOV ECX,dword ptr [EBP + -0x14]
00624d54  MOV EDX,dword ptr [EBP + 0xc]
00624d57  MOV EAX,dword ptr [EDX + 0x8]
00624d5a  MOV dword ptr [ECX],EAX
00624d5c  MOV ECX,dword ptr [EBP + 0x8]
00624d5f  MOV EDX,dword ptr [EBP + 0xc]
00624d62  MOV EAX,dword ptr [ECX + 0x4]
00624d65  CMP EAX,dword ptr [EDX + 0x4]
00624d68  JGE 0x00624d75
00624d6a  MOV ECX,dword ptr [EBP + 0xc]
00624d6d  MOV EDX,dword ptr [ECX + 0x4]
00624d70  MOV dword ptr [EBP + -0x20],EDX
00624d73  JMP 0x00624d7e
00624d75  MOV EAX,dword ptr [EBP + 0x8]
00624d78  MOV ECX,dword ptr [EAX + 0x4]
00624d7b  MOV dword ptr [EBP + -0x20],ECX
00624d7e  MOV EDX,dword ptr [EBP + -0x14]
00624d81  MOV EAX,dword ptr [EBP + -0x20]
00624d84  MOV dword ptr [EDX + 0x4],EAX
00624d87  MOV ECX,dword ptr [EBP + -0x14]
00624d8a  MOV EDX,dword ptr [EBP + 0x8]
00624d8d  MOV EAX,dword ptr [EDX + 0x8]
00624d90  MOV dword ptr [ECX + 0x8],EAX
00624d93  MOV ECX,dword ptr [EBP + 0x8]
00624d96  MOV EDX,dword ptr [EBP + 0xc]
00624d99  MOV EAX,dword ptr [ECX + 0xc]
00624d9c  CMP EAX,dword ptr [EDX + 0xc]
00624d9f  JGE 0x00624dac
00624da1  MOV ECX,dword ptr [EBP + 0x8]
00624da4  MOV EDX,dword ptr [ECX + 0xc]
00624da7  MOV dword ptr [EBP + -0x24],EDX
00624daa  JMP 0x00624db5
00624dac  MOV EAX,dword ptr [EBP + 0xc]
00624daf  MOV ECX,dword ptr [EAX + 0xc]
00624db2  MOV dword ptr [EBP + -0x24],ECX
00624db5  MOV EDX,dword ptr [EBP + -0x14]
00624db8  MOV EAX,dword ptr [EBP + -0x24]
00624dbb  MOV dword ptr [EDX + 0xc],EAX
00624dbe  MOV ECX,dword ptr [EBP + -0x14]
00624dc1  ADD ECX,0x10
00624dc4  MOV dword ptr [EBP + -0x14],ECX
00624dc7  MOV EDX,dword ptr [EBP + 0x8]
00624dca  MOV EAX,dword ptr [EBP + 0xc]
00624dcd  MOV ECX,dword ptr [EDX + 0xc]
00624dd0  CMP ECX,dword ptr [EAX + 0xc]
00624dd3  JLE 0x00624e0c
00624dd5  MOV EDX,dword ptr [EBP + -0x14]
00624dd8  MOV EAX,dword ptr [EBP + 0x8]
00624ddb  MOV ECX,dword ptr [EAX]
00624ddd  MOV dword ptr [EDX],ECX
00624ddf  MOV EDX,dword ptr [EBP + -0x14]
00624de2  MOV EAX,dword ptr [EBP + 0xc]
00624de5  MOV ECX,dword ptr [EAX + 0xc]
00624de8  MOV dword ptr [EDX + 0x4],ECX
00624deb  MOV EDX,dword ptr [EBP + -0x14]
00624dee  MOV EAX,dword ptr [EBP + 0x8]
00624df1  MOV ECX,dword ptr [EAX + 0x8]
00624df4  MOV dword ptr [EDX + 0x8],ECX
00624df7  MOV EDX,dword ptr [EBP + -0x14]
00624dfa  MOV EAX,dword ptr [EBP + 0x8]
00624dfd  MOV ECX,dword ptr [EAX + 0xc]
00624e00  MOV dword ptr [EDX + 0xc],ECX
00624e03  MOV EDX,dword ptr [EBP + -0x14]
00624e06  ADD EDX,0x10
00624e09  MOV dword ptr [EBP + -0x14],EDX
00624e0c  MOV EAX,dword ptr [EBP + -0x14]
00624e0f  SUB EAX,dword ptr [EBP + 0x10]
00624e12  SAR EAX,0x4
00624e15  MOV ESP,EBP
00624e17  POP EBP
00624e18  RET
