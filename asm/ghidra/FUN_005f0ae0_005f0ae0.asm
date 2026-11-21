; FUN_005f0ae0  005f0ae0
005f0ae0  PUSH EBP
005f0ae1  MOV EBP,ESP
005f0ae3  SUB ESP,0x2c
005f0ae6  MOV dword ptr [EBP + -0x28],ECX
005f0ae9  MOV EAX,dword ptr [EBP + -0x28]
005f0aec  MOV ECX,dword ptr [EAX + 0x1c]
005f0aef  MOV dword ptr [EBP + -0x20],ECX
005f0af2  MOV EDX,dword ptr [EBP + -0x28]
005f0af5  MOV EAX,dword ptr [EDX + 0x18]
005f0af8  MOV dword ptr [EBP + -0x1c],EAX
005f0afb  MOV ECX,dword ptr [EBP + -0x28]
005f0afe  MOV EDX,dword ptr [ECX + 0x14]
005f0b01  MOV dword ptr [EBP + -0x18],EDX
005f0b04  MOV EAX,dword ptr [EBP + -0x28]
005f0b07  MOV ECX,dword ptr [EAX + 0x10]
005f0b0a  MOV dword ptr [EBP + -0x14],ECX
005f0b0d  MOV EDX,dword ptr [EBP + -0x14]
005f0b10  MOV dword ptr [EBP + -0x10],EDX
005f0b13  MOV EAX,dword ptr [EBP + -0x18]
005f0b16  MOV dword ptr [EBP + -0xc],EAX
005f0b19  MOV ECX,dword ptr [EBP + -0x1c]
005f0b1c  MOV dword ptr [EBP + -0x8],ECX
005f0b1f  MOV EDX,dword ptr [EBP + -0x20]
005f0b22  MOV dword ptr [EBP + -0x4],EDX
005f0b25  MOV AL,byte ptr [EBP + 0x8]
005f0b28  PUSH EAX
005f0b29  MOV ECX,dword ptr [EBP + -0x28]
005f0b2c  CALL 0x005f62f0
005f0b31  MOV ECX,dword ptr [EBP + -0x28]
005f0b34  MOV DL,byte ptr [EBP + 0x8]
005f0b37  MOV byte ptr [ECX + 0x9c],DL
005f0b3d  MOV EAX,dword ptr [EBP + -0x28]
005f0b40  CMP dword ptr [EAX + 0x28],0x0
005f0b44  JZ 0x005f0b7b
005f0b46  MOV ECX,dword ptr [EBP + -0x28]
005f0b49  CALL 0x005f54a0
005f0b4e  MOVZX ECX,AL
005f0b51  TEST ECX,ECX
005f0b53  JZ 0x005f0b7b
005f0b55  MOV EDX,dword ptr [EBP + -0x24]
005f0b58  MOV dword ptr [EBP + -0x2c],EDX
005f0b5b  MOV EAX,dword ptr [EBP + -0x28]
005f0b5e  MOV ECX,dword ptr [EAX + 0x4]
005f0b61  MOV EDX,dword ptr [ECX + 0x1a8]
005f0b67  MOV dword ptr [EBP + -0x2c],EDX
005f0b6a  LEA EAX,[EBP + -0x10]
005f0b6d  PUSH EAX
005f0b6e  MOV ECX,dword ptr [EBP + -0x2c]
005f0b71  MOV EDX,dword ptr [ECX]
005f0b73  MOV ECX,dword ptr [EBP + -0x2c]
005f0b76  MOV EAX,dword ptr [EDX + 0x14]
005f0b79  CALL EAX
005f0b7b  MOV ESP,EBP
005f0b7d  POP EBP
005f0b7e  RET 0x4
