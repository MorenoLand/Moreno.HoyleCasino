; FUN_005b30a0  005b30a0
005b30a0  PUSH EBP
005b30a1  MOV EBP,ESP
005b30a3  PUSH -0x1
005b30a5  PUSH 0x6a7e4b
005b30aa  MOV EAX,FS:[0x0]
005b30b0  PUSH EAX
005b30b1  SUB ESP,0x2c
005b30b4  MOV EAX,[0x00781870]
005b30b9  XOR EAX,EBP
005b30bb  PUSH EAX
005b30bc  LEA EAX,[EBP + -0xc]
005b30bf  MOV FS:[0x0],EAX
005b30c5  MOV dword ptr [EBP + -0x2c],ECX
005b30c8  MOV EAX,dword ptr [EBP + -0x2c]
005b30cb  MOV dword ptr [EAX],0x6d0b58
005b30d1  MOV dword ptr [EBP + -0x4],0x0
005b30d8  MOV ECX,dword ptr [EBP + -0x2c]
005b30db  MOV EDX,dword ptr [ECX + 0x57c]
005b30e1  MOV dword ptr [EBP + -0x18],EDX
005b30e4  MOV EAX,dword ptr [EBP + -0x18]
005b30e7  MOV dword ptr [EBP + -0x14],EAX
005b30ea  CMP dword ptr [EBP + -0x14],0x0
005b30ee  JZ 0x005b3103
005b30f0  PUSH 0x1
005b30f2  MOV ECX,dword ptr [EBP + -0x14]
005b30f5  MOV EDX,dword ptr [ECX]
005b30f7  MOV ECX,dword ptr [EBP + -0x14]
005b30fa  MOV EAX,dword ptr [EDX]
005b30fc  CALL EAX
005b30fe  MOV dword ptr [EBP + -0x30],EAX
005b3101  JMP 0x005b310a
005b3103  MOV dword ptr [EBP + -0x30],0x0
005b310a  MOV dword ptr [EBP + -0x10],0x0
005b3111  JMP 0x005b311c
005b3113  MOV ECX,dword ptr [EBP + -0x10]
005b3116  ADD ECX,0x1
005b3119  MOV dword ptr [EBP + -0x10],ECX
005b311c  CMP dword ptr [EBP + -0x10],0x4
005b3120  JGE 0x005b3190
005b3122  MOV EDX,dword ptr [EBP + -0x10]
005b3125  MOV EAX,dword ptr [EBP + -0x2c]
005b3128  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x580]
005b312f  MOV dword ptr [EBP + -0x20],ECX
005b3132  MOV EDX,dword ptr [EBP + -0x20]
005b3135  MOV dword ptr [EBP + -0x1c],EDX
005b3138  CMP dword ptr [EBP + -0x1c],0x0
005b313c  JZ 0x005b3151
005b313e  PUSH 0x1
005b3140  MOV EAX,dword ptr [EBP + -0x1c]
005b3143  MOV EDX,dword ptr [EAX]
005b3145  MOV ECX,dword ptr [EBP + -0x1c]
005b3148  MOV EAX,dword ptr [EDX]
005b314a  CALL EAX
005b314c  MOV dword ptr [EBP + -0x34],EAX
005b314f  JMP 0x005b3158
005b3151  MOV dword ptr [EBP + -0x34],0x0
005b3158  MOV ECX,dword ptr [EBP + -0x10]
005b315b  MOV EDX,dword ptr [EBP + -0x2c]
005b315e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x634]
005b3165  MOV dword ptr [EBP + -0x28],EAX
005b3168  MOV ECX,dword ptr [EBP + -0x28]
005b316b  MOV dword ptr [EBP + -0x24],ECX
005b316e  CMP dword ptr [EBP + -0x24],0x0
005b3172  JZ 0x005b3187
005b3174  PUSH 0x1
005b3176  MOV EDX,dword ptr [EBP + -0x24]
005b3179  MOV EAX,dword ptr [EDX]
005b317b  MOV ECX,dword ptr [EBP + -0x24]
005b317e  MOV EDX,dword ptr [EAX]
005b3180  CALL EDX
005b3182  MOV dword ptr [EBP + -0x38],EAX
005b3185  JMP 0x005b318e
005b3187  MOV dword ptr [EBP + -0x38],0x0
005b318e  JMP 0x005b3113
005b3190  MOV dword ptr [EBP + -0x4],0xffffffff
005b3197  MOV ECX,dword ptr [EBP + -0x2c]
005b319a  CALL 0x005e9e40
005b319f  MOV ECX,dword ptr [EBP + -0xc]
005b31a2  MOV dword ptr FS:[0x0],ECX
005b31a9  POP ECX
005b31aa  MOV ESP,EBP
005b31ac  POP EBP
005b31ad  RET
