; FUN_004cee10  004cee10
004cee10  PUSH EBP
004cee11  MOV EBP,ESP
004cee13  PUSH ECX
004cee14  PUSH ESI
004cee15  MOV dword ptr [EBP + -0x4],ECX
004cee18  MOVSX EAX,word ptr [EBP + 0x8]
004cee1c  TEST EAX,EAX
004cee1e  JGE 0x004cee37
004cee20  PUSH 0xcb1
004cee25  PUSH 0x6bf384
004cee2a  PUSH 0x6bf888
004cee2f  CALL 0x005e9f20
004cee34  ADD ESP,0xc
004cee37  MOVSX ESI,word ptr [EBP + 0x8]
004cee3b  MOV ECX,dword ptr [0x00791364]
004cee41  CALL 0x0047f950
004cee46  CMP ESI,EAX
004cee48  JL 0x004cee61
004cee4a  PUSH 0xcb2
004cee4f  PUSH 0x6bf384
004cee54  PUSH 0x6bf858
004cee59  CALL 0x005e9f20
004cee5e  ADD ESP,0xc
004cee61  MOVSX EAX,word ptr [EBP + 0xc]
004cee65  CMP EAX,0x2
004cee68  JGE 0x004cee81
004cee6a  PUSH 0xcb3
004cee6f  PUSH 0x6bf384
004cee74  PUSH 0x6bf778
004cee79  CALL 0x005e9f20
004cee7e  ADD ESP,0xc
004cee81  MOVSX ESI,word ptr [EBP + 0xc]
004cee85  MOV ECX,dword ptr [0x00791364]
004cee8b  CALL 0x0047f950
004cee90  CMP ESI,EAX
004cee92  JLE 0x004ceeab
004cee94  PUSH 0xcb4
004cee99  PUSH 0x6bf384
004cee9e  PUSH 0x6bf740
004ceea3  CALL 0x005e9f20
004ceea8  ADD ESP,0xc
004ceeab  MOV EAX,dword ptr [EBP + -0x4]
004ceeae  MOV ECX,dword ptr [EAX + 0x428]
004ceeb4  MOVSX EDX,word ptr [EBP + 0x8]
004ceeb8  IMUL EDX,EDX,0xe
004ceebb  LEA EAX,[ECX + EDX*0x1 + 0x70]
004ceebf  MOVSX ECX,word ptr [EBP + 0xc]
004ceec3  MOV DX,word ptr [EAX + ECX*0x2 + -0x4]
004ceec8  ADD DX,0x1
004ceecc  MOVSX EAX,word ptr [EBP + 0xc]
004ceed0  MOVSX ECX,word ptr [EBP + 0x8]
004ceed4  IMUL ECX,ECX,0xe
004ceed7  MOV ESI,dword ptr [EBP + -0x4]
004ceeda  MOV ESI,dword ptr [ESI + 0x428]
004ceee0  LEA ECX,[ESI + ECX*0x1 + 0x70]
004ceee4  MOV word ptr [ECX + EAX*0x2 + -0x4],DX
004ceee9  MOV EDX,dword ptr [EBP + -0x4]
004ceeec  MOV EAX,dword ptr [EDX + 0x428]
004ceef2  MOVSX ECX,word ptr [EBP + 0x8]
004ceef6  IMUL ECX,ECX,0xe
004ceef9  LEA EDX,[EAX + ECX*0x1 + 0x70]
004ceefd  MOVSX EAX,word ptr [EBP + 0xc]
004cef01  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x4]
004cef06  CMP ECX,0x3000
004cef0c  JNZ 0x004cef4c
004cef0e  MOV EDX,dword ptr [EBP + -0x4]
004cef11  MOV EAX,dword ptr [EDX + 0x428]
004cef17  MOVSX ECX,word ptr [EBP + 0x8]
004cef1b  IMUL ECX,ECX,0xe
004cef1e  LEA EDX,[EAX + ECX*0x1 + 0x70]
004cef22  MOVSX EAX,word ptr [EBP + 0xc]
004cef26  MOV CX,word ptr [EDX + EAX*0x2 + -0x4]
004cef2b  SUB CX,0x1
004cef2f  MOVSX EDX,word ptr [EBP + 0xc]
004cef33  MOVSX EAX,word ptr [EBP + 0x8]
004cef37  IMUL EAX,EAX,0xe
004cef3a  MOV ESI,dword ptr [EBP + -0x4]
004cef3d  MOV ESI,dword ptr [ESI + 0x428]
004cef43  LEA EAX,[ESI + EAX*0x1 + 0x70]
004cef47  MOV word ptr [EAX + EDX*0x2 + -0x4],CX
004cef4c  MOVSX ECX,word ptr [EBP + 0xc]
004cef50  CMP ECX,0x2
004cef53  JLE 0x004ceff9
004cef59  MOV EDX,dword ptr [EBP + -0x4]
004cef5c  MOV EAX,dword ptr [EDX + 0x428]
004cef62  MOVSX ECX,word ptr [EBP + 0x8]
004cef66  IMUL ECX,ECX,0xe
004cef69  LEA EDX,[EAX + ECX*0x1 + 0x70]
004cef6d  MOVSX EAX,word ptr [EBP + 0xc]
004cef71  MOV CX,word ptr [EDX + EAX*0x2 + -0x6]
004cef76  ADD CX,0x1
004cef7a  MOVSX EDX,word ptr [EBP + 0xc]
004cef7e  MOVSX EAX,word ptr [EBP + 0x8]
004cef82  IMUL EAX,EAX,0xe
004cef85  MOV ESI,dword ptr [EBP + -0x4]
004cef88  MOV ESI,dword ptr [ESI + 0x428]
004cef8e  LEA EAX,[ESI + EAX*0x1 + 0x70]
004cef92  MOV word ptr [EAX + EDX*0x2 + -0x6],CX
004cef97  MOV ECX,dword ptr [EBP + -0x4]
004cef9a  MOV EDX,dword ptr [ECX + 0x428]
004cefa0  MOVSX EAX,word ptr [EBP + 0x8]
004cefa4  IMUL EAX,EAX,0xe
004cefa7  LEA ECX,[EDX + EAX*0x1 + 0x70]
004cefab  MOVSX EDX,word ptr [EBP + 0xc]
004cefaf  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x6]
004cefb4  CMP EAX,0x3000
004cefb9  JNZ 0x004ceff9
004cefbb  MOV ECX,dword ptr [EBP + -0x4]
004cefbe  MOV EDX,dword ptr [ECX + 0x428]
004cefc4  MOVSX EAX,word ptr [EBP + 0x8]
004cefc8  IMUL EAX,EAX,0xe
004cefcb  LEA ECX,[EDX + EAX*0x1 + 0x70]
004cefcf  MOVSX EDX,word ptr [EBP + 0xc]
004cefd3  MOV AX,word ptr [ECX + EDX*0x2 + -0x6]
004cefd8  SUB AX,0x1
004cefdc  MOVSX ECX,word ptr [EBP + 0xc]
004cefe0  MOVSX EDX,word ptr [EBP + 0x8]
004cefe4  IMUL EDX,EDX,0xe
004cefe7  MOV ESI,dword ptr [EBP + -0x4]
004cefea  MOV ESI,dword ptr [ESI + 0x428]
004ceff0  LEA EDX,[ESI + EDX*0x1 + 0x70]
004ceff4  MOV word ptr [EDX + ECX*0x2 + -0x6],AX
004ceff9  MOVSX ESI,word ptr [EBP + 0xc]
004ceffd  MOV ECX,dword ptr [0x00791364]
004cf003  CALL 0x0047f950
004cf008  CMP ESI,EAX
004cf00a  JGE 0x004cf0b1
004cf010  MOV EAX,dword ptr [EBP + -0x4]
004cf013  MOV ECX,dword ptr [EAX + 0x428]
004cf019  MOVSX EDX,word ptr [EBP + 0x8]
004cf01d  IMUL EDX,EDX,0xe
004cf020  LEA EAX,[ECX + EDX*0x1 + 0x70]
004cf024  MOVSX ECX,word ptr [EBP + 0xc]
004cf028  MOV DX,word ptr [EAX + ECX*0x2 + -0x2]
004cf02d  ADD DX,0x1
004cf031  MOVSX EAX,word ptr [EBP + 0xc]
004cf035  MOVSX ECX,word ptr [EBP + 0x8]
004cf039  IMUL ECX,ECX,0xe
004cf03c  MOV ESI,dword ptr [EBP + -0x4]
004cf03f  MOV ESI,dword ptr [ESI + 0x428]
004cf045  LEA ECX,[ESI + ECX*0x1 + 0x70]
004cf049  MOV word ptr [ECX + EAX*0x2 + -0x2],DX
004cf04e  MOV EDX,dword ptr [EBP + -0x4]
004cf051  MOV EAX,dword ptr [EDX + 0x428]
004cf057  MOVSX ECX,word ptr [EBP + 0x8]
004cf05b  IMUL ECX,ECX,0xe
004cf05e  LEA EDX,[EAX + ECX*0x1 + 0x70]
004cf062  MOVSX EAX,word ptr [EBP + 0xc]
004cf066  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x2]
004cf06b  CMP ECX,0x3000
004cf071  JNZ 0x004cf0b1
004cf073  MOV EDX,dword ptr [EBP + -0x4]
004cf076  MOV EAX,dword ptr [EDX + 0x428]
004cf07c  MOVSX ECX,word ptr [EBP + 0x8]
004cf080  IMUL ECX,ECX,0xe
004cf083  LEA EDX,[EAX + ECX*0x1 + 0x70]
004cf087  MOVSX EAX,word ptr [EBP + 0xc]
004cf08b  MOV CX,word ptr [EDX + EAX*0x2 + -0x2]
004cf090  SUB CX,0x1
004cf094  MOVSX EDX,word ptr [EBP + 0xc]
004cf098  MOVSX EAX,word ptr [EBP + 0x8]
004cf09c  IMUL EAX,EAX,0xe
004cf09f  MOV ESI,dword ptr [EBP + -0x4]
004cf0a2  MOV ESI,dword ptr [ESI + 0x428]
004cf0a8  LEA EAX,[ESI + EAX*0x1 + 0x70]
004cf0ac  MOV word ptr [EAX + EDX*0x2 + -0x2],CX
004cf0b1  POP ESI
004cf0b2  MOV ESP,EBP
004cf0b4  POP EBP
004cf0b5  RET 0x8
