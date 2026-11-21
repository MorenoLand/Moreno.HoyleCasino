; FUN_004d4810  004d4810
004d4810  PUSH EBP
004d4811  MOV EBP,ESP
004d4813  PUSH ECX
004d4814  PUSH ESI
004d4815  MOV dword ptr [EBP + -0x4],ECX
004d4818  MOVSX EAX,word ptr [EBP + 0x8]
004d481c  TEST EAX,EAX
004d481e  JGE 0x004d4837
004d4820  PUSH 0x12b0
004d4825  PUSH 0x6bf384
004d482a  PUSH 0x6bf888
004d482f  CALL 0x005e9f20
004d4834  ADD ESP,0xc
004d4837  MOVSX ESI,word ptr [EBP + 0x8]
004d483b  MOV ECX,dword ptr [0x00791364]
004d4841  CALL 0x0047f950
004d4846  CMP ESI,EAX
004d4848  JL 0x004d4861
004d484a  PUSH 0x12b1
004d484f  PUSH 0x6bf384
004d4854  PUSH 0x6bf858
004d4859  CALL 0x005e9f20
004d485e  ADD ESP,0xc
004d4861  MOVSX EAX,word ptr [EBP + 0xc]
004d4865  CMP EAX,0x2
004d4868  JGE 0x004d4881
004d486a  PUSH 0x12b2
004d486f  PUSH 0x6bf384
004d4874  PUSH 0x6bf778
004d4879  CALL 0x005e9f20
004d487e  ADD ESP,0xc
004d4881  MOVSX ESI,word ptr [EBP + 0xc]
004d4885  MOV ECX,dword ptr [0x00791364]
004d488b  CALL 0x0047f950
004d4890  CMP ESI,EAX
004d4892  JLE 0x004d48ab
004d4894  PUSH 0x12b3
004d4899  PUSH 0x6bf384
004d489e  PUSH 0x6bf740
004d48a3  CALL 0x005e9f20
004d48a8  ADD ESP,0xc
004d48ab  MOV EAX,dword ptr [EBP + -0x4]
004d48ae  MOV ECX,dword ptr [EAX + 0x428]
004d48b4  MOVSX EDX,word ptr [EBP + 0x8]
004d48b8  IMUL EDX,EDX,0x7
004d48bb  LEA EAX,[ECX + EDX*0x1 + 0x5b0]
004d48c2  MOVSX ECX,word ptr [EBP + 0xc]
004d48c6  MOV DL,byte ptr [EAX + ECX*0x1 + -0x2]
004d48ca  ADD DL,0x1
004d48cd  MOVSX EAX,word ptr [EBP + 0xc]
004d48d1  MOVSX ECX,word ptr [EBP + 0x8]
004d48d5  IMUL ECX,ECX,0x7
004d48d8  MOV ESI,dword ptr [EBP + -0x4]
004d48db  MOV ESI,dword ptr [ESI + 0x428]
004d48e1  LEA ECX,[ESI + ECX*0x1 + 0x5b0]
004d48e8  MOV byte ptr [ECX + EAX*0x1 + -0x2],DL
004d48ec  MOV EDX,dword ptr [EBP + -0x4]
004d48ef  MOV EAX,dword ptr [EDX + 0x428]
004d48f5  MOVSX ECX,word ptr [EBP + 0x8]
004d48f9  IMUL ECX,ECX,0x7
004d48fc  LEA EDX,[EAX + ECX*0x1 + 0x5b0]
004d4903  MOVSX EAX,word ptr [EBP + 0xc]
004d4907  MOVZX ECX,byte ptr [EDX + EAX*0x1 + -0x2]
004d490c  CMP ECX,0x50
004d490f  JNZ 0x004d4a1c
004d4915  MOV EDX,dword ptr [EBP + -0x4]
004d4918  MOV EAX,dword ptr [EDX + 0x428]
004d491e  MOVSX ECX,word ptr [EBP + 0x8]
004d4922  IMUL ECX,ECX,0xe
004d4925  LEA EDX,[EAX + ECX*0x1 + 0x460]
004d492c  MOVSX EAX,word ptr [EBP + 0xc]
004d4930  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x4]
004d4935  SHR ECX,0x1
004d4937  MOVSX EDX,word ptr [EBP + 0xc]
004d493b  MOVSX EAX,word ptr [EBP + 0x8]
004d493f  IMUL EAX,EAX,0xe
004d4942  MOV ESI,dword ptr [EBP + -0x4]
004d4945  MOV ESI,dword ptr [ESI + 0x428]
004d494b  LEA EAX,[ESI + EAX*0x1 + 0x460]
004d4952  MOV word ptr [EAX + EDX*0x2 + -0x4],CX
004d4957  MOV ECX,dword ptr [EBP + -0x4]
004d495a  MOV EDX,dword ptr [ECX + 0x428]
004d4960  MOVSX EAX,word ptr [EBP + 0x8]
004d4964  IMUL EAX,EAX,0xe
004d4967  LEA ECX,[EDX + EAX*0x1 + 0x4d0]
004d496e  MOVSX EDX,word ptr [EBP + 0xc]
004d4972  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x4]
004d4977  SHR EAX,0x1
004d4979  MOVSX ECX,word ptr [EBP + 0xc]
004d497d  MOVSX EDX,word ptr [EBP + 0x8]
004d4981  IMUL EDX,EDX,0xe
004d4984  MOV ESI,dword ptr [EBP + -0x4]
004d4987  MOV ESI,dword ptr [ESI + 0x428]
004d498d  LEA EDX,[ESI + EDX*0x1 + 0x4d0]
004d4994  MOV word ptr [EDX + ECX*0x2 + -0x4],AX
004d4999  MOV EAX,dword ptr [EBP + -0x4]
004d499c  MOV ECX,dword ptr [EAX + 0x428]
004d49a2  MOVSX EDX,word ptr [EBP + 0x8]
004d49a6  IMUL EDX,EDX,0xe
004d49a9  LEA EAX,[ECX + EDX*0x1 + 0x540]
004d49b0  MOVSX ECX,word ptr [EBP + 0xc]
004d49b4  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004d49b9  SHR EDX,0x1
004d49bb  MOVSX EAX,word ptr [EBP + 0xc]
004d49bf  MOVSX ECX,word ptr [EBP + 0x8]
004d49c3  IMUL ECX,ECX,0xe
004d49c6  MOV ESI,dword ptr [EBP + -0x4]
004d49c9  MOV ESI,dword ptr [ESI + 0x428]
004d49cf  LEA ECX,[ESI + ECX*0x1 + 0x540]
004d49d6  MOV word ptr [ECX + EAX*0x2 + -0x4],DX
004d49db  MOV EDX,dword ptr [EBP + -0x4]
004d49de  MOV EAX,dword ptr [EDX + 0x428]
004d49e4  MOVSX ECX,word ptr [EBP + 0x8]
004d49e8  IMUL ECX,ECX,0x7
004d49eb  LEA EDX,[EAX + ECX*0x1 + 0x5b0]
004d49f2  MOVSX EAX,word ptr [EBP + 0xc]
004d49f6  MOVZX ECX,byte ptr [EDX + EAX*0x1 + -0x2]
004d49fb  SHR ECX,0x1
004d49fd  MOVSX EDX,word ptr [EBP + 0xc]
004d4a01  MOVSX EAX,word ptr [EBP + 0x8]
004d4a05  IMUL EAX,EAX,0x7
004d4a08  MOV ESI,dword ptr [EBP + -0x4]
004d4a0b  MOV ESI,dword ptr [ESI + 0x428]
004d4a11  LEA EAX,[ESI + EAX*0x1 + 0x5b0]
004d4a18  MOV byte ptr [EAX + EDX*0x1 + -0x2],CL
004d4a1c  MOVSX ECX,word ptr [EBP + 0xc]
004d4a20  CMP ECX,0x2
004d4a23  JLE 0x004d4b9a
004d4a29  MOV EDX,dword ptr [EBP + -0x4]
004d4a2c  MOV EAX,dword ptr [EDX + 0x428]
004d4a32  MOVSX ECX,word ptr [EBP + 0x8]
004d4a36  IMUL ECX,ECX,0x7
004d4a39  LEA EDX,[EAX + ECX*0x1 + 0x5b0]
004d4a40  MOVSX EAX,word ptr [EBP + 0xc]
004d4a44  MOV CL,byte ptr [EDX + EAX*0x1 + -0x3]
004d4a48  ADD CL,0x1
004d4a4b  MOVSX EDX,word ptr [EBP + 0xc]
004d4a4f  MOVSX EAX,word ptr [EBP + 0x8]
004d4a53  IMUL EAX,EAX,0x7
004d4a56  MOV ESI,dword ptr [EBP + -0x4]
004d4a59  MOV ESI,dword ptr [ESI + 0x428]
004d4a5f  LEA EAX,[ESI + EAX*0x1 + 0x5b0]
004d4a66  MOV byte ptr [EAX + EDX*0x1 + -0x3],CL
004d4a6a  MOV ECX,dword ptr [EBP + -0x4]
004d4a6d  MOV EDX,dword ptr [ECX + 0x428]
004d4a73  MOVSX EAX,word ptr [EBP + 0x8]
004d4a77  IMUL EAX,EAX,0x7
004d4a7a  LEA ECX,[EDX + EAX*0x1 + 0x5b0]
004d4a81  MOVSX EDX,word ptr [EBP + 0xc]
004d4a85  MOVZX EAX,byte ptr [ECX + EDX*0x1 + -0x3]
004d4a8a  CMP EAX,0x50
004d4a8d  JNZ 0x004d4b9a
004d4a93  MOV ECX,dword ptr [EBP + -0x4]
004d4a96  MOV EDX,dword ptr [ECX + 0x428]
004d4a9c  MOVSX EAX,word ptr [EBP + 0x8]
004d4aa0  IMUL EAX,EAX,0xe
004d4aa3  LEA ECX,[EDX + EAX*0x1 + 0x460]
004d4aaa  MOVSX EDX,word ptr [EBP + 0xc]
004d4aae  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x6]
004d4ab3  SHR EAX,0x1
004d4ab5  MOVSX ECX,word ptr [EBP + 0xc]
004d4ab9  MOVSX EDX,word ptr [EBP + 0x8]
004d4abd  IMUL EDX,EDX,0xe
004d4ac0  MOV ESI,dword ptr [EBP + -0x4]
004d4ac3  MOV ESI,dword ptr [ESI + 0x428]
004d4ac9  LEA EDX,[ESI + EDX*0x1 + 0x460]
004d4ad0  MOV word ptr [EDX + ECX*0x2 + -0x6],AX
004d4ad5  MOV EAX,dword ptr [EBP + -0x4]
004d4ad8  MOV ECX,dword ptr [EAX + 0x428]
004d4ade  MOVSX EDX,word ptr [EBP + 0x8]
004d4ae2  IMUL EDX,EDX,0xe
004d4ae5  LEA EAX,[ECX + EDX*0x1 + 0x4d0]
004d4aec  MOVSX ECX,word ptr [EBP + 0xc]
004d4af0  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x6]
004d4af5  SHR EDX,0x1
004d4af7  MOVSX EAX,word ptr [EBP + 0xc]
004d4afb  MOVSX ECX,word ptr [EBP + 0x8]
004d4aff  IMUL ECX,ECX,0xe
004d4b02  MOV ESI,dword ptr [EBP + -0x4]
004d4b05  MOV ESI,dword ptr [ESI + 0x428]
004d4b0b  LEA ECX,[ESI + ECX*0x1 + 0x4d0]
004d4b12  MOV word ptr [ECX + EAX*0x2 + -0x6],DX
004d4b17  MOV EDX,dword ptr [EBP + -0x4]
004d4b1a  MOV EAX,dword ptr [EDX + 0x428]
004d4b20  MOVSX ECX,word ptr [EBP + 0x8]
004d4b24  IMUL ECX,ECX,0xe
004d4b27  LEA EDX,[EAX + ECX*0x1 + 0x540]
004d4b2e  MOVSX EAX,word ptr [EBP + 0xc]
004d4b32  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x6]
004d4b37  SHR ECX,0x1
004d4b39  MOVSX EDX,word ptr [EBP + 0xc]
004d4b3d  MOVSX EAX,word ptr [EBP + 0x8]
004d4b41  IMUL EAX,EAX,0xe
004d4b44  MOV ESI,dword ptr [EBP + -0x4]
004d4b47  MOV ESI,dword ptr [ESI + 0x428]
004d4b4d  LEA EAX,[ESI + EAX*0x1 + 0x540]
004d4b54  MOV word ptr [EAX + EDX*0x2 + -0x6],CX
004d4b59  MOV ECX,dword ptr [EBP + -0x4]
004d4b5c  MOV EDX,dword ptr [ECX + 0x428]
004d4b62  MOVSX EAX,word ptr [EBP + 0x8]
004d4b66  IMUL EAX,EAX,0x7
004d4b69  LEA ECX,[EDX + EAX*0x1 + 0x5b0]
004d4b70  MOVSX EDX,word ptr [EBP + 0xc]
004d4b74  MOVZX EAX,byte ptr [ECX + EDX*0x1 + -0x3]
004d4b79  SHR EAX,0x1
004d4b7b  MOVSX ECX,word ptr [EBP + 0xc]
004d4b7f  MOVSX EDX,word ptr [EBP + 0x8]
004d4b83  IMUL EDX,EDX,0x7
004d4b86  MOV ESI,dword ptr [EBP + -0x4]
004d4b89  MOV ESI,dword ptr [ESI + 0x428]
004d4b8f  LEA EDX,[ESI + EDX*0x1 + 0x5b0]
004d4b96  MOV byte ptr [EDX + ECX*0x1 + -0x3],AL
004d4b9a  MOVSX ESI,word ptr [EBP + 0xc]
004d4b9e  MOV ECX,dword ptr [0x00791364]
004d4ba4  CALL 0x0047f950
004d4ba9  CMP ESI,EAX
004d4bab  JGE 0x004d4d22
004d4bb1  MOV EAX,dword ptr [EBP + -0x4]
004d4bb4  MOV ECX,dword ptr [EAX + 0x428]
004d4bba  MOVSX EDX,word ptr [EBP + 0x8]
004d4bbe  IMUL EDX,EDX,0x7
004d4bc1  LEA EAX,[ECX + EDX*0x1 + 0x5b0]
004d4bc8  MOVSX ECX,word ptr [EBP + 0xc]
004d4bcc  MOV DL,byte ptr [EAX + ECX*0x1 + -0x1]
004d4bd0  ADD DL,0x1
004d4bd3  MOVSX EAX,word ptr [EBP + 0xc]
004d4bd7  MOVSX ECX,word ptr [EBP + 0x8]
004d4bdb  IMUL ECX,ECX,0x7
004d4bde  MOV ESI,dword ptr [EBP + -0x4]
004d4be1  MOV ESI,dword ptr [ESI + 0x428]
004d4be7  LEA ECX,[ESI + ECX*0x1 + 0x5b0]
004d4bee  MOV byte ptr [ECX + EAX*0x1 + -0x1],DL
004d4bf2  MOV EDX,dword ptr [EBP + -0x4]
004d4bf5  MOV EAX,dword ptr [EDX + 0x428]
004d4bfb  MOVSX ECX,word ptr [EBP + 0x8]
004d4bff  IMUL ECX,ECX,0x7
004d4c02  LEA EDX,[EAX + ECX*0x1 + 0x5b0]
004d4c09  MOVSX EAX,word ptr [EBP + 0xc]
004d4c0d  MOVZX ECX,byte ptr [EDX + EAX*0x1 + -0x1]
004d4c12  CMP ECX,0x50
004d4c15  JNZ 0x004d4d22
004d4c1b  MOV EDX,dword ptr [EBP + -0x4]
004d4c1e  MOV EAX,dword ptr [EDX + 0x428]
004d4c24  MOVSX ECX,word ptr [EBP + 0x8]
004d4c28  IMUL ECX,ECX,0xe
004d4c2b  LEA EDX,[EAX + ECX*0x1 + 0x460]
004d4c32  MOVSX EAX,word ptr [EBP + 0xc]
004d4c36  MOVZX ECX,word ptr [EDX + EAX*0x2 + -0x2]
004d4c3b  SHR ECX,0x1
004d4c3d  MOVSX EDX,word ptr [EBP + 0xc]
004d4c41  MOVSX EAX,word ptr [EBP + 0x8]
004d4c45  IMUL EAX,EAX,0xe
004d4c48  MOV ESI,dword ptr [EBP + -0x4]
004d4c4b  MOV ESI,dword ptr [ESI + 0x428]
004d4c51  LEA EAX,[ESI + EAX*0x1 + 0x460]
004d4c58  MOV word ptr [EAX + EDX*0x2 + -0x2],CX
004d4c5d  MOV ECX,dword ptr [EBP + -0x4]
004d4c60  MOV EDX,dword ptr [ECX + 0x428]
004d4c66  MOVSX EAX,word ptr [EBP + 0x8]
004d4c6a  IMUL EAX,EAX,0xe
004d4c6d  LEA ECX,[EDX + EAX*0x1 + 0x4d0]
004d4c74  MOVSX EDX,word ptr [EBP + 0xc]
004d4c78  MOVZX EAX,word ptr [ECX + EDX*0x2 + -0x2]
004d4c7d  SHR EAX,0x1
004d4c7f  MOVSX ECX,word ptr [EBP + 0xc]
004d4c83  MOVSX EDX,word ptr [EBP + 0x8]
004d4c87  IMUL EDX,EDX,0xe
004d4c8a  MOV ESI,dword ptr [EBP + -0x4]
004d4c8d  MOV ESI,dword ptr [ESI + 0x428]
004d4c93  LEA EDX,[ESI + EDX*0x1 + 0x4d0]
004d4c9a  MOV word ptr [EDX + ECX*0x2 + -0x2],AX
004d4c9f  MOV EAX,dword ptr [EBP + -0x4]
004d4ca2  MOV ECX,dword ptr [EAX + 0x428]
004d4ca8  MOVSX EDX,word ptr [EBP + 0x8]
004d4cac  IMUL EDX,EDX,0xe
004d4caf  LEA EAX,[ECX + EDX*0x1 + 0x540]
004d4cb6  MOVSX ECX,word ptr [EBP + 0xc]
004d4cba  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x2]
004d4cbf  SHR EDX,0x1
004d4cc1  MOVSX EAX,word ptr [EBP + 0xc]
004d4cc5  MOVSX ECX,word ptr [EBP + 0x8]
004d4cc9  IMUL ECX,ECX,0xe
004d4ccc  MOV ESI,dword ptr [EBP + -0x4]
004d4ccf  MOV ESI,dword ptr [ESI + 0x428]
004d4cd5  LEA ECX,[ESI + ECX*0x1 + 0x540]
004d4cdc  MOV word ptr [ECX + EAX*0x2 + -0x2],DX
004d4ce1  MOV EDX,dword ptr [EBP + -0x4]
004d4ce4  MOV EAX,dword ptr [EDX + 0x428]
004d4cea  MOVSX ECX,word ptr [EBP + 0x8]
004d4cee  IMUL ECX,ECX,0x7
004d4cf1  LEA EDX,[EAX + ECX*0x1 + 0x5b0]
004d4cf8  MOVSX EAX,word ptr [EBP + 0xc]
004d4cfc  MOVZX ECX,byte ptr [EDX + EAX*0x1 + -0x1]
004d4d01  SHR ECX,0x1
004d4d03  MOVSX EDX,word ptr [EBP + 0xc]
004d4d07  MOVSX EAX,word ptr [EBP + 0x8]
004d4d0b  IMUL EAX,EAX,0x7
004d4d0e  MOV ESI,dword ptr [EBP + -0x4]
004d4d11  MOV ESI,dword ptr [ESI + 0x428]
004d4d17  LEA EAX,[ESI + EAX*0x1 + 0x5b0]
004d4d1e  MOV byte ptr [EAX + EDX*0x1 + -0x1],CL
004d4d22  POP ESI
004d4d23  MOV ESP,EBP
004d4d25  POP EBP
004d4d26  RET 0x8
