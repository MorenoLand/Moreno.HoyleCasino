; FUN_004ebe10  004ebe10
004ebe10  PUSH EBP
004ebe11  MOV EBP,ESP
004ebe13  SUB ESP,0x8
004ebe16  PUSH ESI
004ebe17  MOV dword ptr [EBP + -0x8],ECX
004ebe1a  MOVSX EAX,word ptr [EBP + 0x8]
004ebe1e  CMP EAX,0x1
004ebe21  JGE 0x004ebe3a
004ebe23  PUSH 0x28e2
004ebe28  PUSH 0x6bf384
004ebe2d  PUSH 0x6bf730
004ebe32  CALL 0x005e9f20
004ebe37  ADD ESP,0xc
004ebe3a  MOVSX EDX,word ptr [EBP + 0x8]
004ebe3e  CMP EDX,0x3
004ebe41  JLE 0x004ebe5a
004ebe43  PUSH 0x28e3
004ebe48  PUSH 0x6bf384
004ebe4d  PUSH 0x6bf720
004ebe52  CALL 0x005e9f20
004ebe57  ADD ESP,0xc
004ebe5a  MOV word ptr [EBP + -0x4],0x0
004ebe60  MOV ECX,dword ptr [EBP + -0x8]
004ebe63  MOVSX EDX,word ptr [ECX + 0x64]
004ebe67  TEST EDX,EDX
004ebe69  JNZ 0x004ebeb3
004ebe6b  MOVSX EAX,word ptr [EBP + 0x8]
004ebe6f  CMP EAX,0x1
004ebe72  JNZ 0x004ebe85
004ebe74  MOV ECX,dword ptr [EBP + -0x8]
004ebe77  MOV AX,word ptr [ECX + 0x362]
004ebe7e  JMP 0x004ec00b
004ebe85  MOVSX EDX,word ptr [EBP + 0x8]
004ebe89  CMP EDX,0x2
004ebe8c  JNZ 0x004ebe9f
004ebe8e  MOV EAX,dword ptr [EBP + -0x8]
004ebe91  MOV AX,word ptr [EAX + 0x360]
004ebe98  JMP 0x004ec00b
004ebe9f  MOV ECX,dword ptr [EBP + -0x8]
004ebea2  MOV AX,word ptr [ECX + 0x35e]
004ebea9  JMP 0x004ec00b
004ebeb3  MOV EDX,dword ptr [EBP + -0x8]
004ebeb6  MOVSX EAX,word ptr [EDX + 0x64]
004ebeba  CMP EAX,0x1
004ebebd  JNZ 0x004ebf16
004ebebf  MOVSX ECX,word ptr [EBP + 0x8]
004ebec3  CMP ECX,0x1
004ebec6  JNZ 0x004ebede
004ebec8  MOV EDX,dword ptr [EBP + -0x8]
004ebecb  MOVSX EAX,word ptr [EDX + 0x362]
004ebed2  CDQ
004ebed3  SUB EAX,EDX
004ebed5  SAR EAX,0x1
004ebed7  JMP 0x004ec00b
004ebede  MOVSX EAX,word ptr [EBP + 0x8]
004ebee2  CMP EAX,0x2
004ebee5  JNZ 0x004ebefd
004ebee7  MOV ECX,dword ptr [EBP + -0x8]
004ebeea  MOVSX EAX,word ptr [ECX + 0x360]
004ebef1  CDQ
004ebef2  SUB EAX,EDX
004ebef4  SAR EAX,0x1
004ebef6  JMP 0x004ec00b
004ebefd  MOV EDX,dword ptr [EBP + -0x8]
004ebf00  MOVSX EAX,word ptr [EDX + 0x35e]
004ebf07  CDQ
004ebf08  SUB EAX,EDX
004ebf0a  SAR EAX,0x1
004ebf0c  JMP 0x004ec00b
004ebf16  MOV EAX,dword ptr [EBP + -0x8]
004ebf19  MOVSX ECX,word ptr [EAX + 0x64]
004ebf1d  CMP ECX,0x2
004ebf20  JNZ 0x004ebf88
004ebf22  MOVSX EDX,word ptr [EBP + 0x8]
004ebf26  CMP EDX,0x1
004ebf29  JNZ 0x004ebf47
004ebf2b  MOV EAX,dword ptr [EBP + -0x8]
004ebf2e  MOVSX ESI,word ptr [EAX + 0x362]
004ebf35  PUSH 0x14
004ebf37  CALL 0x0062fbf0
004ebf3c  ADD ESP,0x4
004ebf3f  ADD ESI,EAX
004ebf41  MOV word ptr [EBP + -0x4],SI
004ebf45  JMP 0x004ebf86
004ebf47  MOVSX ECX,word ptr [EBP + 0x8]
004ebf4b  CMP ECX,0x2
004ebf4e  JNZ 0x004ebf6c
004ebf50  MOV EDX,dword ptr [EBP + -0x8]
004ebf53  MOVSX ESI,word ptr [EDX + 0x360]
004ebf5a  PUSH 0x14
004ebf5c  CALL 0x0062fbf0
004ebf61  ADD ESP,0x4
004ebf64  ADD ESI,EAX
004ebf66  MOV word ptr [EBP + -0x4],SI
004ebf6a  JMP 0x004ebf86
004ebf6c  MOV EAX,dword ptr [EBP + -0x8]
004ebf6f  MOVSX ESI,word ptr [EAX + 0x35e]
004ebf76  PUSH 0x14
004ebf78  CALL 0x0062fbf0
004ebf7d  ADD ESP,0x4
004ebf80  ADD ESI,EAX
004ebf82  MOV word ptr [EBP + -0x4],SI
004ebf86  JMP 0x004ebff8
004ebf88  MOV ECX,dword ptr [EBP + -0x8]
004ebf8b  MOVSX EDX,word ptr [ECX + 0x64]
004ebf8f  CMP EDX,0x3
004ebf92  JNZ 0x004ebff8
004ebf94  MOVSX EAX,word ptr [EBP + 0x8]
004ebf98  CMP EAX,0x1
004ebf9b  JNZ 0x004ebfb9
004ebf9d  MOV ECX,dword ptr [EBP + -0x8]
004ebfa0  MOVSX ESI,word ptr [ECX + 0x362]
004ebfa7  PUSH 0x28
004ebfa9  CALL 0x0062fbf0
004ebfae  ADD ESP,0x4
004ebfb1  ADD ESI,EAX
004ebfb3  MOV word ptr [EBP + -0x4],SI
004ebfb7  JMP 0x004ebff8
004ebfb9  MOVSX EDX,word ptr [EBP + 0x8]
004ebfbd  CMP EDX,0x2
004ebfc0  JNZ 0x004ebfde
004ebfc2  MOV EAX,dword ptr [EBP + -0x8]
004ebfc5  MOVSX ESI,word ptr [EAX + 0x360]
004ebfcc  PUSH 0x28
004ebfce  CALL 0x0062fbf0
004ebfd3  ADD ESP,0x4
004ebfd6  ADD ESI,EAX
004ebfd8  MOV word ptr [EBP + -0x4],SI
004ebfdc  JMP 0x004ebff8
004ebfde  MOV ECX,dword ptr [EBP + -0x8]
004ebfe1  MOVSX ESI,word ptr [ECX + 0x35e]
004ebfe8  PUSH 0x28
004ebfea  CALL 0x0062fbf0
004ebfef  ADD ESP,0x4
004ebff2  ADD ESI,EAX
004ebff4  MOV word ptr [EBP + -0x4],SI
004ebff8  MOVSX EDX,word ptr [EBP + -0x4]
004ebffc  CMP EDX,0x60
004ebfff  JLE 0x004ec007
004ec001  MOV word ptr [EBP + -0x4],0x60
004ec007  MOV AX,word ptr [EBP + -0x4]
004ec00b  POP ESI
004ec00c  MOV ESP,EBP
004ec00e  POP EBP
004ec00f  RET 0x4
