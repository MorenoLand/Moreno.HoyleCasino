; FUN_004cf0c0  004cf0c0
004cf0c0  PUSH EBP
004cf0c1  MOV EBP,ESP
004cf0c3  PUSH ECX
004cf0c4  PUSH ESI
004cf0c5  MOV dword ptr [EBP + -0x4],ECX
004cf0c8  MOVSX EAX,word ptr [EBP + 0x8]
004cf0cc  TEST EAX,EAX
004cf0ce  JGE 0x004cf0e7
004cf0d0  PUSH 0xcd0
004cf0d5  PUSH 0x6bf384
004cf0da  PUSH 0x6bf888
004cf0df  CALL 0x005e9f20
004cf0e4  ADD ESP,0xc
004cf0e7  MOVSX ESI,word ptr [EBP + 0x8]
004cf0eb  MOV ECX,dword ptr [0x00791364]
004cf0f1  CALL 0x0047f950
004cf0f6  CMP ESI,EAX
004cf0f8  JL 0x004cf111
004cf0fa  PUSH 0xcd1
004cf0ff  PUSH 0x6bf384
004cf104  PUSH 0x6bf858
004cf109  CALL 0x005e9f20
004cf10e  ADD ESP,0xc
004cf111  MOVSX EAX,word ptr [EBP + 0xc]
004cf115  CMP EAX,0x2
004cf118  JGE 0x004cf131
004cf11a  PUSH 0xcd2
004cf11f  PUSH 0x6bf384
004cf124  PUSH 0x6bf778
004cf129  CALL 0x005e9f20
004cf12e  ADD ESP,0xc
004cf131  MOVSX ESI,word ptr [EBP + 0xc]
004cf135  MOV ECX,dword ptr [0x00791364]
004cf13b  CALL 0x0047f950
004cf140  CMP ESI,EAX
004cf142  JLE 0x004cf15b
004cf144  PUSH 0xcd3
004cf149  PUSH 0x6bf384
004cf14e  PUSH 0x6bf740
004cf153  CALL 0x005e9f20
004cf158  ADD ESP,0xc
004cf15b  MOV EAX,dword ptr [EBP + -0x4]
004cf15e  MOV ECX,dword ptr [EAX + 0x428]
004cf164  MOVSX EDX,word ptr [EBP + 0x8]
004cf168  IMUL EDX,EDX,0xe
004cf16b  LEA EAX,[ECX + EDX*0x1 + 0xe0]
004cf172  MOVSX ECX,word ptr [EBP + 0xc]
004cf176  MOV DX,word ptr [EAX + ECX*0x2 + -0x4]
004cf17b  ADD DX,0x1
004cf17f  MOVSX EAX,word ptr [EBP + 0xc]
004cf183  MOVSX ECX,word ptr [EBP + 0x8]
004cf187  IMUL ECX,ECX,0xe
004cf18a  MOV ESI,dword ptr [EBP + -0x4]
004cf18d  MOV ESI,dword ptr [ESI + 0x428]
004cf193  LEA ECX,[ESI + ECX*0x1 + 0xe0]
004cf19a  MOV word ptr [ECX + EAX*0x2 + -0x4],DX
004cf19f  MOV EDX,dword ptr [EBP + -0x4]
004cf1a2  MOV EAX,dword ptr [EDX + 0x428]
004cf1a8  MOVSX ECX,word ptr [EBP + 0x8]
004cf1ac  IMUL ECX,ECX,0xe
004cf1af  LEA EDX,[EAX + ECX*0x1 + 0xe0]
004cf1b6  MOVSX EAX,word ptr [EBP + 0xc]
004cf1ba  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x4]
004cf1bf  CMP ECX,0x3000
004cf1c5  JNZ 0x004cf20b
004cf1c7  MOV EDX,dword ptr [EBP + -0x4]
004cf1ca  MOV EAX,dword ptr [EDX + 0x428]
004cf1d0  MOVSX ECX,word ptr [EBP + 0x8]
004cf1d4  IMUL ECX,ECX,0xe
004cf1d7  LEA EDX,[EAX + ECX*0x1 + 0xe0]
004cf1de  MOVSX EAX,word ptr [EBP + 0xc]
004cf1e2  MOV CX,word ptr [EDX + EAX*0x2 + -0x4]
004cf1e7  SUB CX,0x1
004cf1eb  MOVSX EDX,word ptr [EBP + 0xc]
004cf1ef  MOVSX EAX,word ptr [EBP + 0x8]
004cf1f3  IMUL EAX,EAX,0xe
004cf1f6  MOV ESI,dword ptr [EBP + -0x4]
004cf1f9  MOV ESI,dword ptr [ESI + 0x428]
004cf1ff  LEA EAX,[ESI + EAX*0x1 + 0xe0]
004cf206  MOV word ptr [EAX + EDX*0x2 + -0x4],CX
004cf20b  MOVSX ECX,word ptr [EBP + 0xc]
004cf20f  CMP ECX,0x2
004cf212  JLE 0x004cf2c7
004cf218  MOV EDX,dword ptr [EBP + -0x4]
004cf21b  MOV EAX,dword ptr [EDX + 0x428]
004cf221  MOVSX ECX,word ptr [EBP + 0x8]
004cf225  IMUL ECX,ECX,0xe
004cf228  LEA EDX,[EAX + ECX*0x1 + 0xe0]
004cf22f  MOVSX EAX,word ptr [EBP + 0xc]
004cf233  MOV CX,word ptr [EDX + EAX*0x2 + -0x6]
004cf238  ADD CX,0x1
004cf23c  MOVSX EDX,word ptr [EBP + 0xc]
004cf240  MOVSX EAX,word ptr [EBP + 0x8]
004cf244  IMUL EAX,EAX,0xe
004cf247  MOV ESI,dword ptr [EBP + -0x4]
004cf24a  MOV ESI,dword ptr [ESI + 0x428]
004cf250  LEA EAX,[ESI + EAX*0x1 + 0xe0]
004cf257  MOV word ptr [EAX + EDX*0x2 + -0x6],CX
004cf25c  MOV ECX,dword ptr [EBP + -0x4]
004cf25f  MOV EDX,dword ptr [ECX + 0x428]
004cf265  MOVSX EAX,word ptr [EBP + 0x8]
004cf269  IMUL EAX,EAX,0xe
004cf26c  LEA ECX,[EDX + EAX*0x1 + 0xe0]
004cf273  MOVSX EDX,word ptr [EBP + 0xc]
004cf277  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x6]
004cf27c  CMP EAX,0x3000
004cf281  JNZ 0x004cf2c7
004cf283  MOV ECX,dword ptr [EBP + -0x4]
004cf286  MOV EDX,dword ptr [ECX + 0x428]
004cf28c  MOVSX EAX,word ptr [EBP + 0x8]
004cf290  IMUL EAX,EAX,0xe
004cf293  LEA ECX,[EDX + EAX*0x1 + 0xe0]
004cf29a  MOVSX EDX,word ptr [EBP + 0xc]
004cf29e  MOV AX,word ptr [ECX + EDX*0x2 + -0x6]
004cf2a3  SUB AX,0x1
004cf2a7  MOVSX ECX,word ptr [EBP + 0xc]
004cf2ab  MOVSX EDX,word ptr [EBP + 0x8]
004cf2af  IMUL EDX,EDX,0xe
004cf2b2  MOV ESI,dword ptr [EBP + -0x4]
004cf2b5  MOV ESI,dword ptr [ESI + 0x428]
004cf2bb  LEA EDX,[ESI + EDX*0x1 + 0xe0]
004cf2c2  MOV word ptr [EDX + ECX*0x2 + -0x6],AX
004cf2c7  MOVSX ESI,word ptr [EBP + 0xc]
004cf2cb  MOV ECX,dword ptr [0x00791364]
004cf2d1  CALL 0x0047f950
004cf2d6  CMP ESI,EAX
004cf2d8  JGE 0x004cf38e
004cf2de  MOV EAX,dword ptr [EBP + -0x4]
004cf2e1  MOV ECX,dword ptr [EAX + 0x428]
004cf2e7  MOVSX EDX,word ptr [EBP + 0x8]
004cf2eb  IMUL EDX,EDX,0xe
004cf2ee  LEA EAX,[ECX + EDX*0x1 + 0xe0]
004cf2f5  MOVSX ECX,word ptr [EBP + 0xc]
004cf2f9  MOV DX,word ptr [EAX + ECX*0x2 + -0x2]
004cf2fe  ADD DX,0x1
004cf302  MOVSX EAX,word ptr [EBP + 0xc]
004cf306  MOVSX ECX,word ptr [EBP + 0x8]
004cf30a  IMUL ECX,ECX,0xe
004cf30d  MOV ESI,dword ptr [EBP + -0x4]
004cf310  MOV ESI,dword ptr [ESI + 0x428]
004cf316  LEA ECX,[ESI + ECX*0x1 + 0xe0]
004cf31d  MOV word ptr [ECX + EAX*0x2 + -0x2],DX
004cf322  MOV EDX,dword ptr [EBP + -0x4]
004cf325  MOV EAX,dword ptr [EDX + 0x428]
004cf32b  MOVSX ECX,word ptr [EBP + 0x8]
004cf32f  IMUL ECX,ECX,0xe
004cf332  LEA EDX,[EAX + ECX*0x1 + 0xe0]
004cf339  MOVSX EAX,word ptr [EBP + 0xc]
004cf33d  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x2]
004cf342  CMP ECX,0x3000
004cf348  JNZ 0x004cf38e
004cf34a  MOV EDX,dword ptr [EBP + -0x4]
004cf34d  MOV EAX,dword ptr [EDX + 0x428]
004cf353  MOVSX ECX,word ptr [EBP + 0x8]
004cf357  IMUL ECX,ECX,0xe
004cf35a  LEA EDX,[EAX + ECX*0x1 + 0xe0]
004cf361  MOVSX EAX,word ptr [EBP + 0xc]
004cf365  MOV CX,word ptr [EDX + EAX*0x2 + -0x2]
004cf36a  SUB CX,0x1
004cf36e  MOVSX EDX,word ptr [EBP + 0xc]
004cf372  MOVSX EAX,word ptr [EBP + 0x8]
004cf376  IMUL EAX,EAX,0xe
004cf379  MOV ESI,dword ptr [EBP + -0x4]
004cf37c  MOV ESI,dword ptr [ESI + 0x428]
004cf382  LEA EAX,[ESI + EAX*0x1 + 0xe0]
004cf389  MOV word ptr [EAX + EDX*0x2 + -0x2],CX
004cf38e  POP ESI
004cf38f  MOV ESP,EBP
004cf391  POP EBP
004cf392  RET 0x8
