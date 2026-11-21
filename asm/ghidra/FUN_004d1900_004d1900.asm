; FUN_004d1900  004d1900
004d1900  PUSH EBP
004d1901  MOV EBP,ESP
004d1903  PUSH ECX
004d1904  PUSH ESI
004d1905  MOV dword ptr [EBP + -0x4],ECX
004d1908  MOVSX EAX,word ptr [EBP + 0x8]
004d190c  TEST EAX,EAX
004d190e  JGE 0x004d1927
004d1910  PUSH 0xf5d
004d1915  PUSH 0x6bf384
004d191a  PUSH 0x6bf888
004d191f  CALL 0x005e9f20
004d1924  ADD ESP,0xc
004d1927  MOVSX ESI,word ptr [EBP + 0x8]
004d192b  MOV ECX,dword ptr [0x00791364]
004d1931  CALL 0x0047f950
004d1936  CMP ESI,EAX
004d1938  JL 0x004d1951
004d193a  PUSH 0xf5e
004d193f  PUSH 0x6bf384
004d1944  PUSH 0x6bf858
004d1949  CALL 0x005e9f20
004d194e  ADD ESP,0xc
004d1951  MOVSX EAX,word ptr [EBP + 0xc]
004d1955  CMP EAX,0x2
004d1958  JGE 0x004d1971
004d195a  PUSH 0xf5f
004d195f  PUSH 0x6bf384
004d1964  PUSH 0x6bf778
004d1969  CALL 0x005e9f20
004d196e  ADD ESP,0xc
004d1971  MOVSX ESI,word ptr [EBP + 0xc]
004d1975  MOV ECX,dword ptr [0x00791364]
004d197b  CALL 0x0047f950
004d1980  CMP ESI,EAX
004d1982  JLE 0x004d199b
004d1984  PUSH 0xf60
004d1989  PUSH 0x6bf384
004d198e  PUSH 0x6bf740
004d1993  CALL 0x005e9f20
004d1998  ADD ESP,0xc
004d199b  MOV EAX,dword ptr [EBP + -0x4]
004d199e  MOV ECX,dword ptr [EAX + 0x428]
004d19a4  MOVSX EDX,word ptr [EBP + 0x8]
004d19a8  IMUL EDX,EDX,0xe
004d19ab  LEA EAX,[ECX + EDX*0x1 + 0x3b8]
004d19b2  MOVSX ECX,word ptr [EBP + 0xc]
004d19b6  MOV DX,word ptr [EAX + ECX*0x2 + -0x4]
004d19bb  ADD DX,0x1
004d19bf  MOVSX EAX,word ptr [EBP + 0xc]
004d19c3  MOVSX ECX,word ptr [EBP + 0x8]
004d19c7  IMUL ECX,ECX,0xe
004d19ca  MOV ESI,dword ptr [EBP + -0x4]
004d19cd  MOV ESI,dword ptr [ESI + 0x428]
004d19d3  LEA ECX,[ESI + ECX*0x1 + 0x3b8]
004d19da  MOV word ptr [ECX + EAX*0x2 + -0x4],DX
004d19df  MOV EDX,dword ptr [EBP + -0x4]
004d19e2  MOV EAX,dword ptr [EDX + 0x428]
004d19e8  MOVSX ECX,word ptr [EBP + 0x8]
004d19ec  IMUL ECX,ECX,0xe
004d19ef  LEA EDX,[EAX + ECX*0x1 + 0x3b8]
004d19f6  MOVSX EAX,word ptr [EBP + 0xc]
004d19fa  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x4]
004d19ff  CMP ECX,0x3000
004d1a05  JNZ 0x004d1a4b
004d1a07  MOV EDX,dword ptr [EBP + -0x4]
004d1a0a  MOV EAX,dword ptr [EDX + 0x428]
004d1a10  MOVSX ECX,word ptr [EBP + 0x8]
004d1a14  IMUL ECX,ECX,0xe
004d1a17  LEA EDX,[EAX + ECX*0x1 + 0x3b8]
004d1a1e  MOVSX EAX,word ptr [EBP + 0xc]
004d1a22  MOV CX,word ptr [EDX + EAX*0x2 + -0x4]
004d1a27  SUB CX,0x1
004d1a2b  MOVSX EDX,word ptr [EBP + 0xc]
004d1a2f  MOVSX EAX,word ptr [EBP + 0x8]
004d1a33  IMUL EAX,EAX,0xe
004d1a36  MOV ESI,dword ptr [EBP + -0x4]
004d1a39  MOV ESI,dword ptr [ESI + 0x428]
004d1a3f  LEA EAX,[ESI + EAX*0x1 + 0x3b8]
004d1a46  MOV word ptr [EAX + EDX*0x2 + -0x4],CX
004d1a4b  MOVSX ECX,word ptr [EBP + 0xc]
004d1a4f  CMP ECX,0x2
004d1a52  JLE 0x004d1b07
004d1a58  MOV EDX,dword ptr [EBP + -0x4]
004d1a5b  MOV EAX,dword ptr [EDX + 0x428]
004d1a61  MOVSX ECX,word ptr [EBP + 0x8]
004d1a65  IMUL ECX,ECX,0xe
004d1a68  LEA EDX,[EAX + ECX*0x1 + 0x3b8]
004d1a6f  MOVSX EAX,word ptr [EBP + 0xc]
004d1a73  MOV CX,word ptr [EDX + EAX*0x2 + -0x6]
004d1a78  ADD CX,0x1
004d1a7c  MOVSX EDX,word ptr [EBP + 0xc]
004d1a80  MOVSX EAX,word ptr [EBP + 0x8]
004d1a84  IMUL EAX,EAX,0xe
004d1a87  MOV ESI,dword ptr [EBP + -0x4]
004d1a8a  MOV ESI,dword ptr [ESI + 0x428]
004d1a90  LEA EAX,[ESI + EAX*0x1 + 0x3b8]
004d1a97  MOV word ptr [EAX + EDX*0x2 + -0x6],CX
004d1a9c  MOV ECX,dword ptr [EBP + -0x4]
004d1a9f  MOV EDX,dword ptr [ECX + 0x428]
004d1aa5  MOVSX EAX,word ptr [EBP + 0x8]
004d1aa9  IMUL EAX,EAX,0xe
004d1aac  LEA ECX,[EDX + EAX*0x1 + 0x3b8]
004d1ab3  MOVSX EDX,word ptr [EBP + 0xc]
004d1ab7  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x6]
004d1abc  CMP EAX,0x3000
004d1ac1  JNZ 0x004d1b07
004d1ac3  MOV ECX,dword ptr [EBP + -0x4]
004d1ac6  MOV EDX,dword ptr [ECX + 0x428]
004d1acc  MOVSX EAX,word ptr [EBP + 0x8]
004d1ad0  IMUL EAX,EAX,0xe
004d1ad3  LEA ECX,[EDX + EAX*0x1 + 0x3b8]
004d1ada  MOVSX EDX,word ptr [EBP + 0xc]
004d1ade  MOV AX,word ptr [ECX + EDX*0x2 + -0x6]
004d1ae3  SUB AX,0x1
004d1ae7  MOVSX ECX,word ptr [EBP + 0xc]
004d1aeb  MOVSX EDX,word ptr [EBP + 0x8]
004d1aef  IMUL EDX,EDX,0xe
004d1af2  MOV ESI,dword ptr [EBP + -0x4]
004d1af5  MOV ESI,dword ptr [ESI + 0x428]
004d1afb  LEA EDX,[ESI + EDX*0x1 + 0x3b8]
004d1b02  MOV word ptr [EDX + ECX*0x2 + -0x6],AX
004d1b07  MOVSX ESI,word ptr [EBP + 0xc]
004d1b0b  MOV ECX,dword ptr [0x00791364]
004d1b11  CALL 0x0047f950
004d1b16  CMP ESI,EAX
004d1b18  JGE 0x004d1bce
004d1b1e  MOV EAX,dword ptr [EBP + -0x4]
004d1b21  MOV ECX,dword ptr [EAX + 0x428]
004d1b27  MOVSX EDX,word ptr [EBP + 0x8]
004d1b2b  IMUL EDX,EDX,0xe
004d1b2e  LEA EAX,[ECX + EDX*0x1 + 0x3b8]
004d1b35  MOVSX ECX,word ptr [EBP + 0xc]
004d1b39  MOV DX,word ptr [EAX + ECX*0x2 + -0x2]
004d1b3e  ADD DX,0x1
004d1b42  MOVSX EAX,word ptr [EBP + 0xc]
004d1b46  MOVSX ECX,word ptr [EBP + 0x8]
004d1b4a  IMUL ECX,ECX,0xe
004d1b4d  MOV ESI,dword ptr [EBP + -0x4]
004d1b50  MOV ESI,dword ptr [ESI + 0x428]
004d1b56  LEA ECX,[ESI + ECX*0x1 + 0x3b8]
004d1b5d  MOV word ptr [ECX + EAX*0x2 + -0x2],DX
004d1b62  MOV EDX,dword ptr [EBP + -0x4]
004d1b65  MOV EAX,dword ptr [EDX + 0x428]
004d1b6b  MOVSX ECX,word ptr [EBP + 0x8]
004d1b6f  IMUL ECX,ECX,0xe
004d1b72  LEA EDX,[EAX + ECX*0x1 + 0x3b8]
004d1b79  MOVSX EAX,word ptr [EBP + 0xc]
004d1b7d  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x2]
004d1b82  CMP ECX,0x3000
004d1b88  JNZ 0x004d1bce
004d1b8a  MOV EDX,dword ptr [EBP + -0x4]
004d1b8d  MOV EAX,dword ptr [EDX + 0x428]
004d1b93  MOVSX ECX,word ptr [EBP + 0x8]
004d1b97  IMUL ECX,ECX,0xe
004d1b9a  LEA EDX,[EAX + ECX*0x1 + 0x3b8]
004d1ba1  MOVSX EAX,word ptr [EBP + 0xc]
004d1ba5  MOV CX,word ptr [EDX + EAX*0x2 + -0x2]
004d1baa  SUB CX,0x1
004d1bae  MOVSX EDX,word ptr [EBP + 0xc]
004d1bb2  MOVSX EAX,word ptr [EBP + 0x8]
004d1bb6  IMUL EAX,EAX,0xe
004d1bb9  MOV ESI,dword ptr [EBP + -0x4]
004d1bbc  MOV ESI,dword ptr [ESI + 0x428]
004d1bc2  LEA EAX,[ESI + EAX*0x1 + 0x3b8]
004d1bc9  MOV word ptr [EAX + EDX*0x2 + -0x2],CX
004d1bce  POP ESI
004d1bcf  MOV ESP,EBP
004d1bd1  POP EBP
004d1bd2  RET 0x8
