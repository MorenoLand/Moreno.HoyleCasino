; FUN_005fbec0  005fbec0
005fbec0  PUSH EBP
005fbec1  MOV EBP,ESP
005fbec3  PUSH -0x1
005fbec5  PUSH 0x6aa54c
005fbeca  MOV EAX,FS:[0x0]
005fbed0  PUSH EAX
005fbed1  SUB ESP,0x14
005fbed4  MOV EAX,[0x00781870]
005fbed9  XOR EAX,EBP
005fbedb  PUSH EAX
005fbedc  LEA EAX,[EBP + -0xc]
005fbedf  MOV FS:[0x0],EAX
005fbee5  MOV dword ptr [EBP + -0x1c],ECX
005fbee8  MOV EAX,dword ptr [EBP + 0xc]
005fbeeb  PUSH EAX
005fbeec  MOV ECX,dword ptr [EBP + 0x8]
005fbeef  PUSH ECX
005fbef0  MOV EDX,dword ptr [0x015e55e8]
005fbef6  MOV EAX,dword ptr [EDX + 0x14]
005fbef9  PUSH EAX
005fbefa  PUSH 0x0
005fbefc  MOV ECX,dword ptr [EBP + -0x1c]
005fbeff  CALL 0x005f7670
005fbf04  MOV dword ptr [EBP + -0x4],0x0
005fbf0b  MOV ECX,dword ptr [EBP + -0x1c]
005fbf0e  MOV dword ptr [ECX],0x6d6e54
005fbf14  PUSH 0x8c
005fbf19  CALL 0x00686d82
005fbf1e  ADD ESP,0x4
005fbf21  MOV dword ptr [EBP + -0x18],EAX
005fbf24  MOV byte ptr [EBP + -0x4],0x1
005fbf28  CMP dword ptr [EBP + -0x18],0x0
005fbf2c  JZ 0x005fbf5f
005fbf2e  MOV ECX,dword ptr [EBP + -0x18]
005fbf31  CALL 0x006131b0
005fbf36  MOV byte ptr [EBP + -0x4],0x2
005fbf3a  MOV EDX,dword ptr [EBP + -0x18]
005fbf3d  MOV dword ptr [EDX],0x6d6e0c
005fbf43  MOV EAX,dword ptr [EBP + 0xc]
005fbf46  PUSH EAX
005fbf47  MOV ECX,dword ptr [EBP + 0x8]
005fbf4a  PUSH ECX
005fbf4b  MOV ECX,dword ptr [EBP + -0x18]
005fbf4e  CALL 0x00613360
005fbf53  MOV byte ptr [EBP + -0x4],0x1
005fbf57  MOV EDX,dword ptr [EBP + -0x18]
005fbf5a  MOV dword ptr [EBP + -0x20],EDX
005fbf5d  JMP 0x005fbf66
005fbf5f  MOV dword ptr [EBP + -0x20],0x0
005fbf66  MOV EAX,dword ptr [EBP + -0x20]
005fbf69  MOV dword ptr [EBP + -0x14],EAX
005fbf6c  MOV byte ptr [EBP + -0x4],0x0
005fbf70  MOV ECX,dword ptr [EBP + -0x1c]
005fbf73  MOV EDX,dword ptr [EBP + -0x14]
005fbf76  MOV dword ptr [ECX + 0x1a8],EDX
005fbf7c  MOV EAX,dword ptr [EBP + -0x1c]
005fbf7f  MOV byte ptr [EAX + 0x168],0x1
005fbf86  MOV byte ptr [EBP + -0xe],0xff
005fbf8a  MOV CL,byte ptr [EBP + -0xe]
005fbf8d  MOV byte ptr [EBP + -0xf],CL
005fbf90  MOV DL,byte ptr [EBP + -0xf]
005fbf93  MOV byte ptr [EBP + -0x10],DL
005fbf96  PUSH ECX
005fbf97  MOV EAX,ESP
005fbf99  MOV CX,word ptr [EBP + -0x10]
005fbf9d  MOV word ptr [EAX],CX
005fbfa0  MOV DL,byte ptr [EBP + -0xe]
005fbfa3  MOV byte ptr [EAX + 0x2],DL
005fbfa6  MOV ECX,dword ptr [EBP + -0x1c]
005fbfa9  CALL 0x005f8a80
005fbfae  MOV ECX,dword ptr [EBP + -0x1c]
005fbfb1  CALL 0x005f85d0
005fbfb6  MOV dword ptr [EBP + -0x4],0xffffffff
005fbfbd  MOV EAX,dword ptr [EBP + -0x1c]
005fbfc0  MOV ECX,dword ptr [EBP + -0xc]
005fbfc3  MOV dword ptr FS:[0x0],ECX
005fbfca  POP ECX
005fbfcb  MOV ESP,EBP
005fbfcd  POP EBP
005fbfce  RET 0x8
