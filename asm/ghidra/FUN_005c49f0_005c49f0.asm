; FUN_005c49f0  005c49f0
005c49f0  PUSH EBP
005c49f1  MOV EBP,ESP
005c49f3  SUB ESP,0x80
005c49f9  MOV dword ptr [EBP + -0x74],ECX
005c49fc  MOV EAX,dword ptr [EBP + -0x74]
005c49ff  CMP dword ptr [EAX + 0x4],0x0
005c4a03  JNZ 0x005c4a0e
005c4a05  MOV dword ptr [EBP + -0x78],0x0
005c4a0c  JMP 0x005c4a20
005c4a0e  MOV ECX,dword ptr [EBP + -0x74]
005c4a11  MOV EDX,dword ptr [EBP + -0x74]
005c4a14  MOV EAX,dword ptr [ECX + 0x8]
005c4a17  SUB EAX,dword ptr [EDX + 0x4]
005c4a1a  SAR EAX,0x2
005c4a1d  MOV dword ptr [EBP + -0x78],EAX
005c4a20  MOV ECX,dword ptr [EBP + -0x78]
005c4a23  CMP ECX,dword ptr [EBP + 0x8]
005c4a26  JNC 0x005c4aae
005c4a2c  MOV EDX,dword ptr [EBP + -0x74]
005c4a2f  CMP dword ptr [EDX + 0x4],0x0
005c4a33  JNZ 0x005c4a3e
005c4a35  MOV dword ptr [EBP + -0x7c],0x0
005c4a3c  JMP 0x005c4a50
005c4a3e  MOV EAX,dword ptr [EBP + -0x74]
005c4a41  MOV ECX,dword ptr [EBP + -0x74]
005c4a44  MOV EDX,dword ptr [EAX + 0x8]
005c4a47  SUB EDX,dword ptr [ECX + 0x4]
005c4a4a  SAR EDX,0x2
005c4a4d  MOV dword ptr [EBP + -0x7c],EDX
005c4a50  MOV EAX,dword ptr [EBP + -0x74]
005c4a53  MOV ECX,dword ptr [EAX + 0x8]
005c4a56  MOV dword ptr [EBP + -0x2c],ECX
005c4a59  MOV dword ptr [EBP + -0x8],0x0
005c4a60  CMP dword ptr [EBP + -0x74],0x0
005c4a64  JZ 0x005c4a7c
005c4a66  MOV EDX,dword ptr [EBP + -0x74]
005c4a69  MOV EAX,dword ptr [EDX + 0x4]
005c4a6c  CMP EAX,dword ptr [EBP + -0x2c]
005c4a6f  JA 0x005c4a7c
005c4a71  MOV ECX,dword ptr [EBP + -0x74]
005c4a74  MOV EDX,dword ptr [EBP + -0x2c]
005c4a77  CMP EDX,dword ptr [ECX + 0x8]
005c4a7a  JBE 0x005c4a82
005c4a7c  CALL dword ptr [0x006b2274]
005c4a82  MOV EAX,dword ptr [EBP + -0x74]
005c4a85  MOV dword ptr [EBP + -0x8],EAX
005c4a88  MOV ECX,dword ptr [EBP + -0x2c]
005c4a8b  MOV dword ptr [EBP + -0x4],ECX
005c4a8e  LEA EDX,[EBP + 0xc]
005c4a91  PUSH EDX
005c4a92  MOV EAX,dword ptr [EBP + 0x8]
005c4a95  SUB EAX,dword ptr [EBP + -0x7c]
005c4a98  PUSH EAX
005c4a99  MOV ECX,dword ptr [EBP + -0x4]
005c4a9c  PUSH ECX
005c4a9d  MOV EDX,dword ptr [EBP + -0x8]
005c4aa0  PUSH EDX
005c4aa1  MOV ECX,dword ptr [EBP + -0x74]
005c4aa4  CALL 0x005c4e10
005c4aa9  JMP 0x005c4b9a
005c4aae  MOV EAX,dword ptr [EBP + -0x74]
005c4ab1  CMP dword ptr [EAX + 0x4],0x0
005c4ab5  JNZ 0x005c4ac0
005c4ab7  MOV dword ptr [EBP + -0x80],0x0
005c4abe  JMP 0x005c4ad2
005c4ac0  MOV ECX,dword ptr [EBP + -0x74]
005c4ac3  MOV EDX,dword ptr [EBP + -0x74]
005c4ac6  MOV EAX,dword ptr [ECX + 0x8]
005c4ac9  SUB EAX,dword ptr [EDX + 0x4]
005c4acc  SAR EAX,0x2
005c4acf  MOV dword ptr [EBP + -0x80],EAX
005c4ad2  MOV ECX,dword ptr [EBP + 0x8]
005c4ad5  CMP ECX,dword ptr [EBP + -0x80]
005c4ad8  JNC 0x005c4b9a
005c4ade  MOV EDX,dword ptr [EBP + -0x74]
005c4ae1  MOV EAX,dword ptr [EDX + 0x8]
005c4ae4  MOV dword ptr [EBP + -0x30],EAX
005c4ae7  MOV dword ptr [EBP + -0x10],0x0
005c4aee  CMP dword ptr [EBP + -0x74],0x0
005c4af2  JZ 0x005c4b0a
005c4af4  MOV ECX,dword ptr [EBP + -0x74]
005c4af7  MOV EDX,dword ptr [ECX + 0x4]
005c4afa  CMP EDX,dword ptr [EBP + -0x30]
005c4afd  JA 0x005c4b0a
005c4aff  MOV EAX,dword ptr [EBP + -0x74]
005c4b02  MOV ECX,dword ptr [EBP + -0x30]
005c4b05  CMP ECX,dword ptr [EAX + 0x8]
005c4b08  JBE 0x005c4b10
005c4b0a  CALL dword ptr [0x006b2274]
005c4b10  MOV EDX,dword ptr [EBP + -0x74]
005c4b13  MOV dword ptr [EBP + -0x10],EDX
005c4b16  MOV EAX,dword ptr [EBP + -0x30]
005c4b19  MOV dword ptr [EBP + -0xc],EAX
005c4b1c  MOV ECX,dword ptr [EBP + -0x74]
005c4b1f  MOV EDX,dword ptr [ECX + 0x4]
005c4b22  MOV dword ptr [EBP + -0x34],EDX
005c4b25  MOV dword ptr [EBP + -0x18],0x0
005c4b2c  CMP dword ptr [EBP + -0x74],0x0
005c4b30  JZ 0x005c4b48
005c4b32  MOV EAX,dword ptr [EBP + -0x74]
005c4b35  MOV ECX,dword ptr [EAX + 0x4]
005c4b38  CMP ECX,dword ptr [EBP + -0x34]
005c4b3b  JA 0x005c4b48
005c4b3d  MOV EDX,dword ptr [EBP + -0x74]
005c4b40  MOV EAX,dword ptr [EBP + -0x34]
005c4b43  CMP EAX,dword ptr [EDX + 0x8]
005c4b46  JBE 0x005c4b4e
005c4b48  CALL dword ptr [0x006b2274]
005c4b4e  MOV ECX,dword ptr [EBP + -0x74]
005c4b51  MOV dword ptr [EBP + -0x18],ECX
005c4b54  MOV EDX,dword ptr [EBP + -0x34]
005c4b57  MOV dword ptr [EBP + -0x14],EDX
005c4b5a  MOV EAX,dword ptr [EBP + -0x18]
005c4b5d  MOV ECX,dword ptr [EBP + -0x14]
005c4b60  MOV dword ptr [EBP + -0x3c],EAX
005c4b63  MOV dword ptr [EBP + -0x38],ECX
005c4b66  MOV EDX,dword ptr [EBP + 0x8]
005c4b69  PUSH EDX
005c4b6a  LEA ECX,[EBP + -0x3c]
005c4b6d  CALL 0x005beeb0
005c4b72  MOV EAX,dword ptr [EBP + -0x3c]
005c4b75  MOV ECX,dword ptr [EBP + -0x38]
005c4b78  MOV dword ptr [EBP + -0x20],EAX
005c4b7b  MOV dword ptr [EBP + -0x1c],ECX
005c4b7e  MOV EDX,dword ptr [EBP + -0xc]
005c4b81  PUSH EDX
005c4b82  MOV EAX,dword ptr [EBP + -0x10]
005c4b85  PUSH EAX
005c4b86  MOV ECX,dword ptr [EBP + -0x1c]
005c4b89  PUSH ECX
005c4b8a  MOV EDX,dword ptr [EBP + -0x20]
005c4b8d  PUSH EDX
005c4b8e  LEA EAX,[EBP + -0x28]
005c4b91  PUSH EAX
005c4b92  MOV ECX,dword ptr [EBP + -0x74]
005c4b95  CALL 0x005bc490
005c4b9a  MOV ESP,EBP
005c4b9c  POP EBP
005c4b9d  RET 0x8
