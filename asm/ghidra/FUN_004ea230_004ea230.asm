; FUN_004ea230  004ea230
004ea230  PUSH EBP
004ea231  MOV EBP,ESP
004ea233  PUSH ECX
004ea234  PUSH ESI
004ea235  MOV dword ptr [EBP + -0x4],ECX
004ea238  MOVSX EAX,word ptr [EBP + 0x8]
004ea23c  TEST EAX,EAX
004ea23e  JGE 0x004ea257
004ea240  PUSH 0x26da
004ea245  PUSH 0x6bf384
004ea24a  PUSH 0x6bf888
004ea24f  CALL 0x005e9f20
004ea254  ADD ESP,0xc
004ea257  MOVSX ESI,word ptr [EBP + 0x8]
004ea25b  MOV ECX,dword ptr [0x00791364]
004ea261  CALL 0x0047f950
004ea266  CMP ESI,EAX
004ea268  JL 0x004ea281
004ea26a  PUSH 0x26db
004ea26f  PUSH 0x6bf384
004ea274  PUSH 0x6bf858
004ea279  CALL 0x005e9f20
004ea27e  ADD ESP,0xc
004ea281  MOVSX EAX,word ptr [EBP + 0xc]
004ea285  CMP EAX,0x2
004ea288  JGE 0x004ea2a1
004ea28a  PUSH 0x26dc
004ea28f  PUSH 0x6bf384
004ea294  PUSH 0x6bf778
004ea299  CALL 0x005e9f20
004ea29e  ADD ESP,0xc
004ea2a1  MOVSX ESI,word ptr [EBP + 0xc]
004ea2a5  MOV ECX,dword ptr [0x00791364]
004ea2ab  CALL 0x0047f950
004ea2b0  CMP ESI,EAX
004ea2b2  JLE 0x004ea2cb
004ea2b4  PUSH 0x26dd
004ea2b9  PUSH 0x6bf384
004ea2be  PUSH 0x6bf740
004ea2c3  CALL 0x005e9f20
004ea2c8  ADD ESP,0xc
004ea2cb  MOV EAX,dword ptr [EBP + -0x4]
004ea2ce  MOV ECX,dword ptr [EAX + 0x428]
004ea2d4  MOVSX EDX,word ptr [EBP + 0x8]
004ea2d8  IMUL EDX,EDX,0xe
004ea2db  LEA EAX,[ECX + EDX*0x1 + 0xab8]
004ea2e2  MOVSX ECX,word ptr [EBP + 0xc]
004ea2e6  MOV DX,word ptr [EAX + ECX*0x2 + -0x4]
004ea2eb  ADD DX,0x1
004ea2ef  MOVSX EAX,word ptr [EBP + 0xc]
004ea2f3  MOVSX ECX,word ptr [EBP + 0x8]
004ea2f7  IMUL ECX,ECX,0xe
004ea2fa  MOV ESI,dword ptr [EBP + -0x4]
004ea2fd  MOV ESI,dword ptr [ESI + 0x428]
004ea303  LEA ECX,[ESI + ECX*0x1 + 0xab8]
004ea30a  MOV word ptr [ECX + EAX*0x2 + -0x4],DX
004ea30f  MOV EDX,dword ptr [EBP + -0x4]
004ea312  MOV EAX,dword ptr [EDX + 0x428]
004ea318  MOVSX ECX,word ptr [EBP + 0x8]
004ea31c  IMUL ECX,ECX,0xe
004ea31f  LEA EDX,[EAX + ECX*0x1 + 0xab8]
004ea326  MOVSX EAX,word ptr [EBP + 0xc]
004ea32a  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x4]
004ea32f  CMP ECX,0x3000
004ea335  JNZ 0x004ea37b
004ea337  MOV EDX,dword ptr [EBP + -0x4]
004ea33a  MOV EAX,dword ptr [EDX + 0x428]
004ea340  MOVSX ECX,word ptr [EBP + 0x8]
004ea344  IMUL ECX,ECX,0xe
004ea347  LEA EDX,[EAX + ECX*0x1 + 0xab8]
004ea34e  MOVSX EAX,word ptr [EBP + 0xc]
004ea352  MOV CX,word ptr [EDX + EAX*0x2 + -0x4]
004ea357  SUB CX,0x1
004ea35b  MOVSX EDX,word ptr [EBP + 0xc]
004ea35f  MOVSX EAX,word ptr [EBP + 0x8]
004ea363  IMUL EAX,EAX,0xe
004ea366  MOV ESI,dword ptr [EBP + -0x4]
004ea369  MOV ESI,dword ptr [ESI + 0x428]
004ea36f  LEA EAX,[ESI + EAX*0x1 + 0xab8]
004ea376  MOV word ptr [EAX + EDX*0x2 + -0x4],CX
004ea37b  MOVSX ECX,word ptr [EBP + 0xc]
004ea37f  CMP ECX,0x2
004ea382  JLE 0x004ea437
004ea388  MOV EDX,dword ptr [EBP + -0x4]
004ea38b  MOV EAX,dword ptr [EDX + 0x428]
004ea391  MOVSX ECX,word ptr [EBP + 0x8]
004ea395  IMUL ECX,ECX,0xe
004ea398  LEA EDX,[EAX + ECX*0x1 + 0xab8]
004ea39f  MOVSX EAX,word ptr [EBP + 0xc]
004ea3a3  MOV CX,word ptr [EDX + EAX*0x2 + -0x6]
004ea3a8  ADD CX,0x1
004ea3ac  MOVSX EDX,word ptr [EBP + 0xc]
004ea3b0  MOVSX EAX,word ptr [EBP + 0x8]
004ea3b4  IMUL EAX,EAX,0xe
004ea3b7  MOV ESI,dword ptr [EBP + -0x4]
004ea3ba  MOV ESI,dword ptr [ESI + 0x428]
004ea3c0  LEA EAX,[ESI + EAX*0x1 + 0xab8]
004ea3c7  MOV word ptr [EAX + EDX*0x2 + -0x6],CX
004ea3cc  MOV ECX,dword ptr [EBP + -0x4]
004ea3cf  MOV EDX,dword ptr [ECX + 0x428]
004ea3d5  MOVSX EAX,word ptr [EBP + 0x8]
004ea3d9  IMUL EAX,EAX,0xe
004ea3dc  LEA ECX,[EDX + EAX*0x1 + 0xab8]
004ea3e3  MOVSX EDX,word ptr [EBP + 0xc]
004ea3e7  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x6]
004ea3ec  CMP EAX,0x3000
004ea3f1  JNZ 0x004ea437
004ea3f3  MOV ECX,dword ptr [EBP + -0x4]
004ea3f6  MOV EDX,dword ptr [ECX + 0x428]
004ea3fc  MOVSX EAX,word ptr [EBP + 0x8]
004ea400  IMUL EAX,EAX,0xe
004ea403  LEA ECX,[EDX + EAX*0x1 + 0xab8]
004ea40a  MOVSX EDX,word ptr [EBP + 0xc]
004ea40e  MOV AX,word ptr [ECX + EDX*0x2 + -0x6]
004ea413  SUB AX,0x1
004ea417  MOVSX ECX,word ptr [EBP + 0xc]
004ea41b  MOVSX EDX,word ptr [EBP + 0x8]
004ea41f  IMUL EDX,EDX,0xe
004ea422  MOV ESI,dword ptr [EBP + -0x4]
004ea425  MOV ESI,dword ptr [ESI + 0x428]
004ea42b  LEA EDX,[ESI + EDX*0x1 + 0xab8]
004ea432  MOV word ptr [EDX + ECX*0x2 + -0x6],AX
004ea437  MOVSX ESI,word ptr [EBP + 0xc]
004ea43b  MOV ECX,dword ptr [0x00791364]
004ea441  CALL 0x0047f950
004ea446  CMP ESI,EAX
004ea448  JGE 0x004ea4fe
004ea44e  MOV EAX,dword ptr [EBP + -0x4]
004ea451  MOV ECX,dword ptr [EAX + 0x428]
004ea457  MOVSX EDX,word ptr [EBP + 0x8]
004ea45b  IMUL EDX,EDX,0xe
004ea45e  LEA EAX,[ECX + EDX*0x1 + 0xab8]
004ea465  MOVSX ECX,word ptr [EBP + 0xc]
004ea469  MOV DX,word ptr [EAX + ECX*0x2 + -0x2]
004ea46e  ADD DX,0x1
004ea472  MOVSX EAX,word ptr [EBP + 0xc]
004ea476  MOVSX ECX,word ptr [EBP + 0x8]
004ea47a  IMUL ECX,ECX,0xe
004ea47d  MOV ESI,dword ptr [EBP + -0x4]
004ea480  MOV ESI,dword ptr [ESI + 0x428]
004ea486  LEA ECX,[ESI + ECX*0x1 + 0xab8]
004ea48d  MOV word ptr [ECX + EAX*0x2 + -0x2],DX
004ea492  MOV EDX,dword ptr [EBP + -0x4]
004ea495  MOV EAX,dword ptr [EDX + 0x428]
004ea49b  MOVSX ECX,word ptr [EBP + 0x8]
004ea49f  IMUL ECX,ECX,0xe
004ea4a2  LEA EDX,[EAX + ECX*0x1 + 0xab8]
004ea4a9  MOVSX EAX,word ptr [EBP + 0xc]
004ea4ad  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x2]
004ea4b2  CMP ECX,0x3000
004ea4b8  JNZ 0x004ea4fe
004ea4ba  MOV EDX,dword ptr [EBP + -0x4]
004ea4bd  MOV EAX,dword ptr [EDX + 0x428]
004ea4c3  MOVSX ECX,word ptr [EBP + 0x8]
004ea4c7  IMUL ECX,ECX,0xe
004ea4ca  LEA EDX,[EAX + ECX*0x1 + 0xab8]
004ea4d1  MOVSX EAX,word ptr [EBP + 0xc]
004ea4d5  MOV CX,word ptr [EDX + EAX*0x2 + -0x2]
004ea4da  SUB CX,0x1
004ea4de  MOVSX EDX,word ptr [EBP + 0xc]
004ea4e2  MOVSX EAX,word ptr [EBP + 0x8]
004ea4e6  IMUL EAX,EAX,0xe
004ea4e9  MOV ESI,dword ptr [EBP + -0x4]
004ea4ec  MOV ESI,dword ptr [ESI + 0x428]
004ea4f2  LEA EAX,[ESI + EAX*0x1 + 0xab8]
004ea4f9  MOV word ptr [EAX + EDX*0x2 + -0x2],CX
004ea4fe  POP ESI
004ea4ff  MOV ESP,EBP
004ea501  POP EBP
004ea502  RET 0x8
