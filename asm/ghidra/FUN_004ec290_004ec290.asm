; FUN_004ec290  004ec290
004ec290  PUSH EBP
004ec291  MOV EBP,ESP
004ec293  PUSH ECX
004ec294  PUSH ESI
004ec295  MOV dword ptr [EBP + -0x4],ECX
004ec298  MOVSX EAX,word ptr [EBP + 0x8]
004ec29c  TEST EAX,EAX
004ec29e  JGE 0x004ec2b7
004ec2a0  PUSH 0x294b
004ec2a5  PUSH 0x6bf384
004ec2aa  PUSH 0x6bf888
004ec2af  CALL 0x005e9f20
004ec2b4  ADD ESP,0xc
004ec2b7  MOVSX ESI,word ptr [EBP + 0x8]
004ec2bb  MOV ECX,dword ptr [0x00791364]
004ec2c1  CALL 0x0047f950
004ec2c6  CMP ESI,EAX
004ec2c8  JL 0x004ec2e1
004ec2ca  PUSH 0x294c
004ec2cf  PUSH 0x6bf384
004ec2d4  PUSH 0x6bf858
004ec2d9  CALL 0x005e9f20
004ec2de  ADD ESP,0xc
004ec2e1  MOVSX EAX,word ptr [EBP + 0xc]
004ec2e5  CMP EAX,0x2
004ec2e8  JGE 0x004ec301
004ec2ea  PUSH 0x294d
004ec2ef  PUSH 0x6bf384
004ec2f4  PUSH 0x6bf778
004ec2f9  CALL 0x005e9f20
004ec2fe  ADD ESP,0xc
004ec301  MOVSX ESI,word ptr [EBP + 0xc]
004ec305  MOV ECX,dword ptr [0x00791364]
004ec30b  CALL 0x0047f950
004ec310  CMP ESI,EAX
004ec312  JLE 0x004ec32b
004ec314  PUSH 0x294e
004ec319  PUSH 0x6bf384
004ec31e  PUSH 0x6bf740
004ec323  CALL 0x005e9f20
004ec328  ADD ESP,0xc
004ec32b  MOV EAX,dword ptr [EBP + -0x4]
004ec32e  MOV ECX,dword ptr [EAX + 0x428]
004ec334  MOVSX EDX,word ptr [EBP + 0x8]
004ec338  IMUL EDX,EDX,0xe
004ec33b  LEA EAX,[ECX + EDX*0x1 + 0x700]
004ec342  MOVSX ECX,word ptr [EBP + 0xc]
004ec346  MOV DX,word ptr [EAX + ECX*0x2 + -0x4]
004ec34b  ADD DX,0x1
004ec34f  MOVSX EAX,word ptr [EBP + 0xc]
004ec353  MOVSX ECX,word ptr [EBP + 0x8]
004ec357  IMUL ECX,ECX,0xe
004ec35a  MOV ESI,dword ptr [EBP + -0x4]
004ec35d  MOV ESI,dword ptr [ESI + 0x428]
004ec363  LEA ECX,[ESI + ECX*0x1 + 0x700]
004ec36a  MOV word ptr [ECX + EAX*0x2 + -0x4],DX
004ec36f  MOV EDX,dword ptr [EBP + -0x4]
004ec372  MOV EAX,dword ptr [EDX + 0x428]
004ec378  MOVSX ECX,word ptr [EBP + 0x8]
004ec37c  IMUL ECX,ECX,0xe
004ec37f  LEA EDX,[EAX + ECX*0x1 + 0x700]
004ec386  MOVSX EAX,word ptr [EBP + 0xc]
004ec38a  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x4]
004ec38f  CMP ECX,0x3000
004ec395  JNZ 0x004ec3db
004ec397  MOV EDX,dword ptr [EBP + -0x4]
004ec39a  MOV EAX,dword ptr [EDX + 0x428]
004ec3a0  MOVSX ECX,word ptr [EBP + 0x8]
004ec3a4  IMUL ECX,ECX,0xe
004ec3a7  LEA EDX,[EAX + ECX*0x1 + 0x700]
004ec3ae  MOVSX EAX,word ptr [EBP + 0xc]
004ec3b2  MOV CX,word ptr [EDX + EAX*0x2 + -0x4]
004ec3b7  SUB CX,0x1
004ec3bb  MOVSX EDX,word ptr [EBP + 0xc]
004ec3bf  MOVSX EAX,word ptr [EBP + 0x8]
004ec3c3  IMUL EAX,EAX,0xe
004ec3c6  MOV ESI,dword ptr [EBP + -0x4]
004ec3c9  MOV ESI,dword ptr [ESI + 0x428]
004ec3cf  LEA EAX,[ESI + EAX*0x1 + 0x700]
004ec3d6  MOV word ptr [EAX + EDX*0x2 + -0x4],CX
004ec3db  MOVSX ECX,word ptr [EBP + 0xc]
004ec3df  CMP ECX,0x2
004ec3e2  JLE 0x004ec497
004ec3e8  MOV EDX,dword ptr [EBP + -0x4]
004ec3eb  MOV EAX,dword ptr [EDX + 0x428]
004ec3f1  MOVSX ECX,word ptr [EBP + 0x8]
004ec3f5  IMUL ECX,ECX,0xe
004ec3f8  LEA EDX,[EAX + ECX*0x1 + 0x700]
004ec3ff  MOVSX EAX,word ptr [EBP + 0xc]
004ec403  MOV CX,word ptr [EDX + EAX*0x2 + -0x6]
004ec408  ADD CX,0x1
004ec40c  MOVSX EDX,word ptr [EBP + 0xc]
004ec410  MOVSX EAX,word ptr [EBP + 0x8]
004ec414  IMUL EAX,EAX,0xe
004ec417  MOV ESI,dword ptr [EBP + -0x4]
004ec41a  MOV ESI,dword ptr [ESI + 0x428]
004ec420  LEA EAX,[ESI + EAX*0x1 + 0x700]
004ec427  MOV word ptr [EAX + EDX*0x2 + -0x6],CX
004ec42c  MOV ECX,dword ptr [EBP + -0x4]
004ec42f  MOV EDX,dword ptr [ECX + 0x428]
004ec435  MOVSX EAX,word ptr [EBP + 0x8]
004ec439  IMUL EAX,EAX,0xe
004ec43c  LEA ECX,[EDX + EAX*0x1 + 0x700]
004ec443  MOVSX EDX,word ptr [EBP + 0xc]
004ec447  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x6]
004ec44c  CMP EAX,0x3000
004ec451  JNZ 0x004ec497
004ec453  MOV ECX,dword ptr [EBP + -0x4]
004ec456  MOV EDX,dword ptr [ECX + 0x428]
004ec45c  MOVSX EAX,word ptr [EBP + 0x8]
004ec460  IMUL EAX,EAX,0xe
004ec463  LEA ECX,[EDX + EAX*0x1 + 0x700]
004ec46a  MOVSX EDX,word ptr [EBP + 0xc]
004ec46e  MOV AX,word ptr [ECX + EDX*0x2 + -0x6]
004ec473  SUB AX,0x1
004ec477  MOVSX ECX,word ptr [EBP + 0xc]
004ec47b  MOVSX EDX,word ptr [EBP + 0x8]
004ec47f  IMUL EDX,EDX,0xe
004ec482  MOV ESI,dword ptr [EBP + -0x4]
004ec485  MOV ESI,dword ptr [ESI + 0x428]
004ec48b  LEA EDX,[ESI + EDX*0x1 + 0x700]
004ec492  MOV word ptr [EDX + ECX*0x2 + -0x6],AX
004ec497  MOVSX ESI,word ptr [EBP + 0xc]
004ec49b  MOV ECX,dword ptr [0x00791364]
004ec4a1  CALL 0x0047f950
004ec4a6  CMP ESI,EAX
004ec4a8  JGE 0x004ec55e
004ec4ae  MOV EAX,dword ptr [EBP + -0x4]
004ec4b1  MOV ECX,dword ptr [EAX + 0x428]
004ec4b7  MOVSX EDX,word ptr [EBP + 0x8]
004ec4bb  IMUL EDX,EDX,0xe
004ec4be  LEA EAX,[ECX + EDX*0x1 + 0x700]
004ec4c5  MOVSX ECX,word ptr [EBP + 0xc]
004ec4c9  MOV DX,word ptr [EAX + ECX*0x2 + -0x2]
004ec4ce  ADD DX,0x1
004ec4d2  MOVSX EAX,word ptr [EBP + 0xc]
004ec4d6  MOVSX ECX,word ptr [EBP + 0x8]
004ec4da  IMUL ECX,ECX,0xe
004ec4dd  MOV ESI,dword ptr [EBP + -0x4]
004ec4e0  MOV ESI,dword ptr [ESI + 0x428]
004ec4e6  LEA ECX,[ESI + ECX*0x1 + 0x700]
004ec4ed  MOV word ptr [ECX + EAX*0x2 + -0x2],DX
004ec4f2  MOV EDX,dword ptr [EBP + -0x4]
004ec4f5  MOV EAX,dword ptr [EDX + 0x428]
004ec4fb  MOVSX ECX,word ptr [EBP + 0x8]
004ec4ff  IMUL ECX,ECX,0xe
004ec502  LEA EDX,[EAX + ECX*0x1 + 0x700]
004ec509  MOVSX EAX,word ptr [EBP + 0xc]
004ec50d  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x2]
004ec512  CMP ECX,0x3000
004ec518  JNZ 0x004ec55e
004ec51a  MOV EDX,dword ptr [EBP + -0x4]
004ec51d  MOV EAX,dword ptr [EDX + 0x428]
004ec523  MOVSX ECX,word ptr [EBP + 0x8]
004ec527  IMUL ECX,ECX,0xe
004ec52a  LEA EDX,[EAX + ECX*0x1 + 0x700]
004ec531  MOVSX EAX,word ptr [EBP + 0xc]
004ec535  MOV CX,word ptr [EDX + EAX*0x2 + -0x2]
004ec53a  SUB CX,0x1
004ec53e  MOVSX EDX,word ptr [EBP + 0xc]
004ec542  MOVSX EAX,word ptr [EBP + 0x8]
004ec546  IMUL EAX,EAX,0xe
004ec549  MOV ESI,dword ptr [EBP + -0x4]
004ec54c  MOV ESI,dword ptr [ESI + 0x428]
004ec552  LEA EAX,[ESI + EAX*0x1 + 0x700]
004ec559  MOV word ptr [EAX + EDX*0x2 + -0x2],CX
004ec55e  POP ESI
004ec55f  MOV ESP,EBP
004ec561  POP EBP
004ec562  RET 0x8
