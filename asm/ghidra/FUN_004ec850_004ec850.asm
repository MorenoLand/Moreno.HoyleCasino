; FUN_004ec850  004ec850
004ec850  PUSH EBP
004ec851  MOV EBP,ESP
004ec853  PUSH ECX
004ec854  PUSH ESI
004ec855  MOV dword ptr [EBP + -0x4],ECX
004ec858  MOVSX EAX,word ptr [EBP + 0x8]
004ec85c  TEST EAX,EAX
004ec85e  JGE 0x004ec877
004ec860  PUSH 0x2989
004ec865  PUSH 0x6bf384
004ec86a  PUSH 0x6bf888
004ec86f  CALL 0x005e9f20
004ec874  ADD ESP,0xc
004ec877  MOVSX ESI,word ptr [EBP + 0x8]
004ec87b  MOV ECX,dword ptr [0x00791364]
004ec881  CALL 0x0047f950
004ec886  CMP ESI,EAX
004ec888  JL 0x004ec8a1
004ec88a  PUSH 0x298a
004ec88f  PUSH 0x6bf384
004ec894  PUSH 0x6bf858
004ec899  CALL 0x005e9f20
004ec89e  ADD ESP,0xc
004ec8a1  MOVSX EAX,word ptr [EBP + 0xc]
004ec8a5  CMP EAX,0x2
004ec8a8  JGE 0x004ec8c1
004ec8aa  PUSH 0x298b
004ec8af  PUSH 0x6bf384
004ec8b4  PUSH 0x6bf778
004ec8b9  CALL 0x005e9f20
004ec8be  ADD ESP,0xc
004ec8c1  MOVSX ESI,word ptr [EBP + 0xc]
004ec8c5  MOV ECX,dword ptr [0x00791364]
004ec8cb  CALL 0x0047f950
004ec8d0  CMP ESI,EAX
004ec8d2  JLE 0x004ec8eb
004ec8d4  PUSH 0x298c
004ec8d9  PUSH 0x6bf384
004ec8de  PUSH 0x6bf740
004ec8e3  CALL 0x005e9f20
004ec8e8  ADD ESP,0xc
004ec8eb  MOV EAX,dword ptr [EBP + -0x4]
004ec8ee  MOV ECX,dword ptr [EAX + 0x428]
004ec8f4  MOVSX EDX,word ptr [EBP + 0x8]
004ec8f8  IMUL EDX,EDX,0x7
004ec8fb  LEA EAX,[ECX + EDX*0x1 + 0x7e0]
004ec902  MOVSX ECX,word ptr [EBP + 0xc]
004ec906  MOV DL,byte ptr [EAX + ECX*0x1 + -0x2]
004ec90a  ADD DL,0x1
004ec90d  MOVSX EAX,word ptr [EBP + 0xc]
004ec911  MOVSX ECX,word ptr [EBP + 0x8]
004ec915  IMUL ECX,ECX,0x7
004ec918  MOV ESI,dword ptr [EBP + -0x4]
004ec91b  MOV ESI,dword ptr [ESI + 0x428]
004ec921  LEA ECX,[ESI + ECX*0x1 + 0x7e0]
004ec928  MOV byte ptr [ECX + EAX*0x1 + -0x2],DL
004ec92c  MOV EDX,dword ptr [EBP + -0x4]
004ec92f  MOV EAX,dword ptr [EDX + 0x428]
004ec935  MOVSX ECX,word ptr [EBP + 0x8]
004ec939  IMUL ECX,ECX,0x7
004ec93c  LEA EDX,[EAX + ECX*0x1 + 0x7e0]
004ec943  MOVSX EAX,word ptr [EBP + 0xc]
004ec947  MOVZX ECX,byte ptr [EDX + EAX*0x1 + -0x2]
004ec94c  CMP ECX,0x50
004ec94f  JNZ 0x004eca1a
004ec955  MOV EDX,dword ptr [EBP + -0x4]
004ec958  MOV EAX,dword ptr [EDX + 0x428]
004ec95e  MOVSX ECX,word ptr [EBP + 0x8]
004ec962  IMUL ECX,ECX,0xe
004ec965  LEA EDX,[EAX + ECX*0x1 + 0x700]
004ec96c  MOVSX EAX,word ptr [EBP + 0xc]
004ec970  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x4]
004ec975  SHR ECX,0x1
004ec977  MOVSX EDX,word ptr [EBP + 0xc]
004ec97b  MOVSX EAX,word ptr [EBP + 0x8]
004ec97f  IMUL EAX,EAX,0xe
004ec982  MOV ESI,dword ptr [EBP + -0x4]
004ec985  MOV ESI,dword ptr [ESI + 0x428]
004ec98b  LEA EAX,[ESI + EAX*0x1 + 0x700]
004ec992  MOV word ptr [EAX + EDX*0x2 + -0x4],CX
004ec997  MOV ECX,dword ptr [EBP + -0x4]
004ec99a  MOV EDX,dword ptr [ECX + 0x428]
004ec9a0  MOVSX EAX,word ptr [EBP + 0x8]
004ec9a4  IMUL EAX,EAX,0xe
004ec9a7  LEA ECX,[EDX + EAX*0x1 + 0x770]
004ec9ae  MOVSX EDX,word ptr [EBP + 0xc]
004ec9b2  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x4]
004ec9b7  SHR EAX,0x1
004ec9b9  MOVSX ECX,word ptr [EBP + 0xc]
004ec9bd  MOVSX EDX,word ptr [EBP + 0x8]
004ec9c1  IMUL EDX,EDX,0xe
004ec9c4  MOV ESI,dword ptr [EBP + -0x4]
004ec9c7  MOV ESI,dword ptr [ESI + 0x428]
004ec9cd  LEA EDX,[ESI + EDX*0x1 + 0x770]
004ec9d4  MOV word ptr [EDX + ECX*0x2 + -0x4],AX
004ec9d9  MOV EAX,dword ptr [EBP + -0x4]
004ec9dc  MOV ECX,dword ptr [EAX + 0x428]
004ec9e2  MOVSX EDX,word ptr [EBP + 0x8]
004ec9e6  IMUL EDX,EDX,0x7
004ec9e9  LEA EAX,[ECX + EDX*0x1 + 0x7e0]
004ec9f0  MOVSX ECX,word ptr [EBP + 0xc]
004ec9f4  MOVZX EDX,byte ptr [EAX + ECX*0x1 + -0x2]
004ec9f9  SHR EDX,0x1
004ec9fb  MOVSX EAX,word ptr [EBP + 0xc]
004ec9ff  MOVSX ECX,word ptr [EBP + 0x8]
004eca03  IMUL ECX,ECX,0x7
004eca06  MOV ESI,dword ptr [EBP + -0x4]
004eca09  MOV ESI,dword ptr [ESI + 0x428]
004eca0f  LEA ECX,[ESI + ECX*0x1 + 0x7e0]
004eca16  MOV byte ptr [ECX + EAX*0x1 + -0x2],DL
004eca1a  MOVSX EDX,word ptr [EBP + 0xc]
004eca1e  CMP EDX,0x2
004eca21  JLE 0x004ecb56
004eca27  MOV EAX,dword ptr [EBP + -0x4]
004eca2a  MOV ECX,dword ptr [EAX + 0x428]
004eca30  MOVSX EDX,word ptr [EBP + 0x8]
004eca34  IMUL EDX,EDX,0x7
004eca37  LEA EAX,[ECX + EDX*0x1 + 0x7e0]
004eca3e  MOVSX ECX,word ptr [EBP + 0xc]
004eca42  MOV DL,byte ptr [EAX + ECX*0x1 + -0x3]
004eca46  ADD DL,0x1
004eca49  MOVSX EAX,word ptr [EBP + 0xc]
004eca4d  MOVSX ECX,word ptr [EBP + 0x8]
004eca51  IMUL ECX,ECX,0x7
004eca54  MOV ESI,dword ptr [EBP + -0x4]
004eca57  MOV ESI,dword ptr [ESI + 0x428]
004eca5d  LEA ECX,[ESI + ECX*0x1 + 0x7e0]
004eca64  MOV byte ptr [ECX + EAX*0x1 + -0x3],DL
004eca68  MOV EDX,dword ptr [EBP + -0x4]
004eca6b  MOV EAX,dword ptr [EDX + 0x428]
004eca71  MOVSX ECX,word ptr [EBP + 0x8]
004eca75  IMUL ECX,ECX,0x7
004eca78  LEA EDX,[EAX + ECX*0x1 + 0x7e0]
004eca7f  MOVSX EAX,word ptr [EBP + 0xc]
004eca83  MOVZX ECX,byte ptr [EDX + EAX*0x1 + -0x3]
004eca88  CMP ECX,0x50
004eca8b  JNZ 0x004ecb56
004eca91  MOV EDX,dword ptr [EBP + -0x4]
004eca94  MOV EAX,dword ptr [EDX + 0x428]
004eca9a  MOVSX ECX,word ptr [EBP + 0x8]
004eca9e  IMUL ECX,ECX,0xe
004ecaa1  LEA EDX,[EAX + ECX*0x1 + 0x700]
004ecaa8  MOVSX EAX,word ptr [EBP + 0xc]
004ecaac  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x6]
004ecab1  SHR ECX,0x1
004ecab3  MOVSX EDX,word ptr [EBP + 0xc]
004ecab7  MOVSX EAX,word ptr [EBP + 0x8]
004ecabb  IMUL EAX,EAX,0xe
004ecabe  MOV ESI,dword ptr [EBP + -0x4]
004ecac1  MOV ESI,dword ptr [ESI + 0x428]
004ecac7  LEA EAX,[ESI + EAX*0x1 + 0x700]
004ecace  MOV word ptr [EAX + EDX*0x2 + -0x6],CX
004ecad3  MOV ECX,dword ptr [EBP + -0x4]
004ecad6  MOV EDX,dword ptr [ECX + 0x428]
004ecadc  MOVSX EAX,word ptr [EBP + 0x8]
004ecae0  IMUL EAX,EAX,0xe
004ecae3  LEA ECX,[EDX + EAX*0x1 + 0x770]
004ecaea  MOVSX EDX,word ptr [EBP + 0xc]
004ecaee  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x6]
004ecaf3  SHR EAX,0x1
004ecaf5  MOVSX ECX,word ptr [EBP + 0xc]
004ecaf9  MOVSX EDX,word ptr [EBP + 0x8]
004ecafd  IMUL EDX,EDX,0xe
004ecb00  MOV ESI,dword ptr [EBP + -0x4]
004ecb03  MOV ESI,dword ptr [ESI + 0x428]
004ecb09  LEA EDX,[ESI + EDX*0x1 + 0x770]
004ecb10  MOV word ptr [EDX + ECX*0x2 + -0x6],AX
004ecb15  MOV EAX,dword ptr [EBP + -0x4]
004ecb18  MOV ECX,dword ptr [EAX + 0x428]
004ecb1e  MOVSX EDX,word ptr [EBP + 0x8]
004ecb22  IMUL EDX,EDX,0x7
004ecb25  LEA EAX,[ECX + EDX*0x1 + 0x7e0]
004ecb2c  MOVSX ECX,word ptr [EBP + 0xc]
004ecb30  MOVZX EDX,byte ptr [EAX + ECX*0x1 + -0x3]
004ecb35  SHR EDX,0x1
004ecb37  MOVSX EAX,word ptr [EBP + 0xc]
004ecb3b  MOVSX ECX,word ptr [EBP + 0x8]
004ecb3f  IMUL ECX,ECX,0x7
004ecb42  MOV ESI,dword ptr [EBP + -0x4]
004ecb45  MOV ESI,dword ptr [ESI + 0x428]
004ecb4b  LEA ECX,[ESI + ECX*0x1 + 0x7e0]
004ecb52  MOV byte ptr [ECX + EAX*0x1 + -0x3],DL
004ecb56  MOVSX ESI,word ptr [EBP + 0xc]
004ecb5a  MOV ECX,dword ptr [0x00791364]
004ecb60  CALL 0x0047f950
004ecb65  CMP ESI,EAX
004ecb67  JGE 0x004ecc9c
004ecb6d  MOV EDX,dword ptr [EBP + -0x4]
004ecb70  MOV EAX,dword ptr [EDX + 0x428]
004ecb76  MOVSX ECX,word ptr [EBP + 0x8]
004ecb7a  IMUL ECX,ECX,0x7
004ecb7d  LEA EDX,[EAX + ECX*0x1 + 0x7e0]
004ecb84  MOVSX EAX,word ptr [EBP + 0xc]
004ecb88  MOV CL,byte ptr [EDX + EAX*0x1 + -0x1]
004ecb8c  ADD CL,0x1
004ecb8f  MOVSX EDX,word ptr [EBP + 0xc]
004ecb93  MOVSX EAX,word ptr [EBP + 0x8]
004ecb97  IMUL EAX,EAX,0x7
004ecb9a  MOV ESI,dword ptr [EBP + -0x4]
004ecb9d  MOV ESI,dword ptr [ESI + 0x428]
004ecba3  LEA EAX,[ESI + EAX*0x1 + 0x7e0]
004ecbaa  MOV byte ptr [EAX + EDX*0x1 + -0x1],CL
004ecbae  MOV ECX,dword ptr [EBP + -0x4]
004ecbb1  MOV EDX,dword ptr [ECX + 0x428]
004ecbb7  MOVSX EAX,word ptr [EBP + 0x8]
004ecbbb  IMUL EAX,EAX,0x7
004ecbbe  LEA ECX,[EDX + EAX*0x1 + 0x7e0]
004ecbc5  MOVSX EDX,word ptr [EBP + 0xc]
004ecbc9  MOVZX EAX,byte ptr [ECX + EDX*0x1 + -0x1]
004ecbce  CMP EAX,0x50
004ecbd1  JNZ 0x004ecc9c
004ecbd7  MOV ECX,dword ptr [EBP + -0x4]
004ecbda  MOV EDX,dword ptr [ECX + 0x428]
004ecbe0  MOVSX EAX,word ptr [EBP + 0x8]
004ecbe4  IMUL EAX,EAX,0xe
004ecbe7  LEA ECX,[EDX + EAX*0x1 + 0x700]
004ecbee  MOVSX EDX,word ptr [EBP + 0xc]
004ecbf2  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x2]
004ecbf7  SHR EAX,0x1
004ecbf9  MOVSX ECX,word ptr [EBP + 0xc]
004ecbfd  MOVSX EDX,word ptr [EBP + 0x8]
004ecc01  IMUL EDX,EDX,0xe
004ecc04  MOV ESI,dword ptr [EBP + -0x4]
004ecc07  MOV ESI,dword ptr [ESI + 0x428]
004ecc0d  LEA EDX,[ESI + EDX*0x1 + 0x700]
004ecc14  MOV word ptr [EDX + ECX*0x2 + -0x2],AX
004ecc19  MOV EAX,dword ptr [EBP + -0x4]
004ecc1c  MOV ECX,dword ptr [EAX + 0x428]
004ecc22  MOVSX EDX,word ptr [EBP + 0x8]
004ecc26  IMUL EDX,EDX,0xe
004ecc29  LEA EAX,[ECX + EDX*0x1 + 0x770]
004ecc30  MOVSX ECX,word ptr [EBP + 0xc]
004ecc34  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x2]
004ecc39  SHR EDX,0x1
004ecc3b  MOVSX EAX,word ptr [EBP + 0xc]
004ecc3f  MOVSX ECX,word ptr [EBP + 0x8]
004ecc43  IMUL ECX,ECX,0xe
004ecc46  MOV ESI,dword ptr [EBP + -0x4]
004ecc49  MOV ESI,dword ptr [ESI + 0x428]
004ecc4f  LEA ECX,[ESI + ECX*0x1 + 0x770]
004ecc56  MOV word ptr [ECX + EAX*0x2 + -0x2],DX
004ecc5b  MOV EDX,dword ptr [EBP + -0x4]
004ecc5e  MOV EAX,dword ptr [EDX + 0x428]
004ecc64  MOVSX ECX,word ptr [EBP + 0x8]
004ecc68  IMUL ECX,ECX,0x7
004ecc6b  LEA EDX,[EAX + ECX*0x1 + 0x7e0]
004ecc72  MOVSX EAX,word ptr [EBP + 0xc]
004ecc76  MOVZX ECX,byte ptr [EDX + EAX*0x1 + -0x1]
004ecc7b  SHR ECX,0x1
004ecc7d  MOVSX EDX,word ptr [EBP + 0xc]
004ecc81  MOVSX EAX,word ptr [EBP + 0x8]
004ecc85  IMUL EAX,EAX,0x7
004ecc88  MOV ESI,dword ptr [EBP + -0x4]
004ecc8b  MOV ESI,dword ptr [ESI + 0x428]
004ecc91  LEA EAX,[ESI + EAX*0x1 + 0x7e0]
004ecc98  MOV byte ptr [EAX + EDX*0x1 + -0x1],CL
004ecc9c  POP ESI
004ecc9d  MOV ESP,EBP
004ecc9f  POP EBP
004ecca0  RET 0x8
