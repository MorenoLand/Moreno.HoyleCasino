; FUN_0061ebd0  0061ebd0
0061ebd0  PUSH EBP
0061ebd1  MOV EBP,ESP
0061ebd3  SUB ESP,0x390
0061ebd9  MOV EAX,[0x00781870]
0061ebde  XOR EAX,EBP
0061ebe0  MOV dword ptr [EBP + -0x8],EAX
0061ebe3  MOV dword ptr [EBP + 0xfffffc70],ECX
0061ebe9  MOV dword ptr [EBP + -0x4],0x0
0061ebf0  MOV byte ptr [EBP + 0xfffffef0],0x0
0061ebf7  LEA EAX,[EBP + 0xfffffef0]
0061ebfd  PUSH EAX
0061ebfe  MOV ECX,dword ptr [EBP + 0xfffffc70]
0061ec04  CALL 0x0061e6c0
0061ec09  MOV dword ptr [EBP + -0x4],EAX
0061ec0c  CMP dword ptr [EBP + -0x4],0x0
0061ec10  JZ 0x0061ecfa
0061ec16  MOV ECX,dword ptr [EBP + -0x4]
0061ec19  PUSH ECX
0061ec1a  CALL 0x005e9fd0
0061ec1f  ADD ESP,0x4
0061ec22  MOV EDX,dword ptr [EBP + 0xfffffc70]
0061ec28  MOV dword ptr [EDX + 0x14c],EAX
0061ec2e  MOV EAX,dword ptr [EBP + 0xfffffc70]
0061ec34  MOV ECX,dword ptr [EAX + 0x14c]
0061ec3a  PUSH ECX
0061ec3b  CALL 0x00686d82
0061ec40  ADD ESP,0x4
0061ec43  MOV dword ptr [EBP + 0xfffffc74],EAX
0061ec49  MOV EDX,dword ptr [EBP + 0xfffffc70]
0061ec4f  MOV EAX,dword ptr [EBP + 0xfffffc74]
0061ec55  MOV dword ptr [EDX + 0x158],EAX
0061ec5b  MOV ECX,dword ptr [EBP + -0x4]
0061ec5e  PUSH ECX
0061ec5f  MOV EDX,dword ptr [EBP + 0xfffffc70]
0061ec65  MOV EAX,dword ptr [EDX + 0x14c]
0061ec6b  PUSH EAX
0061ec6c  PUSH 0x1
0061ec6e  MOV ECX,dword ptr [EBP + 0xfffffc70]
0061ec74  MOV EDX,dword ptr [ECX + 0x158]
0061ec7a  PUSH EDX
0061ec7b  CALL dword ptr [0x006b225c]
0061ec81  ADD ESP,0x10
0061ec84  MOV dword ptr [EBP + 0xfffffeec],EAX
0061ec8a  MOV EAX,dword ptr [EBP + 0xfffffc70]
0061ec90  MOV ECX,dword ptr [EBP + 0xfffffeec]
0061ec96  CMP ECX,dword ptr [EAX + 0x14c]
0061ec9c  JZ 0x0061ecb5
0061ec9e  PUSH 0x180
0061eca3  PUSH 0x6d8db8
0061eca8  PUSH 0x6d8da0
0061ecad  CALL 0x005e9f20
0061ecb2  ADD ESP,0xc
0061ecb5  MOV EAX,dword ptr [EBP + -0x4]
0061ecb8  PUSH EAX
0061ecb9  CALL dword ptr [0x006b2258]
0061ecbf  ADD ESP,0x4
0061ecc2  MOVZX ECX,byte ptr [0x00795fb2]
0061ecc9  TEST ECX,ECX
0061eccb  JZ 0x0061ecf8
0061eccd  LEA EDX,[EBP + 0xfffffef0]
0061ecd3  PUSH EDX
0061ecd4  PUSH 0x6d8d88
0061ecd9  LEA EAX,[EBP + 0xfffffdb0]
0061ecdf  PUSH EAX
0061ece0  CALL dword ptr [0x006b2220]
0061ece6  ADD ESP,0xc
0061ece9  LEA ECX,[EBP + 0xfffffdb0]
0061ecef  PUSH ECX
0061ecf0  CALL 0x0062fde0
0061ecf5  ADD ESP,0x4
0061ecf8  JMP 0x0061ed64
0061ecfa  MOVZX EDX,byte ptr [0x00795fb2]
0061ed01  TEST EDX,EDX
0061ed03  JZ 0x0061ed64
0061ed05  MOV EAX,dword ptr [EBP + 0xfffffc70]
0061ed0b  MOV ECX,dword ptr [EAX + 0x30]
0061ed0e  SAR ECX,0x18
0061ed11  PUSH ECX
0061ed12  MOV EDX,dword ptr [EBP + 0xfffffc70]
0061ed18  MOV EAX,dword ptr [EDX + 0x30]
0061ed1b  SAR EAX,0x10
0061ed1e  PUSH EAX
0061ed1f  MOV ECX,dword ptr [EBP + 0xfffffc70]
0061ed25  MOV EDX,dword ptr [ECX + 0x30]
0061ed28  SAR EDX,0x8
0061ed2b  PUSH EDX
0061ed2c  MOV EAX,dword ptr [EBP + 0xfffffc70]
0061ed32  MOV ECX,dword ptr [EAX + 0x30]
0061ed35  PUSH ECX
0061ed36  MOV EDX,dword ptr [EBP + 0xfffffc70]
0061ed3c  MOV EAX,dword ptr [EDX + 0x34]
0061ed3f  PUSH EAX
0061ed40  PUSH 0x6d8d64
0061ed45  LEA ECX,[EBP + 0xfffffc78]
0061ed4b  PUSH ECX
0061ed4c  CALL dword ptr [0x006b2220]
0061ed52  ADD ESP,0x1c
0061ed55  LEA EDX,[EBP + 0xfffffc78]
0061ed5b  PUSH EDX
0061ed5c  CALL 0x0062fde0
0061ed61  ADD ESP,0x4
0061ed64  MOV ECX,dword ptr [EBP + -0x8]
0061ed67  XOR ECX,EBP
0061ed69  CALL 0x00686d72
0061ed6e  MOV ESP,EBP
0061ed70  POP EBP
0061ed71  RET
