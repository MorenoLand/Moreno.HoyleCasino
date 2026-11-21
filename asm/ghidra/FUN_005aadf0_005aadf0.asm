; FUN_005aadf0  005aadf0
005aadf0  PUSH EBP
005aadf1  MOV EBP,ESP
005aadf3  PUSH -0x1
005aadf5  PUSH 0x6a7b88
005aadfa  MOV EAX,FS:[0x0]
005aae00  PUSH EAX
005aae01  SUB ESP,0x8
005aae04  MOV EAX,[0x00781870]
005aae09  XOR EAX,EBP
005aae0b  PUSH EAX
005aae0c  LEA EAX,[EBP + -0xc]
005aae0f  MOV FS:[0x0],EAX
005aae15  MOV dword ptr [EBP + -0x10],ECX
005aae18  MOV EAX,dword ptr [EBP + 0x10]
005aae1b  PUSH EAX
005aae1c  MOV ECX,dword ptr [EBP + -0x10]
005aae1f  CALL 0x005fc0d0
005aae24  MOV dword ptr [EBP + -0x4],0x0
005aae2b  MOV ECX,dword ptr [EBP + -0x10]
005aae2e  MOV dword ptr [ECX],0x6cfcd8
005aae34  MOV EDX,dword ptr [EBP + -0x10]
005aae37  MOV EAX,dword ptr [EBP + 0x8]
005aae3a  MOV dword ptr [EDX + 0x20],EAX
005aae3d  MOV ECX,dword ptr [EBP + -0x10]
005aae40  MOV DL,byte ptr [EBP + 0xc]
005aae43  MOV byte ptr [ECX + 0x24],DL
005aae46  MOV EAX,dword ptr [EBP + -0x10]
005aae49  MOV byte ptr [EAX + 0x25],0x0
005aae4d  MOV ECX,dword ptr [EBP + -0x10]
005aae50  MOV EDX,dword ptr [ECX + 0x20]
005aae53  MOV dword ptr [EBP + -0x14],EDX
005aae56  CMP dword ptr [EBP + -0x14],0x4
005aae5a  JA 0x005aaece
005aae5c  MOV EAX,dword ptr [EBP + -0x14]
005aae5f  JMP dword ptr [EAX*0x4 + 0x5aaf90]
005aaece  XOR EAX,EAX
005aaed0  JNZ 0x005aaee9
005aaed2  PUSH 0x4b3
005aaed7  PUSH 0x6cf934
005aaedc  PUSH 0x6b2f58
005aaee1  CALL 0x005e9f20
005aaee6  ADD ESP,0xc
005aaee9  PUSH 0x13a6
005aaeee  MOV EDX,dword ptr [0x007935f8]
005aaef4  MOV ECX,dword ptr [EDX + 0x3c]
005aaef7  CALL 0x005eaf00
005aaefc  PUSH 0x0
005aaefe  MOV EAX,[0x007935f8]
005aaf03  MOV ECX,dword ptr [EAX + 0x40]
005aaf06  MOV EDX,dword ptr [0x007935f8]
005aaf0c  MOV EAX,dword ptr [EDX + 0x40]
005aaf0f  MOV EDX,dword ptr [ECX]
005aaf11  MOV ECX,EAX
005aaf13  MOV EAX,dword ptr [EDX + 0xb0]
005aaf19  CALL EAX
005aaf1b  PUSH 0x0
005aaf1d  MOV ECX,dword ptr [0x007935f8]
005aaf23  MOV EDX,dword ptr [ECX + 0x3c]
005aaf26  MOV EAX,[0x007935f8]
005aaf2b  MOV ECX,dword ptr [EAX + 0x3c]
005aaf2e  MOV EDX,dword ptr [EDX]
005aaf30  MOV EAX,dword ptr [EDX + 0xb0]
005aaf36  CALL EAX
005aaf38  PUSH 0x96
005aaf3d  MOV ECX,dword ptr [0x007935f8]
005aaf43  MOV EDX,dword ptr [ECX + 0x40]
005aaf46  MOV EAX,[0x007935f8]
005aaf4b  MOV ECX,dword ptr [EAX + 0x40]
005aaf4e  MOV EDX,dword ptr [EDX]
005aaf50  MOV EAX,dword ptr [EDX + 0x6c]
005aaf53  CALL EAX
005aaf55  PUSH 0x97
005aaf5a  MOV ECX,dword ptr [0x007935f8]
005aaf60  MOV EDX,dword ptr [ECX + 0x3c]
005aaf63  MOV EAX,[0x007935f8]
005aaf68  MOV ECX,dword ptr [EAX + 0x3c]
005aaf6b  MOV EDX,dword ptr [EDX]
005aaf6d  MOV EAX,dword ptr [EDX + 0x6c]
005aaf70  CALL EAX
005aaf72  MOV dword ptr [EBP + -0x4],0xffffffff
005aaf79  MOV EAX,dword ptr [EBP + -0x10]
005aaf7c  MOV ECX,dword ptr [EBP + -0xc]
005aaf7f  MOV dword ptr FS:[0x0],ECX
005aaf86  POP ECX
005aaf87  MOV ESP,EBP
005aaf89  POP EBP
005aaf8a  RET 0xc
