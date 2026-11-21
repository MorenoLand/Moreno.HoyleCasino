; FUN_005eaa40  005eaa40
005eaa40  PUSH EBP
005eaa41  MOV EBP,ESP
005eaa43  PUSH -0x1
005eaa45  PUSH 0x6a9bd3
005eaa4a  MOV EAX,FS:[0x0]
005eaa50  PUSH EAX
005eaa51  SUB ESP,0x28
005eaa54  MOV EAX,[0x00781870]
005eaa59  XOR EAX,EBP
005eaa5b  MOV dword ptr [EBP + -0x10],EAX
005eaa5e  PUSH EAX
005eaa5f  LEA EAX,[EBP + -0xc]
005eaa62  MOV FS:[0x0],EAX
005eaa68  LEA ECX,[EBP + -0x2c]
005eaa6b  CALL dword ptr [0x006b210c]
005eaa71  MOV dword ptr [EBP + -0x4],0x0
005eaa78  LEA EAX,[EBP + -0x2c]
005eaa7b  PUSH EAX
005eaa7c  PUSH 0x6c2d28
005eaa81  MOV ECX,dword ptr [EBP + 0x8]
005eaa84  PUSH ECX
005eaa85  CALL 0x005ea820
005eaa8a  ADD ESP,0xc
005eaa8d  MOV dword ptr [EBP + -0x30],EAX
005eaa90  CMP dword ptr [EBP + -0x30],0x0
005eaa94  JZ 0x005eaaa3
005eaa96  MOV EDX,dword ptr [EBP + -0x30]
005eaa99  PUSH EDX
005eaa9a  CALL dword ptr [0x006b2258]
005eaaa0  ADD ESP,0x4
005eaaa3  LEA ECX,[EBP + -0x2c]
005eaaa6  CALL dword ptr [0x006b2100]
005eaaac  PUSH EAX
005eaaad  MOV EAX,dword ptr [EBP + 0x8]
005eaab0  PUSH EAX
005eaab1  CALL 0x00686d8e
005eaab6  ADD ESP,0x8
005eaab9  MOV ECX,dword ptr [EBP + 0x8]
005eaabc  MOV dword ptr [EBP + -0x34],ECX
005eaabf  MOV dword ptr [EBP + -0x4],0xffffffff
005eaac6  LEA ECX,[EBP + -0x2c]
005eaac9  CALL dword ptr [0x006b20f4]
005eaacf  MOV EAX,dword ptr [EBP + -0x34]
005eaad2  MOV ECX,dword ptr [EBP + -0xc]
005eaad5  MOV dword ptr FS:[0x0],ECX
005eaadc  POP ECX
005eaadd  MOV ECX,dword ptr [EBP + -0x10]
005eaae0  XOR ECX,EBP
005eaae2  CALL 0x00686d72
005eaae7  MOV ESP,EBP
005eaae9  POP EBP
005eaaea  RET
