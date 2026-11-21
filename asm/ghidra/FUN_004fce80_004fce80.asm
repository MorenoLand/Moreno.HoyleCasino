; FUN_004fce80  004fce80
004fce80  PUSH EBP
004fce81  MOV EBP,ESP
004fce83  PUSH -0x1
004fce85  PUSH 0x6a2856
004fce8a  MOV EAX,FS:[0x0]
004fce90  PUSH EAX
004fce91  SUB ESP,0x1c
004fce94  MOV EAX,[0x00781870]
004fce99  XOR EAX,EBP
004fce9b  PUSH EAX
004fce9c  LEA EAX,[EBP + -0xc]
004fce9f  MOV FS:[0x0],EAX
004fcea5  MOV dword ptr [EBP + -0x20],ECX
004fcea8  MOV ECX,dword ptr [0x00791eb8]
004fceae  CALL 0x004fa2e0
004fceb3  MOV ECX,dword ptr [0x00791eb8]
004fceb9  CALL 0x004fb580
004fcebe  PUSH 0x208
004fcec3  CALL 0x00686d82
004fcec8  ADD ESP,0x4
004fcecb  MOV dword ptr [EBP + -0x14],EAX
004fcece  MOV dword ptr [EBP + -0x4],0x0
004fced5  CMP dword ptr [EBP + -0x14],0x0
004fced9  JZ 0x004fcee8
004fcedb  MOV ECX,dword ptr [EBP + -0x14]
004fcede  CALL 0x00467090
004fcee3  MOV dword ptr [EBP + -0x24],EAX
004fcee6  JMP 0x004fceef
004fcee8  MOV dword ptr [EBP + -0x24],0x0
004fceef  MOV EAX,dword ptr [EBP + -0x24]
004fcef2  MOV dword ptr [EBP + -0x10],EAX
004fcef5  MOV dword ptr [EBP + -0x4],0xffffffff
004fcefc  MOV ECX,dword ptr [0x00791eb8]
004fcf02  MOV EDX,dword ptr [EBP + -0x10]
004fcf05  MOV dword ptr [ECX + 0x9c],EDX
004fcf0b  PUSH 0xdc
004fcf10  PUSH 0x154
004fcf15  MOV EAX,[0x00791eb8]
004fcf1a  MOV ECX,dword ptr [EAX + 0x9c]
004fcf20  CALL 0x005198c0
004fcf25  MOV ECX,dword ptr [0x00791eb8]
004fcf2b  MOV ECX,dword ptr [ECX + 0x9c]
004fcf31  CALL 0x005f87d0
004fcf36  MOV EDX,dword ptr [0x00791eb8]
004fcf3c  MOV EAX,dword ptr [EDX + 0x9c]
004fcf42  MOV ECX,dword ptr [0x00791eb8]
004fcf48  MOV ECX,dword ptr [ECX + 0x9c]
004fcf4e  MOV EDX,dword ptr [EAX]
004fcf50  MOV EAX,dword ptr [EDX + 0x3c]
004fcf53  CALL EAX
004fcf55  PUSH 0x22c
004fcf5a  CALL 0x00686d82
004fcf5f  ADD ESP,0x4
004fcf62  MOV dword ptr [EBP + -0x1c],EAX
004fcf65  MOV dword ptr [EBP + -0x4],0x1
004fcf6c  CMP dword ptr [EBP + -0x1c],0x0
004fcf70  JZ 0x004fcf7f
004fcf72  MOV ECX,dword ptr [EBP + -0x1c]
004fcf75  CALL 0x0046a260
004fcf7a  MOV dword ptr [EBP + -0x28],EAX
004fcf7d  JMP 0x004fcf86
004fcf7f  MOV dword ptr [EBP + -0x28],0x0
004fcf86  MOV ECX,dword ptr [EBP + -0x28]
004fcf89  MOV dword ptr [EBP + -0x18],ECX
004fcf8c  MOV dword ptr [EBP + -0x4],0xffffffff
004fcf93  MOV EDX,dword ptr [0x00791eb8]
004fcf99  MOV EAX,dword ptr [EBP + -0x18]
004fcf9c  MOV dword ptr [EDX + 0xa0],EAX
004fcfa2  PUSH 0x0
004fcfa4  PUSH 0x186ab
004fcfa9  MOV ECX,dword ptr [0x00791eb8]
004fcfaf  MOV ECX,dword ptr [ECX + 0xa0]
004fcfb5  CALL 0x005f83d0
004fcfba  PUSH 0x14
004fcfbc  PUSH 0x0
004fcfbe  MOV EDX,dword ptr [0x00791eb8]
004fcfc4  MOV ECX,dword ptr [EDX + 0xa0]
004fcfca  CALL 0x005f7340
004fcfcf  MOV EAX,[0x00791eb8]
004fcfd4  MOV ECX,dword ptr [EAX + 0xa0]
004fcfda  CALL 0x005f87d0
004fcfdf  MOV ECX,dword ptr [0x00791eb8]
004fcfe5  MOV EDX,dword ptr [ECX + 0xa0]
004fcfeb  MOV EAX,[0x00791eb8]
004fcff0  MOV ECX,dword ptr [EAX + 0xa0]
004fcff6  MOV EDX,dword ptr [EDX]
004fcff8  MOV EAX,dword ptr [EDX + 0x3c]
004fcffb  CALL EAX
004fcffd  MOV ECX,dword ptr [0x00791eb8]
004fd003  CALL 0x005da7b0
004fd008  MOVZX ECX,AL
004fd00b  TEST ECX,ECX
004fd00d  JZ 0x004fd01a
004fd00f  MOV ECX,dword ptr [0x00791eb8]
004fd015  CALL 0x004fc6a0
004fd01a  MOV ECX,dword ptr [EBP + -0xc]
004fd01d  MOV dword ptr FS:[0x0],ECX
004fd024  POP ECX
004fd025  MOV ESP,EBP
004fd027  POP EBP
004fd028  RET
