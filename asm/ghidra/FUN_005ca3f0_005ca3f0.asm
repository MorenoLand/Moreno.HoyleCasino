; FUN_005ca3f0  005ca3f0
005ca3f0  PUSH EBP
005ca3f1  MOV EBP,ESP
005ca3f3  SUB ESP,0x58
005ca3f6  PUSH ESI
005ca3f7  MOV dword ptr [EBP + -0x50],ECX
005ca3fa  MOV dword ptr [EBP + -0x40],0x5f5e100
005ca401  MOV dword ptr [EBP + -0x3c],0x989680
005ca408  MOV dword ptr [EBP + -0x38],0xf4240
005ca40f  MOV dword ptr [EBP + -0x34],0x7a120
005ca416  MOV dword ptr [EBP + -0x30],0x186a0
005ca41d  MOV dword ptr [EBP + -0x2c],0xc350
005ca424  MOV dword ptr [EBP + -0x28],0x61a8
005ca42b  MOV dword ptr [EBP + -0x24],0x2710
005ca432  MOV dword ptr [EBP + -0x20],0x1388
005ca439  MOV dword ptr [EBP + -0x1c],0x3e8
005ca440  MOV dword ptr [EBP + -0x18],0x1f4
005ca447  MOV dword ptr [EBP + -0x14],0x64
005ca44e  MOV EAX,[0x007947e4]
005ca453  MOV EDX,dword ptr [EAX]
005ca455  MOV ECX,dword ptr [0x007947e4]
005ca45b  MOV EAX,dword ptr [EDX + 0x25c]
005ca461  CALL EAX
005ca463  MOV dword ptr [EBP + -0x4],EAX
005ca466  LEA ECX,[EBP + -0x10]
005ca469  PUSH ECX
005ca46a  LEA EDX,[EBP + -0x8]
005ca46d  PUSH EDX
005ca46e  MOV EAX,[0x007947e4]
005ca473  MOV EDX,dword ptr [EAX]
005ca475  MOV ECX,dword ptr [0x007947e4]
005ca47b  MOV EAX,dword ptr [EDX + 0x26c]
005ca481  CALL EAX
005ca483  CMP dword ptr [EBP + -0x10],0x0
005ca487  JZ 0x005ca4b1
005ca489  MOV ECX,dword ptr [EBP + -0x4]
005ca48c  CALL 0x005d5a50
005ca491  CMP EAX,dword ptr [EBP + -0x10]
005ca494  JGE 0x005ca4a3
005ca496  MOV ECX,dword ptr [EBP + -0x4]
005ca499  CALL 0x005d5a50
005ca49e  MOV dword ptr [EBP + -0x54],EAX
005ca4a1  JMP 0x005ca4a9
005ca4a3  MOV ECX,dword ptr [EBP + -0x10]
005ca4a6  MOV dword ptr [EBP + -0x54],ECX
005ca4a9  MOV EDX,dword ptr [EBP + -0x54]
005ca4ac  MOV dword ptr [EBP + -0x58],EDX
005ca4af  JMP 0x005ca4bc
005ca4b1  MOV ECX,dword ptr [EBP + -0x4]
005ca4b4  CALL 0x005d5a50
005ca4b9  MOV dword ptr [EBP + -0x58],EAX
005ca4bc  MOV EAX,dword ptr [EBP + -0x58]
005ca4bf  MOV dword ptr [EBP + -0x44],EAX
005ca4c2  MOV ECX,dword ptr [EBP + -0x4]
005ca4c5  CALL 0x005d5f30
005ca4ca  MOV ESI,EAX
005ca4cc  MOV ECX,dword ptr [EBP + -0x4]
005ca4cf  CALL 0x005d5a50
005ca4d4  CMP ESI,EAX
005ca4d6  JLE 0x005ca4fa
005ca4d8  PUSH 0x0
005ca4da  PUSH 0x0
005ca4dc  CALL 0x0064c8a0
005ca4e1  ADD ESP,0x8
005ca4e4  MOV dword ptr [EBP + -0x4c],EAX
005ca4e7  MOV dword ptr [EBP + -0x48],EDX
005ca4ea  MOV ECX,dword ptr [EBP + -0x48]
005ca4ed  PUSH ECX
005ca4ee  MOV EDX,dword ptr [EBP + -0x4c]
005ca4f1  PUSH EDX
005ca4f2  MOV ECX,dword ptr [EBP + -0x4]
005ca4f5  CALL 0x005d5e10
005ca4fa  MOV EAX,dword ptr [EBP + -0x50]
005ca4fd  MOV dword ptr [EAX + 0x30],0x32
005ca504  MOV dword ptr [EBP + -0xc],0x0
005ca50b  JMP 0x005ca516
005ca50d  MOV ECX,dword ptr [EBP + -0xc]
005ca510  ADD ECX,0x1
005ca513  MOV dword ptr [EBP + -0xc],ECX
005ca516  CMP dword ptr [EBP + -0xc],0xc
005ca51a  JGE 0x005ca539
005ca51c  MOV EDX,dword ptr [EBP + -0xc]
005ca51f  MOV EAX,dword ptr [EBP + -0x44]
005ca522  CMP EAX,dword ptr [EBP + EDX*0x4 + -0x40]
005ca526  JL 0x005ca537
005ca528  MOV ECX,dword ptr [EBP + -0x50]
005ca52b  MOV EDX,dword ptr [EBP + -0xc]
005ca52e  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x40]
005ca532  MOV dword ptr [ECX + 0x30],EAX
005ca535  JMP 0x005ca539
005ca537  JMP 0x005ca50d
005ca539  MOV ECX,dword ptr [EBP + -0x50]
005ca53c  CALL 0x005ca570
005ca541  MOV ECX,dword ptr [EBP + -0x50]
005ca544  MOV EDX,dword ptr [ECX + 0x10]
005ca547  MOV EAX,dword ptr [EBP + -0x50]
005ca54a  FILD dword ptr [EAX + 0x30]
005ca54d  FCOMP double ptr [EDX + 0x1e0]
005ca553  FNSTSW AX
005ca555  TEST AH,0x5
005ca558  JP 0x005ca566
005ca55a  PUSH 0x0
005ca55c  MOV ECX,dword ptr [EBP + -0x50]
005ca55f  CALL 0x005ca640
005ca564  JMP 0x005ca541
005ca566  POP ESI
005ca567  MOV ESP,EBP
005ca569  POP EBP
005ca56a  RET
