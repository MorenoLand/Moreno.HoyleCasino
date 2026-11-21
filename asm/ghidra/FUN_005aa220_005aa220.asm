; FUN_005aa220  005aa220
005aa220  PUSH EBP
005aa221  MOV EBP,ESP
005aa223  PUSH -0x1
005aa225  PUSH 0x6a7a81
005aa22a  MOV EAX,FS:[0x0]
005aa230  PUSH EAX
005aa231  SUB ESP,0x1c
005aa234  MOV EAX,[0x00781870]
005aa239  XOR EAX,EBP
005aa23b  PUSH EAX
005aa23c  LEA EAX,[EBP + -0xc]
005aa23f  MOV FS:[0x0],EAX
005aa245  MOV dword ptr [EBP + -0x20],ECX
005aa248  MOV EAX,[0x007935f8]
005aa24d  CMP dword ptr [EAX + 0x40],0x0
005aa251  JZ 0x005aa2d9
005aa257  PUSH 0x13a5
005aa25c  MOV ECX,dword ptr [0x007935f8]
005aa262  MOV ECX,dword ptr [ECX + 0x40]
005aa265  CALL 0x005eaf00
005aa26a  PUSH 0x0
005aa26c  MOV EDX,dword ptr [0x007935f8]
005aa272  MOV EAX,dword ptr [EDX + 0x40]
005aa275  MOV ECX,dword ptr [0x007935f8]
005aa27b  MOV ECX,dword ptr [ECX + 0x40]
005aa27e  MOV EDX,dword ptr [EAX]
005aa280  MOV EAX,dword ptr [EDX + 0xb0]
005aa286  CALL EAX
005aa288  PUSH 0x20
005aa28a  CALL 0x00686d82
005aa28f  ADD ESP,0x4
005aa292  MOV dword ptr [EBP + -0x14],EAX
005aa295  MOV dword ptr [EBP + -0x4],0x0
005aa29c  CMP dword ptr [EBP + -0x14],0x0
005aa2a0  JZ 0x005aa2b3
005aa2a2  MOV ECX,dword ptr [EBP + 0x8]
005aa2a5  PUSH ECX
005aa2a6  MOV ECX,dword ptr [EBP + -0x14]
005aa2a9  CALL 0x006010a0
005aa2ae  MOV dword ptr [EBP + -0x24],EAX
005aa2b1  JMP 0x005aa2ba
005aa2b3  MOV dword ptr [EBP + -0x24],0x0
005aa2ba  MOV EDX,dword ptr [EBP + -0x24]
005aa2bd  MOV dword ptr [EBP + -0x10],EDX
005aa2c0  MOV dword ptr [EBP + -0x4],0xffffffff
005aa2c7  MOV EAX,dword ptr [EBP + -0x10]
005aa2ca  PUSH EAX
005aa2cb  MOV ECX,dword ptr [0x007935f8]
005aa2d1  MOV ECX,dword ptr [ECX + 0x40]
005aa2d4  CALL 0x005f5d50
005aa2d9  MOV EDX,dword ptr [0x007935f8]
005aa2df  CMP dword ptr [EDX + 0x3c],0x0
005aa2e3  JZ 0x005aa362
005aa2e5  PUSH 0x13a4
005aa2ea  MOV EAX,[0x007935f8]
005aa2ef  MOV ECX,dword ptr [EAX + 0x3c]
005aa2f2  CALL 0x005eaf00
005aa2f7  PUSH 0x0
005aa2f9  MOV ECX,dword ptr [0x007935f8]
005aa2ff  MOV EDX,dword ptr [ECX + 0x3c]
005aa302  MOV EAX,[0x007935f8]
005aa307  MOV ECX,dword ptr [EAX + 0x3c]
005aa30a  MOV EDX,dword ptr [EDX]
005aa30c  MOV EAX,dword ptr [EDX + 0xb0]
005aa312  CALL EAX
005aa314  PUSH 0x20
005aa316  CALL 0x00686d82
005aa31b  ADD ESP,0x4
005aa31e  MOV dword ptr [EBP + -0x1c],EAX
005aa321  MOV dword ptr [EBP + -0x4],0x1
005aa328  CMP dword ptr [EBP + -0x1c],0x0
005aa32c  JZ 0x005aa33d
005aa32e  PUSH 0x0
005aa330  MOV ECX,dword ptr [EBP + -0x1c]
005aa333  CALL 0x006010a0
005aa338  MOV dword ptr [EBP + -0x28],EAX
005aa33b  JMP 0x005aa344
005aa33d  MOV dword ptr [EBP + -0x28],0x0
005aa344  MOV ECX,dword ptr [EBP + -0x28]
005aa347  MOV dword ptr [EBP + -0x18],ECX
005aa34a  MOV dword ptr [EBP + -0x4],0xffffffff
005aa351  MOV EDX,dword ptr [EBP + -0x18]
005aa354  PUSH EDX
005aa355  MOV EAX,[0x007935f8]
005aa35a  MOV ECX,dword ptr [EAX + 0x3c]
005aa35d  CALL 0x005f5d50
005aa362  MOV ECX,dword ptr [EBP + -0xc]
005aa365  MOV dword ptr FS:[0x0],ECX
005aa36c  POP ECX
005aa36d  MOV ESP,EBP
005aa36f  POP EBP
005aa370  RET 0x4
