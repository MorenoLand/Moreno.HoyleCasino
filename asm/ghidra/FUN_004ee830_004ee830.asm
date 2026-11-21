; FUN_004ee830  004ee830
004ee830  PUSH EBP
004ee831  MOV EBP,ESP
004ee833  PUSH ECX
004ee834  PUSH ESI
004ee835  MOV dword ptr [EBP + -0x4],ECX
004ee838  MOVSX EAX,word ptr [EBP + 0x8]
004ee83c  TEST EAX,EAX
004ee83e  JGE 0x004ee857
004ee840  PUSH 0x2c13
004ee845  PUSH 0x6bf384
004ee84a  PUSH 0x6bf888
004ee84f  CALL 0x005e9f20
004ee854  ADD ESP,0xc
004ee857  MOVSX ESI,word ptr [EBP + 0x8]
004ee85b  MOV ECX,dword ptr [0x00791364]
004ee861  CALL 0x0047f950
004ee866  CMP ESI,EAX
004ee868  JL 0x004ee881
004ee86a  PUSH 0x2c14
004ee86f  PUSH 0x6bf384
004ee874  PUSH 0x6bf858
004ee879  CALL 0x005e9f20
004ee87e  ADD ESP,0xc
004ee881  MOVSX EAX,word ptr [EBP + 0xc]
004ee885  CMP EAX,0x2
004ee888  JGE 0x004ee8a1
004ee88a  PUSH 0x2c15
004ee88f  PUSH 0x6bf384
004ee894  PUSH 0x6bf778
004ee899  CALL 0x005e9f20
004ee89e  ADD ESP,0xc
004ee8a1  MOVSX ESI,word ptr [EBP + 0xc]
004ee8a5  MOV ECX,dword ptr [0x00791364]
004ee8ab  CALL 0x0047f950
004ee8b0  CMP ESI,EAX
004ee8b2  JLE 0x004ee8cb
004ee8b4  PUSH 0x2c16
004ee8b9  PUSH 0x6bf384
004ee8be  PUSH 0x6bf740
004ee8c3  CALL 0x005e9f20
004ee8c8  ADD ESP,0xc
004ee8cb  MOV EAX,dword ptr [EBP + -0x4]
004ee8ce  MOV ECX,dword ptr [EAX + 0x428]
004ee8d4  MOVSX EDX,word ptr [EBP + 0x8]
004ee8d8  IMUL EDX,EDX,0xe
004ee8db  LEA EAX,[ECX + EDX*0x1 + 0xb60]
004ee8e2  MOVSX ECX,word ptr [EBP + 0xc]
004ee8e6  MOV DX,word ptr [EAX + ECX*0x2 + -0x4]
004ee8eb  ADD DX,0x1
004ee8ef  MOVSX EAX,word ptr [EBP + 0xc]
004ee8f3  MOVSX ECX,word ptr [EBP + 0x8]
004ee8f7  IMUL ECX,ECX,0xe
004ee8fa  MOV ESI,dword ptr [EBP + -0x4]
004ee8fd  MOV ESI,dword ptr [ESI + 0x428]
004ee903  LEA ECX,[ESI + ECX*0x1 + 0xb60]
004ee90a  MOV word ptr [ECX + EAX*0x2 + -0x4],DX
004ee90f  MOV EDX,dword ptr [EBP + -0x4]
004ee912  MOV EAX,dword ptr [EDX + 0x428]
004ee918  MOVSX ECX,word ptr [EBP + 0x8]
004ee91c  IMUL ECX,ECX,0xe
004ee91f  LEA EDX,[EAX + ECX*0x1 + 0xb60]
004ee926  MOVSX EAX,word ptr [EBP + 0xc]
004ee92a  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x4]
004ee92f  CMP ECX,0x3000
004ee935  JNZ 0x004ee97b
004ee937  MOV EDX,dword ptr [EBP + -0x4]
004ee93a  MOV EAX,dword ptr [EDX + 0x428]
004ee940  MOVSX ECX,word ptr [EBP + 0x8]
004ee944  IMUL ECX,ECX,0xe
004ee947  LEA EDX,[EAX + ECX*0x1 + 0xb60]
004ee94e  MOVSX EAX,word ptr [EBP + 0xc]
004ee952  MOV CX,word ptr [EDX + EAX*0x2 + -0x4]
004ee957  SUB CX,0x1
004ee95b  MOVSX EDX,word ptr [EBP + 0xc]
004ee95f  MOVSX EAX,word ptr [EBP + 0x8]
004ee963  IMUL EAX,EAX,0xe
004ee966  MOV ESI,dword ptr [EBP + -0x4]
004ee969  MOV ESI,dword ptr [ESI + 0x428]
004ee96f  LEA EAX,[ESI + EAX*0x1 + 0xb60]
004ee976  MOV word ptr [EAX + EDX*0x2 + -0x4],CX
004ee97b  MOVSX ECX,word ptr [EBP + 0xc]
004ee97f  CMP ECX,0x2
004ee982  JLE 0x004eea37
004ee988  MOV EDX,dword ptr [EBP + -0x4]
004ee98b  MOV EAX,dword ptr [EDX + 0x428]
004ee991  MOVSX ECX,word ptr [EBP + 0x8]
004ee995  IMUL ECX,ECX,0xe
004ee998  LEA EDX,[EAX + ECX*0x1 + 0xb60]
004ee99f  MOVSX EAX,word ptr [EBP + 0xc]
004ee9a3  MOV CX,word ptr [EDX + EAX*0x2 + -0x6]
004ee9a8  ADD CX,0x1
004ee9ac  MOVSX EDX,word ptr [EBP + 0xc]
004ee9b0  MOVSX EAX,word ptr [EBP + 0x8]
004ee9b4  IMUL EAX,EAX,0xe
004ee9b7  MOV ESI,dword ptr [EBP + -0x4]
004ee9ba  MOV ESI,dword ptr [ESI + 0x428]
004ee9c0  LEA EAX,[ESI + EAX*0x1 + 0xb60]
004ee9c7  MOV word ptr [EAX + EDX*0x2 + -0x6],CX
004ee9cc  MOV ECX,dword ptr [EBP + -0x4]
004ee9cf  MOV EDX,dword ptr [ECX + 0x428]
004ee9d5  MOVSX EAX,word ptr [EBP + 0x8]
004ee9d9  IMUL EAX,EAX,0xe
004ee9dc  LEA ECX,[EDX + EAX*0x1 + 0xb60]
004ee9e3  MOVSX EDX,word ptr [EBP + 0xc]
004ee9e7  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x6]
004ee9ec  CMP EAX,0x3000
004ee9f1  JNZ 0x004eea37
004ee9f3  MOV ECX,dword ptr [EBP + -0x4]
004ee9f6  MOV EDX,dword ptr [ECX + 0x428]
004ee9fc  MOVSX EAX,word ptr [EBP + 0x8]
004eea00  IMUL EAX,EAX,0xe
004eea03  LEA ECX,[EDX + EAX*0x1 + 0xb60]
004eea0a  MOVSX EDX,word ptr [EBP + 0xc]
004eea0e  MOV AX,word ptr [ECX + EDX*0x2 + -0x6]
004eea13  SUB AX,0x1
004eea17  MOVSX ECX,word ptr [EBP + 0xc]
004eea1b  MOVSX EDX,word ptr [EBP + 0x8]
004eea1f  IMUL EDX,EDX,0xe
004eea22  MOV ESI,dword ptr [EBP + -0x4]
004eea25  MOV ESI,dword ptr [ESI + 0x428]
004eea2b  LEA EDX,[ESI + EDX*0x1 + 0xb60]
004eea32  MOV word ptr [EDX + ECX*0x2 + -0x6],AX
004eea37  MOVSX ESI,word ptr [EBP + 0xc]
004eea3b  MOV ECX,dword ptr [0x00791364]
004eea41  CALL 0x0047f950
004eea46  CMP ESI,EAX
004eea48  JGE 0x004eeafe
004eea4e  MOV EAX,dword ptr [EBP + -0x4]
004eea51  MOV ECX,dword ptr [EAX + 0x428]
004eea57  MOVSX EDX,word ptr [EBP + 0x8]
004eea5b  IMUL EDX,EDX,0xe
004eea5e  LEA EAX,[ECX + EDX*0x1 + 0xb60]
004eea65  MOVSX ECX,word ptr [EBP + 0xc]
004eea69  MOV DX,word ptr [EAX + ECX*0x2 + -0x2]
004eea6e  ADD DX,0x1
004eea72  MOVSX EAX,word ptr [EBP + 0xc]
004eea76  MOVSX ECX,word ptr [EBP + 0x8]
004eea7a  IMUL ECX,ECX,0xe
004eea7d  MOV ESI,dword ptr [EBP + -0x4]
004eea80  MOV ESI,dword ptr [ESI + 0x428]
004eea86  LEA ECX,[ESI + ECX*0x1 + 0xb60]
004eea8d  MOV word ptr [ECX + EAX*0x2 + -0x2],DX
004eea92  MOV EDX,dword ptr [EBP + -0x4]
004eea95  MOV EAX,dword ptr [EDX + 0x428]
004eea9b  MOVSX ECX,word ptr [EBP + 0x8]
004eea9f  IMUL ECX,ECX,0xe
004eeaa2  LEA EDX,[EAX + ECX*0x1 + 0xb60]
004eeaa9  MOVSX EAX,word ptr [EBP + 0xc]
004eeaad  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x2]
004eeab2  CMP ECX,0x3000
004eeab8  JNZ 0x004eeafe
004eeaba  MOV EDX,dword ptr [EBP + -0x4]
004eeabd  MOV EAX,dword ptr [EDX + 0x428]
004eeac3  MOVSX ECX,word ptr [EBP + 0x8]
004eeac7  IMUL ECX,ECX,0xe
004eeaca  LEA EDX,[EAX + ECX*0x1 + 0xb60]
004eead1  MOVSX EAX,word ptr [EBP + 0xc]
004eead5  MOV CX,word ptr [EDX + EAX*0x2 + -0x2]
004eeada  SUB CX,0x1
004eeade  MOVSX EDX,word ptr [EBP + 0xc]
004eeae2  MOVSX EAX,word ptr [EBP + 0x8]
004eeae6  IMUL EAX,EAX,0xe
004eeae9  MOV ESI,dword ptr [EBP + -0x4]
004eeaec  MOV ESI,dword ptr [ESI + 0x428]
004eeaf2  LEA EAX,[ESI + EAX*0x1 + 0xb60]
004eeaf9  MOV word ptr [EAX + EDX*0x2 + -0x2],CX
004eeafe  POP ESI
004eeaff  MOV ESP,EBP
004eeb01  POP EBP
004eeb02  RET 0x8
