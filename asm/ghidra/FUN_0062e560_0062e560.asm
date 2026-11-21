; FUN_0062e560  0062e560
0062e560  PUSH EBP
0062e561  MOV EBP,ESP
0062e563  SUB ESP,0x34
0062e566  MOV dword ptr [EBP + -0x34],ECX
0062e569  MOV EAX,dword ptr [EBP + -0x34]
0062e56c  CMP dword ptr [EAX + 0x408],0x0
0062e573  JNZ 0x0062e57a
0062e575  JMP 0x0062e6a8
0062e57a  MOV ECX,dword ptr [EBP + -0x34]
0062e57d  CALL 0x0062e360
0062e582  MOV dword ptr [EBP + -0x2c],EAX
0062e585  MOV ECX,dword ptr [EBP + -0x34]
0062e588  CALL 0x0062e340
0062e58d  MOV dword ptr [EBP + -0x28],EAX
0062e590  MOV dword ptr [EBP + -0x24],0x0
0062e597  MOV dword ptr [EBP + -0x20],0x0
0062e59e  MOV ECX,dword ptr [EBP + -0x28]
0062e5a1  MOV dword ptr [EBP + -0x1c],ECX
0062e5a4  MOV EDX,dword ptr [EBP + -0x2c]
0062e5a7  MOV dword ptr [EBP + -0x18],EDX
0062e5aa  LEA EAX,[EBP + 0x8]
0062e5ad  PUSH EAX
0062e5ae  LEA ECX,[EBP + -0x24]
0062e5b1  PUSH ECX
0062e5b2  LEA EDX,[EBP + 0x8]
0062e5b5  PUSH EDX
0062e5b6  CALL 0x005ec3a0
0062e5bb  ADD ESP,0xc
0062e5be  MOV EAX,dword ptr [EBP + 0x8]
0062e5c1  CMP EAX,dword ptr [EBP + 0x10]
0062e5c4  JL 0x0062e5cc
0062e5c6  MOV byte ptr [EBP + -0x2d],0x1
0062e5ca  JMP 0x0062e5de
0062e5cc  MOV ECX,dword ptr [EBP + 0xc]
0062e5cf  CMP ECX,dword ptr [EBP + 0x14]
0062e5d2  JL 0x0062e5da
0062e5d4  MOV byte ptr [EBP + -0x2d],0x1
0062e5d8  JMP 0x0062e5de
0062e5da  MOV byte ptr [EBP + -0x2d],0x0
0062e5de  MOVZX EDX,byte ptr [EBP + -0x2d]
0062e5e2  TEST EDX,EDX
0062e5e4  JZ 0x0062e5eb
0062e5e6  JMP 0x0062e6a8
0062e5eb  MOV EAX,dword ptr [EBP + -0x34]
0062e5ee  MOV ECX,dword ptr [EAX + 0x408]
0062e5f4  MOV dword ptr [EBP + -0x14],ECX
0062e5f7  CMP dword ptr [EBP + -0x14],0x0
0062e5fb  JZ 0x0062e6a8
0062e601  MOV EDX,dword ptr [EBP + 0xc]
0062e604  MOV dword ptr [EBP + -0x4],EDX
0062e607  JMP 0x0062e612
0062e609  MOV EAX,dword ptr [EBP + -0x4]
0062e60c  ADD EAX,0x1
0062e60f  MOV dword ptr [EBP + -0x4],EAX
0062e612  MOV ECX,dword ptr [EBP + -0x4]
0062e615  CMP ECX,dword ptr [EBP + 0x14]
0062e618  JGE 0x0062e6a8
0062e61e  MOV EDX,dword ptr [EBP + -0x34]
0062e621  MOV EAX,dword ptr [EBP + -0x4]
0062e624  IMUL EAX,dword ptr [EDX + 0x414]
0062e62b  MOV ECX,dword ptr [EBP + -0x34]
0062e62e  MOV EDX,dword ptr [EBP + 0x8]
0062e631  IMUL EDX,dword ptr [ECX + 0x418]
0062e638  ADD EAX,EDX
0062e63a  MOV dword ptr [EBP + -0xc],EAX
0062e63d  MOV EAX,dword ptr [EBP + -0x34]
0062e640  MOV ECX,dword ptr [EBP + -0x4]
0062e643  IMUL ECX,dword ptr [EAX + 0x414]
0062e64a  MOV EDX,dword ptr [EBP + -0x34]
0062e64d  MOV EAX,dword ptr [EBP + 0x8]
0062e650  IMUL EAX,dword ptr [EDX + 0x418]
0062e657  ADD ECX,EAX
0062e659  MOV EDX,dword ptr [EBP + 0x10]
0062e65c  SUB EDX,dword ptr [EBP + 0x8]
0062e65f  MOV EAX,dword ptr [EBP + -0x34]
0062e662  IMUL EDX,dword ptr [EAX + 0x418]
0062e669  ADD ECX,EDX
0062e66b  MOV dword ptr [EBP + -0x10],ECX
0062e66e  MOV ECX,dword ptr [EBP + -0xc]
0062e671  MOV dword ptr [EBP + -0x8],ECX
0062e674  JMP 0x0062e685
0062e676  MOV EDX,dword ptr [EBP + -0x34]
0062e679  MOV EAX,dword ptr [EBP + -0x8]
0062e67c  ADD EAX,dword ptr [EDX + 0x418]
0062e682  MOV dword ptr [EBP + -0x8],EAX
0062e685  MOV ECX,dword ptr [EBP + -0x8]
0062e688  CMP ECX,dword ptr [EBP + -0x10]
0062e68b  JGE 0x0062e6a3
0062e68d  MOV EDX,dword ptr [EBP + 0x18]
0062e690  PUSH EDX
0062e691  CALL 0x00617b30
0062e696  ADD ESP,0x4
0062e699  MOV ECX,dword ptr [EBP + -0x14]
0062e69c  ADD ECX,dword ptr [EBP + -0x8]
0062e69f  MOV dword ptr [ECX],EAX
0062e6a1  JMP 0x0062e676
0062e6a3  JMP 0x0062e609
0062e6a8  MOV ESP,EBP
0062e6aa  POP EBP
0062e6ab  RET 0x14
