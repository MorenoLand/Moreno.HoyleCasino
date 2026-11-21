; FUN_004f0cf0  004f0cf0
004f0cf0  PUSH EBP
004f0cf1  MOV EBP,ESP
004f0cf3  PUSH ECX
004f0cf4  PUSH ESI
004f0cf5  MOV dword ptr [EBP + -0x4],ECX
004f0cf8  MOVSX EAX,word ptr [EBP + 0x8]
004f0cfc  TEST EAX,EAX
004f0cfe  JGE 0x004f0d17
004f0d00  PUSH 0x2ec5
004f0d05  PUSH 0x6bf384
004f0d0a  PUSH 0x6bf888
004f0d0f  CALL 0x005e9f20
004f0d14  ADD ESP,0xc
004f0d17  MOVSX ESI,word ptr [EBP + 0x8]
004f0d1b  MOV ECX,dword ptr [0x00791364]
004f0d21  CALL 0x0047f950
004f0d26  CMP ESI,EAX
004f0d28  JL 0x004f0d41
004f0d2a  PUSH 0x2ec6
004f0d2f  PUSH 0x6bf384
004f0d34  PUSH 0x6bf858
004f0d39  CALL 0x005e9f20
004f0d3e  ADD ESP,0xc
004f0d41  MOVSX EAX,word ptr [EBP + 0xc]
004f0d45  CMP EAX,0x2
004f0d48  JGE 0x004f0d61
004f0d4a  PUSH 0x2ec7
004f0d4f  PUSH 0x6bf384
004f0d54  PUSH 0x6bf778
004f0d59  CALL 0x005e9f20
004f0d5e  ADD ESP,0xc
004f0d61  MOVSX ESI,word ptr [EBP + 0xc]
004f0d65  MOV ECX,dword ptr [0x00791364]
004f0d6b  CALL 0x0047f950
004f0d70  CMP ESI,EAX
004f0d72  JLE 0x004f0d8b
004f0d74  PUSH 0x2ec8
004f0d79  PUSH 0x6bf384
004f0d7e  PUSH 0x6bf740
004f0d83  CALL 0x005e9f20
004f0d88  ADD ESP,0xc
004f0d8b  MOV EAX,dword ptr [EBP + -0x4]
004f0d8e  MOV ECX,dword ptr [EAX + 0x428]
004f0d94  MOVSX EDX,word ptr [EBP + 0x8]
004f0d98  IMUL EDX,EDX,0xe
004f0d9b  LEA EAX,[ECX + EDX*0x1 + 0xc78]
004f0da2  MOVSX ECX,word ptr [EBP + 0xc]
004f0da6  MOV DX,word ptr [EAX + ECX*0x2 + -0x4]
004f0dab  ADD DX,0x1
004f0daf  MOVSX EAX,word ptr [EBP + 0xc]
004f0db3  MOVSX ECX,word ptr [EBP + 0x8]
004f0db7  IMUL ECX,ECX,0xe
004f0dba  MOV ESI,dword ptr [EBP + -0x4]
004f0dbd  MOV ESI,dword ptr [ESI + 0x428]
004f0dc3  LEA ECX,[ESI + ECX*0x1 + 0xc78]
004f0dca  MOV word ptr [ECX + EAX*0x2 + -0x4],DX
004f0dcf  MOV EDX,dword ptr [EBP + -0x4]
004f0dd2  MOV EAX,dword ptr [EDX + 0x428]
004f0dd8  MOVSX ECX,word ptr [EBP + 0x8]
004f0ddc  IMUL ECX,ECX,0xe
004f0ddf  LEA EDX,[EAX + ECX*0x1 + 0xc78]
004f0de6  MOVSX EAX,word ptr [EBP + 0xc]
004f0dea  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x4]
004f0def  CMP ECX,0x3000
004f0df5  JNZ 0x004f0e3b
004f0df7  MOV EDX,dword ptr [EBP + -0x4]
004f0dfa  MOV EAX,dword ptr [EDX + 0x428]
004f0e00  MOVSX ECX,word ptr [EBP + 0x8]
004f0e04  IMUL ECX,ECX,0xe
004f0e07  LEA EDX,[EAX + ECX*0x1 + 0xc78]
004f0e0e  MOVSX EAX,word ptr [EBP + 0xc]
004f0e12  MOV CX,word ptr [EDX + EAX*0x2 + -0x4]
004f0e17  SUB CX,0x1
004f0e1b  MOVSX EDX,word ptr [EBP + 0xc]
004f0e1f  MOVSX EAX,word ptr [EBP + 0x8]
004f0e23  IMUL EAX,EAX,0xe
004f0e26  MOV ESI,dword ptr [EBP + -0x4]
004f0e29  MOV ESI,dword ptr [ESI + 0x428]
004f0e2f  LEA EAX,[ESI + EAX*0x1 + 0xc78]
004f0e36  MOV word ptr [EAX + EDX*0x2 + -0x4],CX
004f0e3b  MOVSX ECX,word ptr [EBP + 0xc]
004f0e3f  CMP ECX,0x2
004f0e42  JLE 0x004f0ef7
004f0e48  MOV EDX,dword ptr [EBP + -0x4]
004f0e4b  MOV EAX,dword ptr [EDX + 0x428]
004f0e51  MOVSX ECX,word ptr [EBP + 0x8]
004f0e55  IMUL ECX,ECX,0xe
004f0e58  LEA EDX,[EAX + ECX*0x1 + 0xc78]
004f0e5f  MOVSX EAX,word ptr [EBP + 0xc]
004f0e63  MOV CX,word ptr [EDX + EAX*0x2 + -0x6]
004f0e68  ADD CX,0x1
004f0e6c  MOVSX EDX,word ptr [EBP + 0xc]
004f0e70  MOVSX EAX,word ptr [EBP + 0x8]
004f0e74  IMUL EAX,EAX,0xe
004f0e77  MOV ESI,dword ptr [EBP + -0x4]
004f0e7a  MOV ESI,dword ptr [ESI + 0x428]
004f0e80  LEA EAX,[ESI + EAX*0x1 + 0xc78]
004f0e87  MOV word ptr [EAX + EDX*0x2 + -0x6],CX
004f0e8c  MOV ECX,dword ptr [EBP + -0x4]
004f0e8f  MOV EDX,dword ptr [ECX + 0x428]
004f0e95  MOVSX EAX,word ptr [EBP + 0x8]
004f0e99  IMUL EAX,EAX,0xe
004f0e9c  LEA ECX,[EDX + EAX*0x1 + 0xc78]
004f0ea3  MOVSX EDX,word ptr [EBP + 0xc]
004f0ea7  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x6]
004f0eac  CMP EAX,0x3000
004f0eb1  JNZ 0x004f0ef7
004f0eb3  MOV ECX,dword ptr [EBP + -0x4]
004f0eb6  MOV EDX,dword ptr [ECX + 0x428]
004f0ebc  MOVSX EAX,word ptr [EBP + 0x8]
004f0ec0  IMUL EAX,EAX,0xe
004f0ec3  LEA ECX,[EDX + EAX*0x1 + 0xc78]
004f0eca  MOVSX EDX,word ptr [EBP + 0xc]
004f0ece  MOV AX,word ptr [ECX + EDX*0x2 + -0x6]
004f0ed3  SUB AX,0x1
004f0ed7  MOVSX ECX,word ptr [EBP + 0xc]
004f0edb  MOVSX EDX,word ptr [EBP + 0x8]
004f0edf  IMUL EDX,EDX,0xe
004f0ee2  MOV ESI,dword ptr [EBP + -0x4]
004f0ee5  MOV ESI,dword ptr [ESI + 0x428]
004f0eeb  LEA EDX,[ESI + EDX*0x1 + 0xc78]
004f0ef2  MOV word ptr [EDX + ECX*0x2 + -0x6],AX
004f0ef7  MOVSX ESI,word ptr [EBP + 0xc]
004f0efb  MOV ECX,dword ptr [0x00791364]
004f0f01  CALL 0x0047f950
004f0f06  CMP ESI,EAX
004f0f08  JGE 0x004f0fbe
004f0f0e  MOV EAX,dword ptr [EBP + -0x4]
004f0f11  MOV ECX,dword ptr [EAX + 0x428]
004f0f17  MOVSX EDX,word ptr [EBP + 0x8]
004f0f1b  IMUL EDX,EDX,0xe
004f0f1e  LEA EAX,[ECX + EDX*0x1 + 0xc78]
004f0f25  MOVSX ECX,word ptr [EBP + 0xc]
004f0f29  MOV DX,word ptr [EAX + ECX*0x2 + -0x2]
004f0f2e  ADD DX,0x1
004f0f32  MOVSX EAX,word ptr [EBP + 0xc]
004f0f36  MOVSX ECX,word ptr [EBP + 0x8]
004f0f3a  IMUL ECX,ECX,0xe
004f0f3d  MOV ESI,dword ptr [EBP + -0x4]
004f0f40  MOV ESI,dword ptr [ESI + 0x428]
004f0f46  LEA ECX,[ESI + ECX*0x1 + 0xc78]
004f0f4d  MOV word ptr [ECX + EAX*0x2 + -0x2],DX
004f0f52  MOV EDX,dword ptr [EBP + -0x4]
004f0f55  MOV EAX,dword ptr [EDX + 0x428]
004f0f5b  MOVSX ECX,word ptr [EBP + 0x8]
004f0f5f  IMUL ECX,ECX,0xe
004f0f62  LEA EDX,[EAX + ECX*0x1 + 0xc78]
004f0f69  MOVSX EAX,word ptr [EBP + 0xc]
004f0f6d  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x2]
004f0f72  CMP ECX,0x3000
004f0f78  JNZ 0x004f0fbe
004f0f7a  MOV EDX,dword ptr [EBP + -0x4]
004f0f7d  MOV EAX,dword ptr [EDX + 0x428]
004f0f83  MOVSX ECX,word ptr [EBP + 0x8]
004f0f87  IMUL ECX,ECX,0xe
004f0f8a  LEA EDX,[EAX + ECX*0x1 + 0xc78]
004f0f91  MOVSX EAX,word ptr [EBP + 0xc]
004f0f95  MOV CX,word ptr [EDX + EAX*0x2 + -0x2]
004f0f9a  SUB CX,0x1
004f0f9e  MOVSX EDX,word ptr [EBP + 0xc]
004f0fa2  MOVSX EAX,word ptr [EBP + 0x8]
004f0fa6  IMUL EAX,EAX,0xe
004f0fa9  MOV ESI,dword ptr [EBP + -0x4]
004f0fac  MOV ESI,dword ptr [ESI + 0x428]
004f0fb2  LEA EAX,[ESI + EAX*0x1 + 0xc78]
004f0fb9  MOV word ptr [EAX + EDX*0x2 + -0x2],CX
004f0fbe  POP ESI
004f0fbf  MOV ESP,EBP
004f0fc1  POP EBP
004f0fc2  RET 0x8
