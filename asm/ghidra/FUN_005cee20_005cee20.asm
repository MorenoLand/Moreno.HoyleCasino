; FUN_005cee20  005cee20
005cee20  PUSH EBP
005cee21  MOV EBP,ESP
005cee23  SUB ESP,0xc0
005cee29  MOV EAX,[0x00781870]
005cee2e  XOR EAX,EBP
005cee30  MOV dword ptr [EBP + -0x4],EAX
005cee33  MOV dword ptr [EBP + 0xffffff44],ECX
005cee39  PUSH 0x0
005cee3b  MOV EAX,dword ptr [EBP + 0xc]
005cee3e  PUSH EAX
005cee3f  CALL 0x0064c8a0
005cee44  ADD ESP,0x8
005cee47  MOV dword ptr [EBP + 0xffffff50],EAX
005cee4d  MOV dword ptr [EBP + 0xffffff54],EDX
005cee53  MOV ECX,dword ptr [EBP + 0xffffff50]
005cee59  MOV dword ptr [EBP + -0x40],ECX
005cee5c  MOV EDX,dword ptr [EBP + 0xffffff54]
005cee62  MOV dword ptr [EBP + -0x3c],EDX
005cee65  PUSH -0x1
005cee67  PUSH 0x30
005cee69  PUSH 0x1
005cee6b  PUSH 0x9d
005cee70  PUSH 0x0
005cee72  PUSH 0x23
005cee74  PUSH 0x192
005cee79  PUSH 0x3c
005cee7b  MOV EAX,dword ptr [EBP + 0x8]
005cee7e  PUSH EAX
005cee7f  PUSH 0x0
005cee81  PUSH 0x0
005cee83  MOV ECX,dword ptr [EBP + 0xffffff44]
005cee89  CALL 0x005fa5b0
005cee8e  PUSH 0x0
005cee90  PUSH 0x1
005cee92  PUSH 0x0
005cee94  LEA ECX,[EBP + -0x38]
005cee97  PUSH ECX
005cee98  MOV EDX,dword ptr [EBP + -0x3c]
005cee9b  PUSH EDX
005cee9c  MOV EAX,dword ptr [EBP + -0x40]
005cee9f  PUSH EAX
005ceea0  CALL 0x0064c8d0
005ceea5  ADD ESP,0x18
005ceea8  LEA ECX,[EBP + -0x38]
005ceeab  PUSH ECX
005ceeac  PUSH 0x6d2ef4
005ceeb1  CALL 0x00630f40
005ceeb6  ADD ESP,0x4
005ceeb9  PUSH EAX
005ceeba  LEA EDX,[EBP + 0xffffff58]
005ceec0  PUSH EDX
005ceec1  CALL dword ptr [0x006b2220]
005ceec7  ADD ESP,0xc
005ceeca  PUSH -0x1
005ceecc  PUSH 0x24
005ceece  PUSH 0x2
005ceed0  PUSH 0xc5
005ceed5  PUSH 0x0
005ceed7  PUSH 0x23
005ceed9  PUSH 0x192
005ceede  PUSH 0x3c
005ceee0  LEA EAX,[EBP + 0xffffff58]
005ceee6  PUSH EAX
005ceee7  PUSH 0x1
005ceee9  PUSH 0x0
005ceeeb  MOV ECX,dword ptr [EBP + 0xffffff44]
005ceef1  CALL 0x005fa5b0
005ceef6  MOV ECX,dword ptr [EBP + 0xffffff44]
005ceefc  MOV EDX,dword ptr [ECX + 0x17c]
005cef02  MOV dword ptr [EBP + 0xffffff4c],EDX
005cef08  CMP dword ptr [EBP + 0xffffff4c],0x0
005cef0f  JZ 0x005cef49
005cef11  MOV EAX,dword ptr [EBP + 0xffffff48]
005cef17  MOV dword ptr [EBP + 0xffffff40],EAX
005cef1d  MOV ECX,dword ptr [EBP + 0xffffff44]
005cef23  MOV EDX,dword ptr [ECX + 0x17c]
005cef29  MOV dword ptr [EBP + 0xffffff40],EDX
005cef2f  MOV EAX,dword ptr [EBP + 0x10]
005cef32  PUSH EAX
005cef33  MOV ECX,dword ptr [EBP + 0xffffff40]
005cef39  MOV EDX,dword ptr [ECX]
005cef3b  MOV ECX,dword ptr [EBP + 0xffffff40]
005cef41  MOV EAX,dword ptr [EDX + 0xb0]
005cef47  CALL EAX
005cef49  MOV ECX,dword ptr [EBP + -0x4]
005cef4c  XOR ECX,EBP
005cef4e  CALL 0x00686d72
005cef53  MOV ESP,EBP
005cef55  POP EBP
005cef56  RET 0xc
