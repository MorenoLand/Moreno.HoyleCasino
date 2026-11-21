; FUN_005c0a00  005c0a00
005c0a00  PUSH EBP
005c0a01  MOV EBP,ESP
005c0a03  PUSH -0x1
005c0a05  PUSH 0x6a8409
005c0a0a  MOV EAX,FS:[0x0]
005c0a10  PUSH EAX
005c0a11  SUB ESP,0xd4
005c0a17  MOV EAX,[0x00781870]
005c0a1c  XOR EAX,EBP
005c0a1e  PUSH EAX
005c0a1f  LEA EAX,[EBP + -0xc]
005c0a22  MOV FS:[0x0],EAX
005c0a28  MOV dword ptr [EBP + 0xffffff20],ECX
005c0a2e  MOV ECX,dword ptr [EBP + 0xffffff20]
005c0a34  CALL 0x005e9e20
005c0a39  MOV dword ptr [EBP + -0x4],0x0
005c0a40  MOV EAX,dword ptr [EBP + 0xffffff20]
005c0a46  MOV dword ptr [EAX],0x6d1d3c
005c0a4c  MOV ECX,dword ptr [EBP + 0xffffff20]
005c0a52  ADD ECX,0x18
005c0a55  MOV dword ptr [EBP + -0x74],ECX
005c0a58  LEA EDX,[EBP + -0x15]
005c0a5b  MOV dword ptr [EBP + -0x14],EDX
005c0a5e  PUSH 0x0
005c0a60  MOV ECX,dword ptr [EBP + -0x74]
005c0a63  CALL 0x005c6770
005c0a68  MOV byte ptr [EBP + -0x4],0x1
005c0a6c  MOV EAX,dword ptr [EBP + 0xffffff20]
005c0a72  ADD EAX,0x28
005c0a75  MOV dword ptr [EBP + 0xffffff24],EAX
005c0a7b  LEA ECX,[EBP + -0x7d]
005c0a7e  MOV dword ptr [EBP + -0x7c],ECX
005c0a81  PUSH 0x0
005c0a83  MOV ECX,dword ptr [EBP + 0xffffff24]
005c0a89  CALL 0x005c6810
005c0a8e  MOV EDX,dword ptr [EBP + 0xffffff20]
005c0a94  MOV dword ptr [EDX + 0x4],0x0
005c0a9b  MOV EAX,dword ptr [EBP + 0xffffff20]
005c0aa1  MOV dword ptr [EAX + 0x8],0x0
005c0aa8  MOV ECX,dword ptr [EBP + 0xffffff20]
005c0aae  MOV dword ptr [ECX + 0x38],0x0
005c0ab5  MOV EDX,dword ptr [EBP + 0xffffff20]
005c0abb  MOV dword ptr [EDX + 0x3c],0x0
005c0ac2  MOV EAX,dword ptr [EBP + 0xffffff20]
005c0ac8  MOV dword ptr [EAX + 0x40],0x0
005c0acf  MOV ECX,dword ptr [EBP + 0xffffff20]
005c0ad5  MOV dword ptr [ECX + 0x44],0x0
005c0adc  MOV EDX,dword ptr [EBP + 0xffffff20]
005c0ae2  MOV dword ptr [EDX + 0x48],0x0
005c0ae9  MOV EAX,dword ptr [EBP + 0xffffff20]
005c0aef  MOV dword ptr [EAX + 0xc],0x0
005c0af6  MOV ECX,dword ptr [EBP + 0xffffff20]
005c0afc  MOV dword ptr [ECX + 0x10],0x0
005c0b03  MOV EDX,dword ptr [EBP + 0xffffff20]
005c0b09  MOV dword ptr [EDX + 0x14],0x0
005c0b10  MOV EAX,dword ptr [EBP + 0xffffff20]
005c0b16  MOV dword ptr [EAX + 0x4c],0x0
005c0b1d  MOV dword ptr [EBP + -0x4],0xffffffff
005c0b24  MOV EAX,dword ptr [EBP + 0xffffff20]
005c0b2a  MOV ECX,dword ptr [EBP + -0xc]
005c0b2d  MOV dword ptr FS:[0x0],ECX
005c0b34  POP ECX
005c0b35  MOV ESP,EBP
005c0b37  POP EBP
005c0b38  RET
