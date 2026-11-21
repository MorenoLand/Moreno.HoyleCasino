; FUN_0056de20  0056de20
0056de20  PUSH EBP
0056de21  MOV EBP,ESP
0056de23  SUB ESP,0x10
0056de26  MOV dword ptr [EBP + -0x10],ECX
0056de29  MOV word ptr [EBP + -0x4],0x0
0056de2f  JMP 0x0056de3d
0056de31  MOV AX,word ptr [EBP + -0x4]
0056de35  ADD AX,0x1
0056de39  MOV word ptr [EBP + -0x4],AX
0056de3d  MOVSX ECX,word ptr [EBP + -0x4]
0056de41  CMP ECX,0x5
0056de44  JGE 0x0056de6a
0056de46  MOVSX EDX,word ptr [EBP + -0x4]
0056de4a  MOV EAX,dword ptr [EBP + -0x10]
0056de4d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
0056de51  MOVSX EDX,word ptr [EBP + -0x4]
0056de55  MOV EAX,dword ptr [EBP + -0x10]
0056de58  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x8]
0056de5c  MOV EAX,dword ptr [ECX]
0056de5e  MOV ECX,EDX
0056de60  MOV EDX,dword ptr [EAX + 0xcc]
0056de66  CALL EDX
0056de68  JMP 0x0056de31
0056de6a  MOV EAX,dword ptr [EBP + -0x10]
0056de6d  CMP dword ptr [EAX + 0xa4],0x0
0056de74  JNZ 0x0056de8c
0056de76  MOV ECX,dword ptr [EBP + -0x10]
0056de79  MOV EDX,dword ptr [ECX + 0x14]
0056de7c  MOV EAX,dword ptr [EBP + -0x10]
0056de7f  MOV ECX,dword ptr [EAX + 0x14]
0056de82  MOV EDX,dword ptr [EDX]
0056de84  MOV EAX,dword ptr [EDX + 0xd0]
0056de8a  CALL EAX
0056de8c  LEA ECX,[EBP + -0xc]
0056de8f  PUSH ECX
0056de90  PUSH 0x0
0056de92  CALL 0x005dcb00
0056de97  ADD ESP,0x4
0056de9a  MOV ECX,EAX
0056de9c  CALL 0x005d5a90
0056dea1  MOV EDX,dword ptr [EAX + 0x4]
0056dea4  PUSH EDX
0056dea5  MOV EAX,dword ptr [EAX]
0056dea7  PUSH EAX
0056dea8  MOV ECX,dword ptr [EBP + -0x10]
0056deab  CALL 0x0056dc60
0056deb0  TEST EAX,EAX
0056deb2  JNZ 0x0056df10
0056deb4  MOV ECX,dword ptr [EBP + -0x10]
0056deb7  CMP dword ptr [ECX + 0xa0],0x0
0056debe  JNZ 0x0056df10
0056dec0  MOV EDX,dword ptr [EBP + -0x10]
0056dec3  CMP dword ptr [EDX + 0xa4],0x0
0056deca  JNZ 0x0056df10
0056decc  MOV EAX,dword ptr [EBP + -0x10]
0056decf  MOV ECX,dword ptr [EAX + 0x8]
0056ded2  MOV EDX,dword ptr [EBP + -0x10]
0056ded5  MOV EAX,dword ptr [EDX + 0x8]
0056ded8  MOV EDX,dword ptr [ECX]
0056deda  MOV ECX,EAX
0056dedc  MOV EAX,dword ptr [EDX + 0xd0]
0056dee2  CALL EAX
0056dee4  MOV ECX,dword ptr [EBP + -0x10]
0056dee7  MOV EDX,dword ptr [ECX + 0xc]
0056deea  MOV EAX,dword ptr [EBP + -0x10]
0056deed  MOV ECX,dword ptr [EAX + 0xc]
0056def0  MOV EDX,dword ptr [EDX]
0056def2  MOV EAX,dword ptr [EDX + 0xd0]
0056def8  CALL EAX
0056defa  MOV ECX,dword ptr [EBP + -0x10]
0056defd  MOV EDX,dword ptr [ECX + 0x10]
0056df00  MOV EAX,dword ptr [EBP + -0x10]
0056df03  MOV ECX,dword ptr [EAX + 0x10]
0056df06  MOV EDX,dword ptr [EDX]
0056df08  MOV EAX,dword ptr [EDX + 0xd0]
0056df0e  CALL EAX
0056df10  MOV ESP,EBP
0056df12  POP EBP
0056df13  RET
