; FUN_005f49d0  005f49d0
005f49d0  PUSH EBP
005f49d1  MOV EBP,ESP
005f49d3  PUSH -0x1
005f49d5  PUSH 0x6a9ee8
005f49da  MOV EAX,FS:[0x0]
005f49e0  PUSH EAX
005f49e1  PUSH ECX
005f49e2  MOV EAX,[0x00781870]
005f49e7  XOR EAX,EBP
005f49e9  PUSH EAX
005f49ea  LEA EAX,[EBP + -0xc]
005f49ed  MOV FS:[0x0],EAX
005f49f3  MOV dword ptr [EBP + -0x10],ECX
005f49f6  MOV ECX,dword ptr [EBP + -0x10]
005f49f9  CALL 0x005e9e20
005f49fe  MOV dword ptr [EBP + -0x4],0x0
005f4a05  MOV EAX,dword ptr [EBP + -0x10]
005f4a08  MOV dword ptr [EAX],0x6d68ac
005f4a0e  MOV ECX,dword ptr [EBP + -0x10]
005f4a11  MOV dword ptr [ECX + 0xc],0xffffffff
005f4a18  MOV EDX,dword ptr [EBP + -0x10]
005f4a1b  MOV dword ptr [EDX + 0x10],0x0
005f4a22  MOV EAX,dword ptr [EBP + -0x10]
005f4a25  MOV dword ptr [EAX + 0x14],0x0
005f4a2c  MOV ECX,dword ptr [EBP + -0x10]
005f4a2f  MOV dword ptr [ECX + 0x18],0x0
005f4a36  MOV EDX,dword ptr [EBP + -0x10]
005f4a39  MOV dword ptr [EDX + 0x1c],0x0
005f4a40  MOV EAX,dword ptr [EBP + -0x10]
005f4a43  MOV dword ptr [EAX + 0x20],0x0
005f4a4a  MOV ECX,dword ptr [EBP + -0x10]
005f4a4d  MOV byte ptr [ECX + 0x24],0x1
005f4a51  MOV EDX,dword ptr [EBP + -0x10]
005f4a54  MOV dword ptr [EDX + 0x4],0x0
005f4a5b  MOV EAX,dword ptr [EBP + -0x10]
005f4a5e  MOV dword ptr [EAX + 0x28],0x0
005f4a65  MOV ECX,dword ptr [EBP + -0x10]
005f4a68  MOV byte ptr [ECX + 0x8],0x0
005f4a6c  MOV EDX,dword ptr [EBP + -0x10]
005f4a6f  MOV byte ptr [EDX + 0x9],0x0
005f4a73  MOV EAX,dword ptr [EBP + -0x10]
005f4a76  MOV byte ptr [EAX + 0xa],0x0
005f4a7a  MOV ECX,dword ptr [EBP + -0x10]
005f4a7d  PUSH ECX
005f4a7e  MOV ECX,0x795098
005f4a83  CALL 0x0060c7d0
005f4a88  MOV EDX,dword ptr [EBP + -0x10]
005f4a8b  MOV dword ptr [EDX + 0x2c],0x0
005f4a92  MOV EAX,dword ptr [EBP + -0x10]
005f4a95  MOV dword ptr [EAX + 0x30],0x0
005f4a9c  MOV ECX,dword ptr [EBP + -0x10]
005f4a9f  MOV dword ptr [ECX + 0x40],0x1
005f4aa6  MOV EDX,dword ptr [EBP + -0x10]
005f4aa9  MOV byte ptr [EDX + 0x44],0x0
005f4aad  MOV dword ptr [EBP + -0x4],0xffffffff
005f4ab4  MOV EAX,dword ptr [EBP + -0x10]
005f4ab7  MOV ECX,dword ptr [EBP + -0xc]
005f4aba  MOV dword ptr FS:[0x0],ECX
005f4ac1  POP ECX
005f4ac2  MOV ESP,EBP
005f4ac4  POP EBP
005f4ac5  RET
