; FUN_005cb6d0  005cb6d0
005cb6d0  PUSH EBP
005cb6d1  MOV EBP,ESP
005cb6d3  PUSH ECX
005cb6d4  MOV dword ptr [EBP + -0x4],ECX
005cb6d7  MOV EAX,dword ptr [EBP + 0xc]
005cb6da  PUSH EAX
005cb6db  MOV ECX,dword ptr [EBP + 0x8]
005cb6de  PUSH ECX
005cb6df  MOV EDX,dword ptr [EBP + 0x10]
005cb6e2  SHL EDX,0x5
005cb6e5  MOV EAX,dword ptr [EBP + -0x4]
005cb6e8  LEA ECX,[EAX + EDX*0x1 + 0x48]
005cb6ec  MOV EDX,dword ptr [EBP + 0x14]
005cb6ef  LEA ECX,[ECX + EDX*0x8]
005cb6f2  CALL 0x0064c760
005cb6f7  MOVZX EAX,AL
005cb6fa  TEST EAX,EAX
005cb6fc  JZ 0x005cb739
005cb6fe  CMP dword ptr [EBP + 0x8],0x0
005cb702  JZ 0x005cb739
005cb704  PUSH 0x0
005cb706  PUSH ECX
005cb707  FLD float ptr [0x006b3654]
005cb70d  FSTP float ptr [ESP]
005cb710  PUSH ECX
005cb711  FLD1
005cb713  FSTP float ptr [ESP]
005cb716  PUSH 0x1
005cb718  PUSH 0x5
005cb71a  PUSH 0x0
005cb71c  PUSH 0x0
005cb71e  PUSH 0x186a1
005cb723  MOV ECX,dword ptr [0x0162ee84]
005cb729  MOV EDX,dword ptr [ECX]
005cb72b  MOV ECX,dword ptr [0x0162ee84]
005cb731  MOV EAX,dword ptr [EDX + 0x80]
005cb737  CALL EAX
005cb739  MOV ECX,dword ptr [EBP + 0x10]
005cb73c  SHL ECX,0x5
005cb73f  MOV EDX,dword ptr [EBP + -0x4]
005cb742  LEA EAX,[EDX + ECX*0x1 + 0x48]
005cb746  MOV ECX,dword ptr [EBP + 0x14]
005cb749  MOV EDX,dword ptr [EBP + 0x8]
005cb74c  MOV dword ptr [EAX + ECX*0x8],EDX
005cb74f  MOV EDX,dword ptr [EBP + 0xc]
005cb752  MOV dword ptr [EAX + ECX*0x8 + 0x4],EDX
005cb756  MOV EAX,dword ptr [EBP + 0x14]
005cb759  PUSH EAX
005cb75a  MOV ECX,dword ptr [EBP + 0x10]
005cb75d  PUSH ECX
005cb75e  MOV EDX,dword ptr [EBP + -0x4]
005cb761  MOV EAX,dword ptr [EDX]
005cb763  MOV ECX,dword ptr [EBP + -0x4]
005cb766  MOV EDX,dword ptr [EAX + 0xc0]
005cb76c  CALL EDX
005cb76e  MOV ESP,EBP
005cb770  POP EBP
005cb771  RET 0x10
