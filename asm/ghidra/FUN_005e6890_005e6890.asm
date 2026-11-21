; FUN_005e6890  005e6890
005e6890  PUSH EBP
005e6891  MOV EBP,ESP
005e6893  PUSH -0x1
005e6895  PUSH 0x6a9958
005e689a  MOV EAX,FS:[0x0]
005e68a0  PUSH EAX
005e68a1  SUB ESP,0xc
005e68a4  MOV EAX,[0x00781870]
005e68a9  XOR EAX,EBP
005e68ab  PUSH EAX
005e68ac  LEA EAX,[EBP + -0xc]
005e68af  MOV FS:[0x0],EAX
005e68b5  MOV dword ptr [EBP + -0x18],ECX
005e68b8  PUSH 0x0
005e68ba  PUSH 0x1
005e68bc  MOV ECX,dword ptr [EBP + -0x18]
005e68bf  CALL 0x005f71f0
005e68c4  MOV dword ptr [EBP + -0x4],0x0
005e68cb  MOV EAX,dword ptr [EBP + -0x18]
005e68ce  MOV dword ptr [EAX],0x6d5c0c
005e68d4  MOV ECX,dword ptr [EBP + -0x18]
005e68d7  MOV byte ptr [ECX + 0x1bc],0x0
005e68de  MOV dword ptr [EBP + -0x10],0x0
005e68e5  JMP 0x005e68f0
005e68e7  MOV EDX,dword ptr [EBP + -0x10]
005e68ea  ADD EDX,0x1
005e68ed  MOV dword ptr [EBP + -0x10],EDX
005e68f0  CMP dword ptr [EBP + -0x10],0xa
005e68f4  JGE 0x005e692b
005e68f6  MOV EAX,dword ptr [EBP + -0x10]
005e68f9  MOV ECX,dword ptr [EBP + -0x18]
005e68fc  MOV dword ptr [ECX + EAX*0x4 + 0x1c0],0x0
005e6907  MOV EDX,dword ptr [EBP + -0x10]
005e690a  MOV EAX,dword ptr [EBP + -0x18]
005e690d  MOV dword ptr [EAX + EDX*0x4 + 0x1e8],0x0
005e6918  MOV ECX,dword ptr [EBP + -0x10]
005e691b  MOV EDX,dword ptr [EBP + -0x18]
005e691e  MOV dword ptr [EDX + ECX*0x4 + 0x210],0x0
005e6929  JMP 0x005e68e7
005e692b  PUSH 0x28
005e692d  CALL 0x00686d82
005e6932  ADD ESP,0x4
005e6935  MOV dword ptr [EBP + -0x14],EAX
005e6938  MOV EAX,dword ptr [EBP + -0x18]
005e693b  MOV ECX,dword ptr [EBP + -0x14]
005e693e  MOV dword ptr [EAX + 0x238],ECX
005e6944  MOV dword ptr [EBP + -0x10],0x0
005e694b  JMP 0x005e6956
005e694d  MOV EDX,dword ptr [EBP + -0x10]
005e6950  ADD EDX,0x1
005e6953  MOV dword ptr [EBP + -0x10],EDX
005e6956  CMP dword ptr [EBP + -0x10],0xa
005e695a  JGE 0x005e69ae
005e695c  MOV EAX,[0x0162ee84]
005e6961  MOV EDX,dword ptr [EAX]
005e6963  MOV ECX,dword ptr [0x0162ee84]
005e6969  MOV EAX,dword ptr [EDX + 0x31c]
005e696f  CALL EAX
005e6971  MOV ECX,dword ptr [EBP + -0x18]
005e6974  MOV EDX,dword ptr [ECX + 0x238]
005e697a  MOV ECX,dword ptr [EBP + -0x10]
005e697d  MOV dword ptr [EDX + ECX*0x4],EAX
005e6980  MOV EDX,dword ptr [EBP + -0x18]
005e6983  MOV EAX,dword ptr [EDX + 0x238]
005e6989  MOV ECX,dword ptr [EBP + -0x10]
005e698c  MOV EDX,dword ptr [EAX + ECX*0x4]
005e698f  MOV dword ptr [EDX + 0x20],0x0
005e6996  MOV EAX,dword ptr [EBP + -0x18]
005e6999  MOV ECX,dword ptr [EAX + 0x238]
005e699f  MOV EDX,dword ptr [EBP + -0x10]
005e69a2  MOV EAX,dword ptr [ECX + EDX*0x4]
005e69a5  MOV dword ptr [EAX + 0xc],0xffffffff
005e69ac  JMP 0x005e694d
005e69ae  MOV dword ptr [EBP + -0x4],0xffffffff
005e69b5  MOV EAX,dword ptr [EBP + -0x18]
005e69b8  MOV ECX,dword ptr [EBP + -0xc]
005e69bb  MOV dword ptr FS:[0x0],ECX
005e69c2  POP ECX
005e69c3  MOV ESP,EBP
005e69c5  POP EBP
005e69c6  RET
