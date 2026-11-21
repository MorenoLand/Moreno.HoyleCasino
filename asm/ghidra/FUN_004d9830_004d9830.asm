; FUN_004d9830  004d9830
004d9830  PUSH EBP
004d9831  MOV EBP,ESP
004d9833  PUSH ECX
004d9834  PUSH ESI
004d9835  MOV dword ptr [EBP + -0x4],ECX
004d9838  MOVSX EAX,word ptr [EBP + 0x8]
004d983c  TEST EAX,EAX
004d983e  JGE 0x004d9857
004d9840  PUSH 0x18b0
004d9845  PUSH 0x6bf384
004d984a  PUSH 0x6bf888
004d984f  CALL 0x005e9f20
004d9854  ADD ESP,0xc
004d9857  MOVSX ESI,word ptr [EBP + 0x8]
004d985b  MOV ECX,dword ptr [0x00791364]
004d9861  CALL 0x0047f950
004d9866  CMP ESI,EAX
004d9868  JL 0x004d9881
004d986a  PUSH 0x18b1
004d986f  PUSH 0x6bf384
004d9874  PUSH 0x6bf858
004d9879  CALL 0x005e9f20
004d987e  ADD ESP,0xc
004d9881  MOVSX EAX,word ptr [EBP + 0xc]
004d9885  CMP EAX,0x2
004d9888  JGE 0x004d98a1
004d988a  PUSH 0x18b2
004d988f  PUSH 0x6bf384
004d9894  PUSH 0x6bf778
004d9899  CALL 0x005e9f20
004d989e  ADD ESP,0xc
004d98a1  MOVSX ESI,word ptr [EBP + 0xc]
004d98a5  MOV ECX,dword ptr [0x00791364]
004d98ab  CALL 0x0047f950
004d98b0  CMP ESI,EAX
004d98b2  JLE 0x004d98cb
004d98b4  PUSH 0x18b3
004d98b9  PUSH 0x6bf384
004d98be  PUSH 0x6bf740
004d98c3  CALL 0x005e9f20
004d98c8  ADD ESP,0xc
004d98cb  MOV EAX,dword ptr [EBP + -0x4]
004d98ce  MOV ECX,dword ptr [EAX + 0x428]
004d98d4  MOVSX EDX,word ptr [EBP + 0x8]
004d98d8  IMUL EDX,EDX,0x7
004d98db  LEA EAX,[ECX + EDX*0x1 + 0x8f8]
004d98e2  MOVSX ECX,word ptr [EBP + 0xc]
004d98e6  MOV DL,byte ptr [EAX + ECX*0x1 + -0x2]
004d98ea  ADD DL,0x1
004d98ed  MOVSX EAX,word ptr [EBP + 0xc]
004d98f1  MOVSX ECX,word ptr [EBP + 0x8]
004d98f5  IMUL ECX,ECX,0x7
004d98f8  MOV ESI,dword ptr [EBP + -0x4]
004d98fb  MOV ESI,dword ptr [ESI + 0x428]
004d9901  LEA ECX,[ESI + ECX*0x1 + 0x8f8]
004d9908  MOV byte ptr [ECX + EAX*0x1 + -0x2],DL
004d990c  MOV EDX,dword ptr [EBP + -0x4]
004d990f  MOV EAX,dword ptr [EDX + 0x428]
004d9915  MOVSX ECX,word ptr [EBP + 0x8]
004d9919  IMUL ECX,ECX,0x7
004d991c  LEA EDX,[EAX + ECX*0x1 + 0x8f8]
004d9923  MOVSX EAX,word ptr [EBP + 0xc]
004d9927  MOVZX ECX,byte ptr [EDX + EAX*0x1 + -0x2]
004d992c  CMP ECX,0x50
004d992f  JNZ 0x004d99fa
004d9935  MOV EDX,dword ptr [EBP + -0x4]
004d9938  MOV EAX,dword ptr [EDX + 0x428]
004d993e  MOVSX ECX,word ptr [EBP + 0x8]
004d9942  IMUL ECX,ECX,0xe
004d9945  LEA EDX,[EAX + ECX*0x1 + 0x818]
004d994c  MOVSX EAX,word ptr [EBP + 0xc]
004d9950  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x4]
004d9955  SHR ECX,0x1
004d9957  MOVSX EDX,word ptr [EBP + 0xc]
004d995b  MOVSX EAX,word ptr [EBP + 0x8]
004d995f  IMUL EAX,EAX,0xe
004d9962  MOV ESI,dword ptr [EBP + -0x4]
004d9965  MOV ESI,dword ptr [ESI + 0x428]
004d996b  LEA EAX,[ESI + EAX*0x1 + 0x818]
004d9972  MOV word ptr [EAX + EDX*0x2 + -0x4],CX
004d9977  MOV ECX,dword ptr [EBP + -0x4]
004d997a  MOV EDX,dword ptr [ECX + 0x428]
004d9980  MOVSX EAX,word ptr [EBP + 0x8]
004d9984  IMUL EAX,EAX,0xe
004d9987  LEA ECX,[EDX + EAX*0x1 + 0x888]
004d998e  MOVSX EDX,word ptr [EBP + 0xc]
004d9992  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x4]
004d9997  SHR EAX,0x1
004d9999  MOVSX ECX,word ptr [EBP + 0xc]
004d999d  MOVSX EDX,word ptr [EBP + 0x8]
004d99a1  IMUL EDX,EDX,0xe
004d99a4  MOV ESI,dword ptr [EBP + -0x4]
004d99a7  MOV ESI,dword ptr [ESI + 0x428]
004d99ad  LEA EDX,[ESI + EDX*0x1 + 0x888]
004d99b4  MOV word ptr [EDX + ECX*0x2 + -0x4],AX
004d99b9  MOV EAX,dword ptr [EBP + -0x4]
004d99bc  MOV ECX,dword ptr [EAX + 0x428]
004d99c2  MOVSX EDX,word ptr [EBP + 0x8]
004d99c6  IMUL EDX,EDX,0x7
004d99c9  LEA EAX,[ECX + EDX*0x1 + 0x8f8]
004d99d0  MOVSX ECX,word ptr [EBP + 0xc]
004d99d4  MOVZX EDX,byte ptr [EAX + ECX*0x1 + -0x2]
004d99d9  SHR EDX,0x1
004d99db  MOVSX EAX,word ptr [EBP + 0xc]
004d99df  MOVSX ECX,word ptr [EBP + 0x8]
004d99e3  IMUL ECX,ECX,0x7
004d99e6  MOV ESI,dword ptr [EBP + -0x4]
004d99e9  MOV ESI,dword ptr [ESI + 0x428]
004d99ef  LEA ECX,[ESI + ECX*0x1 + 0x8f8]
004d99f6  MOV byte ptr [ECX + EAX*0x1 + -0x2],DL
004d99fa  MOVSX EDX,word ptr [EBP + 0xc]
004d99fe  CMP EDX,0x2
004d9a01  JLE 0x004d9b36
004d9a07  MOV EAX,dword ptr [EBP + -0x4]
004d9a0a  MOV ECX,dword ptr [EAX + 0x428]
004d9a10  MOVSX EDX,word ptr [EBP + 0x8]
004d9a14  IMUL EDX,EDX,0x7
004d9a17  LEA EAX,[ECX + EDX*0x1 + 0x8f8]
004d9a1e  MOVSX ECX,word ptr [EBP + 0xc]
004d9a22  MOV DL,byte ptr [EAX + ECX*0x1 + -0x3]
004d9a26  ADD DL,0x1
004d9a29  MOVSX EAX,word ptr [EBP + 0xc]
004d9a2d  MOVSX ECX,word ptr [EBP + 0x8]
004d9a31  IMUL ECX,ECX,0x7
004d9a34  MOV ESI,dword ptr [EBP + -0x4]
004d9a37  MOV ESI,dword ptr [ESI + 0x428]
004d9a3d  LEA ECX,[ESI + ECX*0x1 + 0x8f8]
004d9a44  MOV byte ptr [ECX + EAX*0x1 + -0x3],DL
004d9a48  MOV EDX,dword ptr [EBP + -0x4]
004d9a4b  MOV EAX,dword ptr [EDX + 0x428]
004d9a51  MOVSX ECX,word ptr [EBP + 0x8]
004d9a55  IMUL ECX,ECX,0x7
004d9a58  LEA EDX,[EAX + ECX*0x1 + 0x8f8]
004d9a5f  MOVSX EAX,word ptr [EBP + 0xc]
004d9a63  MOVZX ECX,byte ptr [EDX + EAX*0x1 + -0x3]
004d9a68  CMP ECX,0x50
004d9a6b  JNZ 0x004d9b36
004d9a71  MOV EDX,dword ptr [EBP + -0x4]
004d9a74  MOV EAX,dword ptr [EDX + 0x428]
004d9a7a  MOVSX ECX,word ptr [EBP + 0x8]
004d9a7e  IMUL ECX,ECX,0xe
004d9a81  LEA EDX,[EAX + ECX*0x1 + 0x818]
004d9a88  MOVSX EAX,word ptr [EBP + 0xc]
004d9a8c  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x6]
004d9a91  SHR ECX,0x1
004d9a93  MOVSX EDX,word ptr [EBP + 0xc]
004d9a97  MOVSX EAX,word ptr [EBP + 0x8]
004d9a9b  IMUL EAX,EAX,0xe
004d9a9e  MOV ESI,dword ptr [EBP + -0x4]
004d9aa1  MOV ESI,dword ptr [ESI + 0x428]
004d9aa7  LEA EAX,[ESI + EAX*0x1 + 0x818]
004d9aae  MOV word ptr [EAX + EDX*0x2 + -0x6],CX
004d9ab3  MOV ECX,dword ptr [EBP + -0x4]
004d9ab6  MOV EDX,dword ptr [ECX + 0x428]
004d9abc  MOVSX EAX,word ptr [EBP + 0x8]
004d9ac0  IMUL EAX,EAX,0xe
004d9ac3  LEA ECX,[EDX + EAX*0x1 + 0x888]
004d9aca  MOVSX EDX,word ptr [EBP + 0xc]
004d9ace  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x6]
004d9ad3  SHR EAX,0x1
004d9ad5  MOVSX ECX,word ptr [EBP + 0xc]
004d9ad9  MOVSX EDX,word ptr [EBP + 0x8]
004d9add  IMUL EDX,EDX,0xe
004d9ae0  MOV ESI,dword ptr [EBP + -0x4]
004d9ae3  MOV ESI,dword ptr [ESI + 0x428]
004d9ae9  LEA EDX,[ESI + EDX*0x1 + 0x888]
004d9af0  MOV word ptr [EDX + ECX*0x2 + -0x6],AX
004d9af5  MOV EAX,dword ptr [EBP + -0x4]
004d9af8  MOV ECX,dword ptr [EAX + 0x428]
004d9afe  MOVSX EDX,word ptr [EBP + 0x8]
004d9b02  IMUL EDX,EDX,0x7
004d9b05  LEA EAX,[ECX + EDX*0x1 + 0x8f8]
004d9b0c  MOVSX ECX,word ptr [EBP + 0xc]
004d9b10  MOVZX EDX,byte ptr [EAX + ECX*0x1 + -0x3]
004d9b15  SHR EDX,0x1
004d9b17  MOVSX EAX,word ptr [EBP + 0xc]
004d9b1b  MOVSX ECX,word ptr [EBP + 0x8]
004d9b1f  IMUL ECX,ECX,0x7
004d9b22  MOV ESI,dword ptr [EBP + -0x4]
004d9b25  MOV ESI,dword ptr [ESI + 0x428]
004d9b2b  LEA ECX,[ESI + ECX*0x1 + 0x8f8]
004d9b32  MOV byte ptr [ECX + EAX*0x1 + -0x3],DL
004d9b36  MOVSX ESI,word ptr [EBP + 0xc]
004d9b3a  MOV ECX,dword ptr [0x00791364]
004d9b40  CALL 0x0047f950
004d9b45  CMP ESI,EAX
004d9b47  JGE 0x004d9c7c
004d9b4d  MOV EDX,dword ptr [EBP + -0x4]
004d9b50  MOV EAX,dword ptr [EDX + 0x428]
004d9b56  MOVSX ECX,word ptr [EBP + 0x8]
004d9b5a  IMUL ECX,ECX,0x7
004d9b5d  LEA EDX,[EAX + ECX*0x1 + 0x8f8]
004d9b64  MOVSX EAX,word ptr [EBP + 0xc]
004d9b68  MOV CL,byte ptr [EDX + EAX*0x1 + -0x1]
004d9b6c  ADD CL,0x1
004d9b6f  MOVSX EDX,word ptr [EBP + 0xc]
004d9b73  MOVSX EAX,word ptr [EBP + 0x8]
004d9b77  IMUL EAX,EAX,0x7
004d9b7a  MOV ESI,dword ptr [EBP + -0x4]
004d9b7d  MOV ESI,dword ptr [ESI + 0x428]
004d9b83  LEA EAX,[ESI + EAX*0x1 + 0x8f8]
004d9b8a  MOV byte ptr [EAX + EDX*0x1 + -0x1],CL
004d9b8e  MOV ECX,dword ptr [EBP + -0x4]
004d9b91  MOV EDX,dword ptr [ECX + 0x428]
004d9b97  MOVSX EAX,word ptr [EBP + 0x8]
004d9b9b  IMUL EAX,EAX,0x7
004d9b9e  LEA ECX,[EDX + EAX*0x1 + 0x8f8]
004d9ba5  MOVSX EDX,word ptr [EBP + 0xc]
004d9ba9  MOVZX EAX,byte ptr [ECX + EDX*0x1 + -0x1]
004d9bae  CMP EAX,0x50
004d9bb1  JNZ 0x004d9c7c
004d9bb7  MOV ECX,dword ptr [EBP + -0x4]
004d9bba  MOV EDX,dword ptr [ECX + 0x428]
004d9bc0  MOVSX EAX,word ptr [EBP + 0x8]
004d9bc4  IMUL EAX,EAX,0xe
004d9bc7  LEA ECX,[EDX + EAX*0x1 + 0x818]
004d9bce  MOVSX EDX,word ptr [EBP + 0xc]
004d9bd2  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x2]
004d9bd7  SHR EAX,0x1
004d9bd9  MOVSX ECX,word ptr [EBP + 0xc]
004d9bdd  MOVSX EDX,word ptr [EBP + 0x8]
004d9be1  IMUL EDX,EDX,0xe
004d9be4  MOV ESI,dword ptr [EBP + -0x4]
004d9be7  MOV ESI,dword ptr [ESI + 0x428]
004d9bed  LEA EDX,[ESI + EDX*0x1 + 0x818]
004d9bf4  MOV word ptr [EDX + ECX*0x2 + -0x2],AX
004d9bf9  MOV EAX,dword ptr [EBP + -0x4]
004d9bfc  MOV ECX,dword ptr [EAX + 0x428]
004d9c02  MOVSX EDX,word ptr [EBP + 0x8]
004d9c06  IMUL EDX,EDX,0xe
004d9c09  LEA EAX,[ECX + EDX*0x1 + 0x888]
004d9c10  MOVSX ECX,word ptr [EBP + 0xc]
004d9c14  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x2]
004d9c19  SHR EDX,0x1
004d9c1b  MOVSX EAX,word ptr [EBP + 0xc]
004d9c1f  MOVSX ECX,word ptr [EBP + 0x8]
004d9c23  IMUL ECX,ECX,0xe
004d9c26  MOV ESI,dword ptr [EBP + -0x4]
004d9c29  MOV ESI,dword ptr [ESI + 0x428]
004d9c2f  LEA ECX,[ESI + ECX*0x1 + 0x888]
004d9c36  MOV word ptr [ECX + EAX*0x2 + -0x2],DX
004d9c3b  MOV EDX,dword ptr [EBP + -0x4]
004d9c3e  MOV EAX,dword ptr [EDX + 0x428]
004d9c44  MOVSX ECX,word ptr [EBP + 0x8]
004d9c48  IMUL ECX,ECX,0x7
004d9c4b  LEA EDX,[EAX + ECX*0x1 + 0x8f8]
004d9c52  MOVSX EAX,word ptr [EBP + 0xc]
004d9c56  MOVZX ECX,byte ptr [EDX + EAX*0x1 + -0x1]
004d9c5b  SHR ECX,0x1
004d9c5d  MOVSX EDX,word ptr [EBP + 0xc]
004d9c61  MOVSX EAX,word ptr [EBP + 0x8]
004d9c65  IMUL EAX,EAX,0x7
004d9c68  MOV ESI,dword ptr [EBP + -0x4]
004d9c6b  MOV ESI,dword ptr [ESI + 0x428]
004d9c71  LEA EAX,[ESI + EAX*0x1 + 0x8f8]
004d9c78  MOV byte ptr [EAX + EDX*0x1 + -0x1],CL
004d9c7c  POP ESI
004d9c7d  MOV ESP,EBP
004d9c7f  POP EBP
004d9c80  RET 0x8
