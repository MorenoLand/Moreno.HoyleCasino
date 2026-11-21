; FUN_004ec570  004ec570
004ec570  PUSH EBP
004ec571  MOV EBP,ESP
004ec573  PUSH ECX
004ec574  PUSH ESI
004ec575  MOV dword ptr [EBP + -0x4],ECX
004ec578  MOVSX EAX,word ptr [EBP + 0x8]
004ec57c  TEST EAX,EAX
004ec57e  JGE 0x004ec597
004ec580  PUSH 0x296a
004ec585  PUSH 0x6bf384
004ec58a  PUSH 0x6bf888
004ec58f  CALL 0x005e9f20
004ec594  ADD ESP,0xc
004ec597  MOVSX ESI,word ptr [EBP + 0x8]
004ec59b  MOV ECX,dword ptr [0x00791364]
004ec5a1  CALL 0x0047f950
004ec5a6  CMP ESI,EAX
004ec5a8  JL 0x004ec5c1
004ec5aa  PUSH 0x296b
004ec5af  PUSH 0x6bf384
004ec5b4  PUSH 0x6bf858
004ec5b9  CALL 0x005e9f20
004ec5be  ADD ESP,0xc
004ec5c1  MOVSX EAX,word ptr [EBP + 0xc]
004ec5c5  CMP EAX,0x2
004ec5c8  JGE 0x004ec5e1
004ec5ca  PUSH 0x296c
004ec5cf  PUSH 0x6bf384
004ec5d4  PUSH 0x6bf778
004ec5d9  CALL 0x005e9f20
004ec5de  ADD ESP,0xc
004ec5e1  MOVSX ESI,word ptr [EBP + 0xc]
004ec5e5  MOV ECX,dword ptr [0x00791364]
004ec5eb  CALL 0x0047f950
004ec5f0  CMP ESI,EAX
004ec5f2  JLE 0x004ec60b
004ec5f4  PUSH 0x296d
004ec5f9  PUSH 0x6bf384
004ec5fe  PUSH 0x6bf740
004ec603  CALL 0x005e9f20
004ec608  ADD ESP,0xc
004ec60b  MOV EAX,dword ptr [EBP + -0x4]
004ec60e  MOV ECX,dword ptr [EAX + 0x428]
004ec614  MOVSX EDX,word ptr [EBP + 0x8]
004ec618  IMUL EDX,EDX,0xe
004ec61b  LEA EAX,[ECX + EDX*0x1 + 0x770]
004ec622  MOVSX ECX,word ptr [EBP + 0xc]
004ec626  MOV DX,word ptr [EAX + ECX*0x2 + -0x4]
004ec62b  ADD DX,0x1
004ec62f  MOVSX EAX,word ptr [EBP + 0xc]
004ec633  MOVSX ECX,word ptr [EBP + 0x8]
004ec637  IMUL ECX,ECX,0xe
004ec63a  MOV ESI,dword ptr [EBP + -0x4]
004ec63d  MOV ESI,dword ptr [ESI + 0x428]
004ec643  LEA ECX,[ESI + ECX*0x1 + 0x770]
004ec64a  MOV word ptr [ECX + EAX*0x2 + -0x4],DX
004ec64f  MOV EDX,dword ptr [EBP + -0x4]
004ec652  MOV EAX,dword ptr [EDX + 0x428]
004ec658  MOVSX ECX,word ptr [EBP + 0x8]
004ec65c  IMUL ECX,ECX,0xe
004ec65f  LEA EDX,[EAX + ECX*0x1 + 0x770]
004ec666  MOVSX EAX,word ptr [EBP + 0xc]
004ec66a  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x4]
004ec66f  CMP ECX,0x3000
004ec675  JNZ 0x004ec6bb
004ec677  MOV EDX,dword ptr [EBP + -0x4]
004ec67a  MOV EAX,dword ptr [EDX + 0x428]
004ec680  MOVSX ECX,word ptr [EBP + 0x8]
004ec684  IMUL ECX,ECX,0xe
004ec687  LEA EDX,[EAX + ECX*0x1 + 0x770]
004ec68e  MOVSX EAX,word ptr [EBP + 0xc]
004ec692  MOV CX,word ptr [EDX + EAX*0x2 + -0x4]
004ec697  SUB CX,0x1
004ec69b  MOVSX EDX,word ptr [EBP + 0xc]
004ec69f  MOVSX EAX,word ptr [EBP + 0x8]
004ec6a3  IMUL EAX,EAX,0xe
004ec6a6  MOV ESI,dword ptr [EBP + -0x4]
004ec6a9  MOV ESI,dword ptr [ESI + 0x428]
004ec6af  LEA EAX,[ESI + EAX*0x1 + 0x770]
004ec6b6  MOV word ptr [EAX + EDX*0x2 + -0x4],CX
004ec6bb  MOVSX ECX,word ptr [EBP + 0xc]
004ec6bf  CMP ECX,0x2
004ec6c2  JLE 0x004ec777
004ec6c8  MOV EDX,dword ptr [EBP + -0x4]
004ec6cb  MOV EAX,dword ptr [EDX + 0x428]
004ec6d1  MOVSX ECX,word ptr [EBP + 0x8]
004ec6d5  IMUL ECX,ECX,0xe
004ec6d8  LEA EDX,[EAX + ECX*0x1 + 0x770]
004ec6df  MOVSX EAX,word ptr [EBP + 0xc]
004ec6e3  MOV CX,word ptr [EDX + EAX*0x2 + -0x6]
004ec6e8  ADD CX,0x1
004ec6ec  MOVSX EDX,word ptr [EBP + 0xc]
004ec6f0  MOVSX EAX,word ptr [EBP + 0x8]
004ec6f4  IMUL EAX,EAX,0xe
004ec6f7  MOV ESI,dword ptr [EBP + -0x4]
004ec6fa  MOV ESI,dword ptr [ESI + 0x428]
004ec700  LEA EAX,[ESI + EAX*0x1 + 0x770]
004ec707  MOV word ptr [EAX + EDX*0x2 + -0x6],CX
004ec70c  MOV ECX,dword ptr [EBP + -0x4]
004ec70f  MOV EDX,dword ptr [ECX + 0x428]
004ec715  MOVSX EAX,word ptr [EBP + 0x8]
004ec719  IMUL EAX,EAX,0xe
004ec71c  LEA ECX,[EDX + EAX*0x1 + 0x770]
004ec723  MOVSX EDX,word ptr [EBP + 0xc]
004ec727  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x6]
004ec72c  CMP EAX,0x3000
004ec731  JNZ 0x004ec777
004ec733  MOV ECX,dword ptr [EBP + -0x4]
004ec736  MOV EDX,dword ptr [ECX + 0x428]
004ec73c  MOVSX EAX,word ptr [EBP + 0x8]
004ec740  IMUL EAX,EAX,0xe
004ec743  LEA ECX,[EDX + EAX*0x1 + 0x770]
004ec74a  MOVSX EDX,word ptr [EBP + 0xc]
004ec74e  MOV AX,word ptr [ECX + EDX*0x2 + -0x6]
004ec753  SUB AX,0x1
004ec757  MOVSX ECX,word ptr [EBP + 0xc]
004ec75b  MOVSX EDX,word ptr [EBP + 0x8]
004ec75f  IMUL EDX,EDX,0xe
004ec762  MOV ESI,dword ptr [EBP + -0x4]
004ec765  MOV ESI,dword ptr [ESI + 0x428]
004ec76b  LEA EDX,[ESI + EDX*0x1 + 0x770]
004ec772  MOV word ptr [EDX + ECX*0x2 + -0x6],AX
004ec777  MOVSX ESI,word ptr [EBP + 0xc]
004ec77b  MOV ECX,dword ptr [0x00791364]
004ec781  CALL 0x0047f950
004ec786  CMP ESI,EAX
004ec788  JGE 0x004ec83e
004ec78e  MOV EAX,dword ptr [EBP + -0x4]
004ec791  MOV ECX,dword ptr [EAX + 0x428]
004ec797  MOVSX EDX,word ptr [EBP + 0x8]
004ec79b  IMUL EDX,EDX,0xe
004ec79e  LEA EAX,[ECX + EDX*0x1 + 0x770]
004ec7a5  MOVSX ECX,word ptr [EBP + 0xc]
004ec7a9  MOV DX,word ptr [EAX + ECX*0x2 + -0x2]
004ec7ae  ADD DX,0x1
004ec7b2  MOVSX EAX,word ptr [EBP + 0xc]
004ec7b6  MOVSX ECX,word ptr [EBP + 0x8]
004ec7ba  IMUL ECX,ECX,0xe
004ec7bd  MOV ESI,dword ptr [EBP + -0x4]
004ec7c0  MOV ESI,dword ptr [ESI + 0x428]
004ec7c6  LEA ECX,[ESI + ECX*0x1 + 0x770]
004ec7cd  MOV word ptr [ECX + EAX*0x2 + -0x2],DX
004ec7d2  MOV EDX,dword ptr [EBP + -0x4]
004ec7d5  MOV EAX,dword ptr [EDX + 0x428]
004ec7db  MOVSX ECX,word ptr [EBP + 0x8]
004ec7df  IMUL ECX,ECX,0xe
004ec7e2  LEA EDX,[EAX + ECX*0x1 + 0x770]
004ec7e9  MOVSX EAX,word ptr [EBP + 0xc]
004ec7ed  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x2]
004ec7f2  CMP ECX,0x3000
004ec7f8  JNZ 0x004ec83e
004ec7fa  MOV EDX,dword ptr [EBP + -0x4]
004ec7fd  MOV EAX,dword ptr [EDX + 0x428]
004ec803  MOVSX ECX,word ptr [EBP + 0x8]
004ec807  IMUL ECX,ECX,0xe
004ec80a  LEA EDX,[EAX + ECX*0x1 + 0x770]
004ec811  MOVSX EAX,word ptr [EBP + 0xc]
004ec815  MOV CX,word ptr [EDX + EAX*0x2 + -0x2]
004ec81a  SUB CX,0x1
004ec81e  MOVSX EDX,word ptr [EBP + 0xc]
004ec822  MOVSX EAX,word ptr [EBP + 0x8]
004ec826  IMUL EAX,EAX,0xe
004ec829  MOV ESI,dword ptr [EBP + -0x4]
004ec82c  MOV ESI,dword ptr [ESI + 0x428]
004ec832  LEA EAX,[ESI + EAX*0x1 + 0x770]
004ec839  MOV word ptr [EAX + EDX*0x2 + -0x2],CX
004ec83e  POP ESI
004ec83f  MOV ESP,EBP
004ec841  POP EBP
004ec842  RET 0x8
