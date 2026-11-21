; FUN_005cb140  005cb140
005cb140  PUSH EBP
005cb141  MOV EBP,ESP
005cb143  PUSH -0x1
005cb145  PUSH 0x6a8ab2
005cb14a  MOV EAX,FS:[0x0]
005cb150  PUSH EAX
005cb151  SUB ESP,0x1c
005cb154  MOV EAX,[0x00781870]
005cb159  XOR EAX,EBP
005cb15b  PUSH EAX
005cb15c  LEA EAX,[EBP + -0xc]
005cb15f  MOV FS:[0x0],EAX
005cb165  MOV dword ptr [EBP + -0x20],ECX
005cb168  MOV EAX,dword ptr [EBP + 0x8]
005cb16b  MOVZX ECX,byte ptr [EAX + 0x4]
005cb16f  TEST ECX,ECX
005cb171  JZ 0x005cb178
005cb173  JMP 0x005cb2ea
005cb178  MOV EDX,dword ptr [EBP + 0x8]
005cb17b  CMP dword ptr [EDX + 0x18],0x3
005cb17f  JNZ 0x005cb2de
005cb185  MOV EAX,dword ptr [EBP + 0x8]
005cb188  PUSH EAX
005cb189  MOV ECX,dword ptr [EBP + -0x20]
005cb18c  CALL 0x005eb6d0
005cb191  MOVZX ECX,AL
005cb194  TEST ECX,ECX
005cb196  JZ 0x005cb27a
005cb19c  MOV EDX,dword ptr [EBP + -0x20]
005cb19f  CMP dword ptr [EDX + 0x1dc],0x0
005cb1a6  JNZ 0x005cb278
005cb1ac  PUSH 0x1d4
005cb1b1  CALL 0x00686d82
005cb1b6  ADD ESP,0x4
005cb1b9  MOV dword ptr [EBP + -0x14],EAX
005cb1bc  MOV dword ptr [EBP + -0x4],0x0
005cb1c3  CMP dword ptr [EBP + -0x14],0x0
005cb1c7  JZ 0x005cb1d6
005cb1c9  MOV ECX,dword ptr [EBP + -0x14]
005cb1cc  CALL 0x005cd360
005cb1d1  MOV dword ptr [EBP + -0x24],EAX
005cb1d4  JMP 0x005cb1dd
005cb1d6  MOV dword ptr [EBP + -0x24],0x0
005cb1dd  MOV EAX,dword ptr [EBP + -0x24]
005cb1e0  MOV dword ptr [EBP + -0x10],EAX
005cb1e3  MOV dword ptr [EBP + -0x4],0xffffffff
005cb1ea  MOV ECX,dword ptr [EBP + -0x20]
005cb1ed  MOV EDX,dword ptr [EBP + -0x10]
005cb1f0  MOV dword ptr [ECX + 0x1dc],EDX
005cb1f6  PUSH -0x1
005cb1f8  PUSH 0x30
005cb1fa  PUSH 0x7d0
005cb1ff  MOV EAX,dword ptr [EBP + -0x20]
005cb202  MOV EDX,dword ptr [EAX]
005cb204  MOV ECX,dword ptr [EBP + -0x20]
005cb207  MOV EAX,dword ptr [EDX + 0x54]
005cb20a  CALL EAX
005cb20c  SUB EAX,0xf
005cb20f  PUSH EAX
005cb210  MOV ECX,dword ptr [EBP + -0x20]
005cb213  MOV EDX,dword ptr [ECX]
005cb215  MOV ECX,dword ptr [EBP + -0x20]
005cb218  MOV EAX,dword ptr [EDX + 0x4c]
005cb21b  CALL EAX
005cb21d  PUSH EAX
005cb21e  PUSH 0xf
005cb220  PUSH 0x32
005cb222  PUSH 0x67
005cb224  PUSH 0x6d2664
005cb229  CALL 0x00630f40
005cb22e  ADD ESP,0x4
005cb231  PUSH EAX
005cb232  MOV ECX,dword ptr [EBP + -0x20]
005cb235  MOV ECX,dword ptr [ECX + 0x1dc]
005cb23b  CALL 0x005ec8f0
005cb240  PUSH 0xcc
005cb245  PUSH 0xff
005cb24a  PUSH 0xff
005cb24f  MOV EDX,dword ptr [EBP + -0x20]
005cb252  MOV ECX,dword ptr [EDX + 0x1dc]
005cb258  CALL 0x005ee8c0
005cb25d  MOV EAX,dword ptr [EBP + -0x20]
005cb260  MOV ECX,dword ptr [EAX + 0x1dc]
005cb266  MOV EDX,dword ptr [EBP + -0x20]
005cb269  MOV EAX,dword ptr [EDX + 0x1dc]
005cb26f  MOV EDX,dword ptr [ECX]
005cb271  MOV ECX,EAX
005cb273  MOV EAX,dword ptr [EDX + 0x74]
005cb276  CALL EAX
005cb278  JMP 0x005cb2de
005cb27a  MOV ECX,dword ptr [EBP + -0x20]
005cb27d  CMP dword ptr [ECX + 0x1dc],0x0
005cb284  JZ 0x005cb2de
005cb286  MOV EDX,dword ptr [EBP + -0x20]
005cb289  MOV EAX,dword ptr [EDX + 0x1dc]
005cb28f  MOV ECX,dword ptr [EBP + -0x20]
005cb292  MOV ECX,dword ptr [ECX + 0x1dc]
005cb298  MOV EDX,dword ptr [EAX]
005cb29a  MOV EAX,dword ptr [EDX + 0x70]
005cb29d  CALL EAX
005cb29f  MOV ECX,dword ptr [EBP + -0x20]
005cb2a2  MOV EDX,dword ptr [ECX + 0x1dc]
005cb2a8  MOV dword ptr [EBP + -0x1c],EDX
005cb2ab  MOV EAX,dword ptr [EBP + -0x1c]
005cb2ae  MOV dword ptr [EBP + -0x18],EAX
005cb2b1  CMP dword ptr [EBP + -0x18],0x0
005cb2b5  JZ 0x005cb2ca
005cb2b7  PUSH 0x1
005cb2b9  MOV ECX,dword ptr [EBP + -0x18]
005cb2bc  MOV EDX,dword ptr [ECX]
005cb2be  MOV ECX,dword ptr [EBP + -0x18]
005cb2c1  MOV EAX,dword ptr [EDX]
005cb2c3  CALL EAX
005cb2c5  MOV dword ptr [EBP + -0x28],EAX
005cb2c8  JMP 0x005cb2d1
005cb2ca  MOV dword ptr [EBP + -0x28],0x0
005cb2d1  MOV ECX,dword ptr [EBP + -0x20]
005cb2d4  MOV dword ptr [ECX + 0x1dc],0x0
005cb2de  MOV EDX,dword ptr [EBP + 0x8]
005cb2e1  PUSH EDX
005cb2e2  MOV ECX,dword ptr [EBP + -0x20]
005cb2e5  CALL 0x005f4d00
005cb2ea  MOV ECX,dword ptr [EBP + -0xc]
005cb2ed  MOV dword ptr FS:[0x0],ECX
005cb2f4  POP ECX
005cb2f5  MOV ESP,EBP
005cb2f7  POP EBP
005cb2f8  RET 0x4
