; FUN_005cc230  005cc230
005cc230  PUSH EBP
005cc231  MOV EBP,ESP
005cc233  PUSH -0x1
005cc235  PUSH 0x6a8b1b
005cc23a  MOV EAX,FS:[0x0]
005cc240  PUSH EAX
005cc241  SUB ESP,0x10
005cc244  MOV EAX,[0x00781870]
005cc249  XOR EAX,EBP
005cc24b  PUSH EAX
005cc24c  LEA EAX,[EBP + -0xc]
005cc24f  MOV FS:[0x0],EAX
005cc255  MOV dword ptr [EBP + -0x18],ECX
005cc258  MOV EAX,dword ptr [EBP + -0x18]
005cc25b  MOV dword ptr [EAX],0x6d287c
005cc261  MOV dword ptr [EBP + -0x4],0x0
005cc268  MOV ECX,dword ptr [EBP + -0x18]
005cc26b  CALL 0x005ccd90
005cc270  MOV ECX,dword ptr [EBP + -0x18]
005cc273  MOV EDX,dword ptr [ECX + 0xadc]
005cc279  MOV dword ptr [EBP + -0x14],EDX
005cc27c  MOV EAX,dword ptr [EBP + -0x14]
005cc27f  MOV dword ptr [EBP + -0x10],EAX
005cc282  CMP dword ptr [EBP + -0x10],0x0
005cc286  JZ 0x005cc29b
005cc288  PUSH 0x1
005cc28a  MOV ECX,dword ptr [EBP + -0x10]
005cc28d  MOV EDX,dword ptr [ECX]
005cc28f  MOV ECX,dword ptr [EBP + -0x10]
005cc292  MOV EAX,dword ptr [EDX]
005cc294  CALL EAX
005cc296  MOV dword ptr [EBP + -0x1c],EAX
005cc299  JMP 0x005cc2a2
005cc29b  MOV dword ptr [EBP + -0x1c],0x0
005cc2a2  MOV dword ptr [EBP + -0x4],0xffffffff
005cc2a9  MOV ECX,dword ptr [EBP + -0x18]
005cc2ac  CALL 0x005eac00
005cc2b1  MOV ECX,dword ptr [EBP + -0xc]
005cc2b4  MOV dword ptr FS:[0x0],ECX
005cc2bb  POP ECX
005cc2bc  MOV ESP,EBP
005cc2be  POP EBP
005cc2bf  RET
