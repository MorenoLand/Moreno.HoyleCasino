; FUN_005f9a80  005f9a80
005f9a80  PUSH EBP
005f9a81  MOV EBP,ESP
005f9a83  SUB ESP,0x2c
005f9a86  MOV dword ptr [EBP + -0x28],ECX
005f9a89  MOV EAX,dword ptr [EBP + -0x28]
005f9a8c  MOV ECX,dword ptr [EAX + 0x10c]
005f9a92  MOV dword ptr [EBP + -0x20],ECX
005f9a95  MOV EDX,dword ptr [EBP + -0x28]
005f9a98  MOV EAX,dword ptr [EDX + 0x110]
005f9a9e  MOV dword ptr [EBP + -0x1c],EAX
005f9aa1  MOV ECX,dword ptr [EBP + -0x28]
005f9aa4  MOV EDX,dword ptr [ECX + 0x104]
005f9aaa  MOV dword ptr [EBP + -0x18],EDX
005f9aad  MOV EAX,dword ptr [EBP + -0x28]
005f9ab0  MOV ECX,dword ptr [EAX + 0x108]
005f9ab6  MOV dword ptr [EBP + -0x14],ECX
005f9ab9  MOV EDX,dword ptr [EBP + -0x14]
005f9abc  MOV dword ptr [EBP + -0x10],EDX
005f9abf  MOV EAX,dword ptr [EBP + -0x18]
005f9ac2  MOV dword ptr [EBP + -0xc],EAX
005f9ac5  MOV ECX,dword ptr [EBP + -0x1c]
005f9ac8  MOV dword ptr [EBP + -0x8],ECX
005f9acb  MOV EDX,dword ptr [EBP + -0x20]
005f9ace  MOV dword ptr [EBP + -0x4],EDX
005f9ad1  MOV EAX,dword ptr [EBP + -0x24]
005f9ad4  MOV dword ptr [EBP + -0x2c],EAX
005f9ad7  MOV ECX,dword ptr [EBP + -0x28]
005f9ada  MOV EDX,dword ptr [ECX + 0x1a8]
005f9ae0  MOV dword ptr [EBP + -0x2c],EDX
005f9ae3  LEA EAX,[EBP + -0x10]
005f9ae6  PUSH EAX
005f9ae7  MOV ECX,dword ptr [EBP + -0x2c]
005f9aea  MOV EDX,dword ptr [ECX]
005f9aec  MOV ECX,dword ptr [EBP + -0x2c]
005f9aef  MOV EAX,dword ptr [EDX + 0x14]
005f9af2  CALL EAX
005f9af4  MOV ESP,EBP
005f9af6  POP EBP
005f9af7  RET
