; FUN_0043cd40  0043cd40
0043cd40  PUSH EBP
0043cd41  MOV EBP,ESP
0043cd43  SUB ESP,0x5c
0043cd46  MOV dword ptr [EBP + -0x44],ECX
0043cd49  MOV EAX,dword ptr [EBP + 0x8]
0043cd4c  SHL EAX,0x5
0043cd4f  MOV ECX,dword ptr [EBP + -0x44]
0043cd52  LEA EDX,[ECX + EAX*0x1 + 0x48]
0043cd56  XOR EAX,EAX
0043cd58  SHL EAX,0x3
0043cd5b  MOV ECX,dword ptr [EDX + EAX*0x1]
0043cd5e  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
0043cd62  MOV dword ptr [EBP + -0x8],ECX
0043cd65  MOV dword ptr [EBP + -0x4],EDX
0043cd68  PUSH 0x0
0043cd6a  PUSH 0x0
0043cd6c  CALL 0x0064c8a0
0043cd71  ADD ESP,0x8
0043cd74  MOV dword ptr [EBP + -0x28],EAX
0043cd77  MOV dword ptr [EBP + -0x24],EDX
0043cd7a  MOV EAX,dword ptr [EBP + -0x28]
0043cd7d  MOV dword ptr [EBP + -0x20],EAX
0043cd80  MOV ECX,dword ptr [EBP + -0x24]
0043cd83  MOV dword ptr [EBP + -0x1c],ECX
0043cd86  PUSH 0x0
0043cd88  PUSH 0x0
0043cd8a  CALL 0x0064c8a0
0043cd8f  ADD ESP,0x8
0043cd92  MOV dword ptr [EBP + -0x30],EAX
0043cd95  MOV dword ptr [EBP + -0x2c],EDX
0043cd98  MOV EDX,dword ptr [EBP + -0x30]
0043cd9b  MOV dword ptr [EBP + -0x10],EDX
0043cd9e  MOV EAX,dword ptr [EBP + -0x2c]
0043cda1  MOV dword ptr [EBP + -0xc],EAX
0043cda4  MOV ECX,dword ptr [EBP + -0x44]
0043cda7  CALL 0x005f5400
0043cdac  PUSH EAX
0043cdad  MOV ECX,dword ptr [0x007906d4]
0043cdb3  CALL 0x0043adc0
0043cdb8  MOV dword ptr [EBP + -0x48],EAX
0043cdbb  FILD dword ptr [EBP + -0x48]
0043cdbe  MOV ECX,dword ptr [EBP + -0x44]
0043cdc1  FSTP double ptr [EBP + -0x50]
0043cdc4  CALL 0x005f5400
0043cdc9  PUSH EAX
0043cdca  MOV ECX,dword ptr [0x007906d4]
0043cdd0  CALL 0x0043aff0
0043cdd5  MOV dword ptr [EBP + -0x54],EAX
0043cdd8  FILD dword ptr [EBP + -0x54]
0043cddb  FDIVR double ptr [EBP + -0x50]
0043cdde  FSTP double ptr [EBP + -0x18]
0043cde1  MOV ECX,dword ptr [EBP + 0x8]
0043cde4  PUSH ECX
0043cde5  CALL 0x005dcb00
0043cdea  ADD ESP,0x4
0043cded  MOV ECX,EAX
0043cdef  CALL 0x005d5a50
0043cdf4  CMP EAX,0x77359400
0043cdf9  JL 0x0043ce00
0043cdfb  JMP 0x0043d0c1
0043ce00  MOV ECX,dword ptr [EBP + -0x44]
0043ce03  CALL 0x005f5400
0043ce08  CMP EAX,0x12
0043ce0b  JNZ 0x0043ce22
0043ce0d  CMP dword ptr [EBP + 0xc],0x1
0043ce11  JNZ 0x0043ce22
0043ce13  MOV EAX,dword ptr [EBP + -0x8]
0043ce16  CDQ
0043ce17  AND EDX,0x3
0043ce1a  ADD EAX,EDX
0043ce1c  SAR EAX,0x2
0043ce1f  MOV dword ptr [EBP + -0x8],EAX
0043ce22  MOV EDX,dword ptr [EBP + -0x44]
0043ce25  MOV dword ptr [EDX + 0x110],0xffffffff
0043ce2f  CMP dword ptr [EBP + -0x8],0x0
0043ce33  JG 0x0043ce4c
0043ce35  PUSH 0xb80
0043ce3a  PUSH 0x6b7f20
0043ce3f  PUSH 0x6b81d8
0043ce44  CALL 0x005e9f20
0043ce49  ADD ESP,0xc
0043ce4c  MOV ECX,dword ptr [EBP + 0xc]
0043ce4f  MOV dword ptr [EBP + -0x58],ECX
0043ce52  CMP dword ptr [EBP + -0x58],0x0
0043ce56  JZ 0x0043ce71
0043ce58  CMP dword ptr [EBP + -0x58],0x1
0043ce5c  JZ 0x0043cf29
0043ce62  CMP dword ptr [EBP + -0x58],0x3
0043ce66  JZ 0x0043cefc
0043ce6c  JMP 0x0043d09b
0043ce71  MOV EDX,dword ptr [EBP + 0x8]
0043ce74  PUSH EDX
0043ce75  CALL 0x005dcb00
0043ce7a  ADD ESP,0x4
0043ce7d  CMP dword ptr [EAX + 0x4a8],0x0
0043ce84  JLE 0x0043ce9c
0043ce86  MOV EAX,dword ptr [EBP + 0x8]
0043ce89  PUSH EAX
0043ce8a  CALL 0x005dcb00
0043ce8f  ADD ESP,0x4
0043ce92  MOV dword ptr [EAX + 0x4a8],0x0
0043ce9c  MOV ECX,dword ptr [EBP + 0x8]
0043ce9f  PUSH ECX
0043cea0  CALL 0x005dcb00
0043cea5  ADD ESP,0x4
0043cea8  ADD EAX,0x4a8
0043cead  MOV dword ptr [EBP + -0x5c],EAX
0043ceb0  MOV EDX,dword ptr [EBP + -0x5c]
0043ceb3  MOV EAX,dword ptr [EDX]
0043ceb5  SUB EAX,0x1
0043ceb8  MOV ECX,dword ptr [EBP + -0x5c]
0043cebb  MOV dword ptr [ECX],EAX
0043cebd  MOV EDX,dword ptr [EBP + -0x8]
0043cec0  IMUL EDX,EDX,-0x1
0043cec3  MOV dword ptr [EBP + -0x20],EDX
0043cec6  MOV EAX,dword ptr [EBP + -0x4]
0043cec9  IMUL EAX,EAX,-0x1
0043cecc  MOV dword ptr [EBP + -0x1c],EAX
0043cecf  MOV ECX,dword ptr [EBP + -0x1c]
0043ced2  PUSH ECX
0043ced3  MOV EDX,dword ptr [EBP + -0x20]
0043ced6  PUSH EDX
0043ced7  MOV EAX,dword ptr [EBP + 0x8]
0043ceda  PUSH EAX
0043cedb  CALL 0x005dcb00
0043cee0  ADD ESP,0x4
0043cee3  MOV ECX,EAX
0043cee5  CALL 0x005d5fb0
0043ceea  MOV ECX,dword ptr [EBP + -0x44]
0043ceed  MOV dword ptr [ECX + 0x110],0x0
0043cef7  JMP 0x0043d09b
0043cefc  MOV EDX,dword ptr [EBP + -0x4]
0043ceff  PUSH EDX
0043cf00  MOV EAX,dword ptr [EBP + -0x8]
0043cf03  PUSH EAX
0043cf04  MOV ECX,dword ptr [EBP + 0x8]
0043cf07  PUSH ECX
0043cf08  CALL 0x005dcb00
0043cf0d  ADD ESP,0x4
0043cf10  MOV ECX,EAX
0043cf12  CALL 0x005d5cf0
0043cf17  MOV EDX,dword ptr [EBP + -0x44]
0043cf1a  MOV dword ptr [EDX + 0x110],0x3
0043cf24  JMP 0x0043d09b
0043cf29  MOV EAX,dword ptr [EBP + 0x8]
0043cf2c  PUSH EAX
0043cf2d  CALL 0x005dcb00
0043cf32  ADD ESP,0x4
0043cf35  CMP dword ptr [EAX + 0x4a8],0x0
0043cf3c  JGE 0x0043cf54
0043cf3e  MOV ECX,dword ptr [EBP + 0x8]
0043cf41  PUSH ECX
0043cf42  CALL 0x005dcb00
0043cf47  ADD ESP,0x4
0043cf4a  MOV dword ptr [EAX + 0x4a8],0x0
0043cf54  MOV EDX,dword ptr [EBP + 0x8]
0043cf57  PUSH EDX
0043cf58  CALL 0x005dcb00
0043cf5d  ADD ESP,0x4
0043cf60  MOV ECX,EAX
0043cf62  CALL 0x005d7540
0043cf67  MOV EAX,dword ptr [EBP + -0x8]
0043cf6a  MOV dword ptr [EBP + -0x20],EAX
0043cf6d  MOV ECX,dword ptr [EBP + -0x4]
0043cf70  MOV dword ptr [EBP + -0x1c],ECX
0043cf73  SUB ESP,0x8
0043cf76  FLD double ptr [EBP + -0x18]
0043cf79  FSTP double ptr [ESP]
0043cf7c  LEA ECX,[EBP + -0x20]
0043cf7f  CALL 0x0064c560
0043cf84  CMP dword ptr [EBP + -0x20],0x3b9aca00
0043cf8b  JLE 0x0043cf9b
0043cf8d  MOV dword ptr [EBP + -0x20],0x3b9aca00
0043cf94  MOV dword ptr [EBP + -0x1c],0x0
0043cf9b  MOV EDX,dword ptr [EBP + -0x4]
0043cf9e  PUSH EDX
0043cf9f  MOV EAX,dword ptr [EBP + -0x8]
0043cfa2  PUSH EAX
0043cfa3  LEA ECX,[EBP + -0x38]
0043cfa6  PUSH ECX
0043cfa7  LEA ECX,[EBP + -0x20]
0043cfaa  CALL 0x0064c5c0
0043cfaf  MOV EDX,dword ptr [EAX]
0043cfb1  MOV EAX,dword ptr [EAX + 0x4]
0043cfb4  MOV dword ptr [EBP + -0x10],EDX
0043cfb7  MOV dword ptr [EBP + -0xc],EAX
0043cfba  CMP dword ptr [EBP + -0x10],0x3b9aca00
0043cfc1  JL 0x0043cfe4
0043cfc3  PUSH 0x0
0043cfc5  PUSH 0x3b9aca00
0043cfca  CALL 0x0064c8a0
0043cfcf  ADD ESP,0x8
0043cfd2  MOV dword ptr [EBP + -0x40],EAX
0043cfd5  MOV dword ptr [EBP + -0x3c],EDX
0043cfd8  MOV ECX,dword ptr [EBP + -0x40]
0043cfdb  MOV dword ptr [EBP + -0x10],ECX
0043cfde  MOV EDX,dword ptr [EBP + -0x3c]
0043cfe1  MOV dword ptr [EBP + -0xc],EDX
0043cfe4  MOV ECX,dword ptr [EBP + -0x44]
0043cfe7  CALL 0x005f5400
0043cfec  PUSH EAX
0043cfed  MOV ECX,dword ptr [0x007906d4]
0043cff3  CALL 0x00438870
0043cff8  MOVZX EAX,AL
0043cffb  TEST EAX,EAX
0043cffd  JZ 0x0043d03a
0043cfff  MOV ECX,dword ptr [EBP + -0x1c]
0043d002  PUSH ECX
0043d003  MOV EDX,dword ptr [EBP + -0x20]
0043d006  PUSH EDX
0043d007  MOV EAX,dword ptr [EBP + 0x8]
0043d00a  PUSH EAX
0043d00b  CALL 0x005dcb00
0043d010  ADD ESP,0x4
0043d013  MOV ECX,EAX
0043d015  CALL 0x005d5cf0
0043d01a  PUSH 0x0
0043d01c  MOV ECX,dword ptr [EBP + 0x8]
0043d01f  PUSH ECX
0043d020  MOV EDX,dword ptr [EBP + -0x4]
0043d023  PUSH EDX
0043d024  MOV EAX,dword ptr [EBP + -0x8]
0043d027  PUSH EAX
0043d028  MOV ECX,dword ptr [EBP + -0x44]
0043d02b  MOV EDX,dword ptr [ECX]
0043d02d  MOV ECX,dword ptr [EBP + -0x44]
0043d030  MOV EAX,dword ptr [EDX + 0xb8]
0043d036  CALL EAX
0043d038  JMP 0x0043d073
0043d03a  MOV ECX,dword ptr [EBP + -0xc]
0043d03d  PUSH ECX
0043d03e  MOV EDX,dword ptr [EBP + -0x10]
0043d041  PUSH EDX
0043d042  MOV EAX,dword ptr [EBP + 0x8]
0043d045  PUSH EAX
0043d046  CALL 0x005dcb00
0043d04b  ADD ESP,0x4
0043d04e  MOV ECX,EAX
0043d050  CALL 0x005d5cf0
0043d055  PUSH 0x0
0043d057  MOV ECX,dword ptr [EBP + 0x8]
0043d05a  PUSH ECX
0043d05b  MOV EDX,dword ptr [EBP + -0xc]
0043d05e  PUSH EDX
0043d05f  MOV EAX,dword ptr [EBP + -0x10]
0043d062  PUSH EAX
0043d063  MOV ECX,dword ptr [EBP + -0x44]
0043d066  MOV EDX,dword ptr [ECX]
0043d068  MOV ECX,dword ptr [EBP + -0x44]
0043d06b  MOV EAX,dword ptr [EDX + 0xb8]
0043d071  CALL EAX
0043d073  MOV ECX,dword ptr [EBP + -0x1c]
0043d076  PUSH ECX
0043d077  MOV EDX,dword ptr [EBP + -0x20]
0043d07a  PUSH EDX
0043d07b  MOV EAX,dword ptr [EBP + 0x8]
0043d07e  PUSH EAX
0043d07f  CALL 0x005dcb00
0043d084  ADD ESP,0x4
0043d087  MOV ECX,EAX
0043d089  CALL 0x005d5fb0
0043d08e  MOV ECX,dword ptr [EBP + -0x44]
0043d091  MOV dword ptr [ECX + 0x110],0x1
0043d09b  MOV EDX,dword ptr [EBP + 0xc]
0043d09e  PUSH EDX
0043d09f  MOV EAX,dword ptr [EBP + 0x8]
0043d0a2  PUSH EAX
0043d0a3  MOV ECX,dword ptr [EBP + -0x44]
0043d0a6  PUSH ECX
0043d0a7  MOV ECX,dword ptr [0x007906d4]
0043d0ad  CALL 0x00434820
0043d0b2  MOV EDX,dword ptr [0x007906dc]
0043d0b8  MOV ECX,dword ptr [EDX + EAX*0x4 + 0x14]
0043d0bc  CALL 0x0042c5f0
0043d0c1  MOV ESP,EBP
0043d0c3  POP EBP
0043d0c4  RET 0x8
