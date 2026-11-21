; FUN_005f5ad0  005f5ad0
005f5ad0  PUSH EBP
005f5ad1  MOV EBP,ESP
005f5ad3  SUB ESP,0x24
005f5ad6  MOV dword ptr [EBP + -0x14],ECX
005f5ad9  CMP dword ptr [EBP + 0x18],0x0
005f5add  JZ 0x005f5b6f
005f5ae3  MOV EAX,dword ptr [EBP + 0x18]
005f5ae6  CMP dword ptr [EAX],0x0
005f5ae9  JL 0x005f5af5
005f5aeb  MOV ECX,dword ptr [EBP + 0x18]
005f5aee  MOV EDX,dword ptr [ECX]
005f5af0  MOV dword ptr [EBP + -0x18],EDX
005f5af3  JMP 0x005f5afe
005f5af5  MOV EAX,dword ptr [EBP + -0x14]
005f5af8  MOV ECX,dword ptr [EAX + 0x10]
005f5afb  MOV dword ptr [EBP + -0x18],ECX
005f5afe  MOV EDX,dword ptr [EBP + -0x18]
005f5b01  MOV dword ptr [EBP + -0x10],EDX
005f5b04  MOV EAX,dword ptr [EBP + 0x18]
005f5b07  CMP dword ptr [EAX + 0x4],0x0
005f5b0b  JL 0x005f5b18
005f5b0d  MOV ECX,dword ptr [EBP + 0x18]
005f5b10  MOV EDX,dword ptr [ECX + 0x4]
005f5b13  MOV dword ptr [EBP + -0x1c],EDX
005f5b16  JMP 0x005f5b21
005f5b18  MOV EAX,dword ptr [EBP + -0x14]
005f5b1b  MOV ECX,dword ptr [EAX + 0x14]
005f5b1e  MOV dword ptr [EBP + -0x1c],ECX
005f5b21  MOV EDX,dword ptr [EBP + -0x1c]
005f5b24  MOV dword ptr [EBP + -0xc],EDX
005f5b27  MOV EAX,dword ptr [EBP + 0x18]
005f5b2a  CMP dword ptr [EAX + 0x8],0x0
005f5b2e  JL 0x005f5b3b
005f5b30  MOV ECX,dword ptr [EBP + 0x18]
005f5b33  MOV EDX,dword ptr [ECX + 0x8]
005f5b36  MOV dword ptr [EBP + -0x20],EDX
005f5b39  JMP 0x005f5b44
005f5b3b  MOV EAX,dword ptr [EBP + -0x14]
005f5b3e  MOV ECX,dword ptr [EAX + 0x18]
005f5b41  MOV dword ptr [EBP + -0x20],ECX
005f5b44  MOV EDX,dword ptr [EBP + -0x20]
005f5b47  MOV dword ptr [EBP + -0x8],EDX
005f5b4a  MOV EAX,dword ptr [EBP + 0x18]
005f5b4d  CMP dword ptr [EAX + 0xc],0x0
005f5b51  JL 0x005f5b5e
005f5b53  MOV ECX,dword ptr [EBP + 0x18]
005f5b56  MOV EDX,dword ptr [ECX + 0xc]
005f5b59  MOV dword ptr [EBP + -0x24],EDX
005f5b5c  JMP 0x005f5b67
005f5b5e  MOV EAX,dword ptr [EBP + -0x14]
005f5b61  MOV ECX,dword ptr [EAX + 0x1c]
005f5b64  MOV dword ptr [EBP + -0x24],ECX
005f5b67  MOV EDX,dword ptr [EBP + -0x24]
005f5b6a  MOV dword ptr [EBP + -0x4],EDX
005f5b6d  JMP 0x005f5b93
005f5b6f  MOV EAX,dword ptr [EBP + -0x14]
005f5b72  MOV ECX,dword ptr [EAX + 0x10]
005f5b75  MOV dword ptr [EBP + -0x10],ECX
005f5b78  MOV EDX,dword ptr [EBP + -0x14]
005f5b7b  MOV EAX,dword ptr [EDX + 0x14]
005f5b7e  MOV dword ptr [EBP + -0xc],EAX
005f5b81  MOV ECX,dword ptr [EBP + -0x14]
005f5b84  MOV EDX,dword ptr [ECX + 0x18]
005f5b87  MOV dword ptr [EBP + -0x8],EDX
005f5b8a  MOV EAX,dword ptr [EBP + -0x14]
005f5b8d  MOV ECX,dword ptr [EAX + 0x1c]
005f5b90  MOV dword ptr [EBP + -0x4],ECX
005f5b93  MOV EDX,dword ptr [EBP + 0x14]
005f5b96  PUSH EDX
005f5b97  MOV EAX,dword ptr [EBP + 0x10]
005f5b9a  PUSH EAX
005f5b9b  MOV ECX,dword ptr [EBP + 0xc]
005f5b9e  PUSH ECX
005f5b9f  LEA EDX,[EBP + -0x10]
005f5ba2  PUSH EDX
005f5ba3  MOV ECX,dword ptr [EBP + 0x8]
005f5ba6  CALL 0x00625350
005f5bab  MOV ESP,EBP
005f5bad  POP EBP
005f5bae  RET 0x14
